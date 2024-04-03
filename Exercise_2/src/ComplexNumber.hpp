#pragma once
#include <iostream>
using namespace std;


struct ComplexNumber {
    double real;
    double imag;

    ComplexNumber()=default;
    ComplexNumber(double a, double b){
        real=a;
        imag=b;
    }
    ComplexNumber(int a, int b) {//avrei anche potuto farli misti
        real=double(a);//trasformo in double
        imag=double(b);
    }
};

ostream& operator<<(ostream& os, const ComplexNumber& c); //dichiaro
ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2);
bool operator==(const ComplexNumber& c1, const ComplexNumber& c2);
ComplexNumber conjugate(const ComplexNumber& c);
