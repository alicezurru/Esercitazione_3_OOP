#include <iostream>
#include "ComplexNumber.hpp"
#include <cmath>
using namespace std;


ostream& operator<<(ostream& os, const ComplexNumber& c)
{
    os<<c.real;
    if(c.imag>=0){
        os<<"+";
    }
    os<<c.imag<<"i";
    return os;
}

ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2)
{
    double r=c1.real + c2.real;
    double i=c1.imag + c2.imag;
    ComplexNumber c(r,i);
    return c;
}

bool operator==(const ComplexNumber& c1, const ComplexNumber& c2)
{
    double tol=pow(10,-10);//scelgo una tolleranza
    bool flag = true;
    if(abs(c1.real-c2.real)>tol || abs(c1.imag-c2.imag)>tol){
        flag=false;
    }
    return flag;
}

ComplexNumber conjugate(const ComplexNumber c)
{
    ComplexNumber cc(c.real,(-c.imag));
    return cc;
}
