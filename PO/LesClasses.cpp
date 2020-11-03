#include "includes.h"
#include "LesClasses.h"

void Calcules::ini_obj(int n1, int n2)
{
    this->setN1(n1);
    this->setN2(n2);
}

Calcules::Calcules(void)
{
    this->ini_obj(0, 0);
}

Calcules::Calcules(int n1, int n1)
{
    this->ini_obj(n1, n2);
}

int Calcules::m_add(int n1, int n2)
{
    return n1 + n2;
}

int Calcules::m_sous(int n1, int n2)
{
    return n1 - n2;
}

int Calcules::getN1(void)
{
    return this->n1;
}
int Calcules::getN2(void)
{
    return this->n2;
}

int Calcules::setN1(int n1)
{
    if (n1 > 0) {
        this->n1 = n1;
    }
    else {
        this->n1 = 0;
    }
}

int Calcules::setN2(int n2)
{
    if (n2 > 0) {
        this->n2 = n2;
    }
    else {
        this->n2 = 0;
    }
}
