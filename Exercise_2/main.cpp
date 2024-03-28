#include "ComplexNumber.hpp"
#include <iostream>
using namespace std;

int main()
{//prove: stampa
    ComplexNumber c1(2.4,-3.1);
    ComplexNumber c2(4,6);
    cout<<c1<<endl;
    cout<<c2<<endl;

    //somma
    ComplexNumber c3=c1+c2;
    cout<<c3<<endl;

    //==
    ComplexNumber c4(2.4,3.1);
    if(c1==c4){
        cout<<"Sono uguali"<<endl;
    }
    else{
        cout<<"Sono diversi"<<endl;
    }

    //coniugato
    ComplexNumber c5=conjugate(c1);
    if(c5==c4){
        cout<<"Sono uguali, giusto"<<endl;
    }
    else{
        cout<<"Sono diversi"<<endl;
    }



    return 0;
}
