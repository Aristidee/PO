#!/usr/bin/env python3
"""
Serveur HTTP simple pour le projet Hello World
"""

import http.server
import socketserver
import os
import webbrowser
from threading import Timer

# Configuration du serveur
PORT = 8000
DIRECTORY = os.path.dirname(os.path.abspath(__file__))

class CustomHTTPRequestHandler(http.server.SimpleHTTPRequestHandler):
    def __init__(self, *args, **kwargs):
        super().__init__(*args, directory=DIRECTORY, **kwargs)
    
    def end_headers(self):
        # Ajouter des headers CORS pour permettre l'accès local
        self.send_header('Access-Control-Allow-Origin', '*')
        self.send_header('Access-Control-Allow-Methods', 'GET, POST, OPTIONS')
        self.send_header('Access-Control-Allow-Headers', 'Content-Type')
        super().end_headers()

def open_browser():
    """Ouvre automatiquement le navigateur après un délai"""
    webbrowser.open(f'http://localhost:{PORT}')

def start_server():
    """Démarre le serveur HTTP"""
    print(f"🚀 Démarrage du serveur Hello World...")
    print(f"📁 Répertoire: {DIRECTORY}")
    print(f"🌐 Port: {PORT}")
    print(f"🔗 URL: http://localhost:{PORT}")
    print(f"🔗 URL alternative: http://127.0.0.1:{PORT}")
    print("\n" + "="*50)
    print("✨ Votre site Hello World est maintenant en ligne!")
    print("="*50 + "\n")
    
    # Ouvrir automatiquement le navigateur après 2 secondes
    Timer(2.0, open_browser).start()
    
    try:
        with socketserver.TCPServer(("", PORT), CustomHTTPRequestHandler) as httpd:
            print(f"✅ Serveur démarré avec succès sur le port {PORT}")
            print("📱 Ouvrez votre navigateur et allez à: http://localhost:8000")
            print("⏹️  Appuyez sur Ctrl+C pour arrêter le serveur\n")
            httpd.serve_forever()
    except KeyboardInterrupt:
        print("\n🛑 Serveur arrêté par l'utilisateur")
    except OSError as e:
        if e.errno == 98:  # Address already in use
            print(f"❌ Erreur: Le port {PORT} est déjà utilisé")
            print("💡 Essayez de fermer les autres serveurs ou changez le port")
        else:
            print(f"❌ Erreur lors du démarrage du serveur: {e}")

if __name__ == "__main__":
    start_server()