#include <iostream>
#include "Eigen/Eigen"
using namespace std;
using namespace Eigen;


int main()
{
    Vector2d sol;
    sol << -1.0e+0, -1.0e+00;

    //primo
    cout<<"Primo sistema"<<endl;
    Matrix2d A1;
    A1 << 5.547001962252291e-01, -3.770900990025203e-02,
        8.320502943378437e-01, -9.992887623566787e-01;
    Vector2d b1;
    b1 <<-5.169911863249772e-01,
        1.672384680188350e-01;

    Vector2d x1lu= A1.lu().solve(b1);
    Vector2d x1qr= A1.householderQr().solve(b1);


    double err1lu= (x1lu-sol).norm()/sol.norm();
    double err1qr= (x1qr-sol).norm()/sol.norm();
    cout<<"Errore PALU: "<<err1lu<<endl;
    cout<<"Errore QR: "<<err1qr<<endl;


    //secondo
    cout<<"Secondo sistema"<<endl;
    Matrix2d A2;
    A2 << 5.547001962252291e-01, -5.540607316466765e-01,
        8.320502943378437e-01, -8.324762492991313e-01;
    Vector2d b2;
    b2 <<-6.394645785530173e-04, 4.259549612877223e-04;

    Vector2d x2lu= A2.lu().solve(b2);
    Vector2d x2qr= A2.householderQr().solve(b2);


    double err2lu= (x2lu-sol).norm()/sol.norm();
    double err2qr= (x2qr-sol).norm()/sol.norm();
    cout<<"Errore PALU: "<<err2lu<<endl;
    cout<<"Errore QR: "<<err2qr<<endl;


    //terzo
    cout<<"Terzo sistema"<<endl;
    Matrix2d A3;
    A3 << 5.547001962252291e-01, -5.547001955851905e-01,
        8.320502943378437e-01, -8.320502947645361e-01;
    Vector2d b3;
    b3 <<-6.400391328043042e-10, 4.266924591433963e-10;

    Vector2d x3lu= A3.lu().solve(b3);
    Vector2d x3qr= A3.householderQr().solve(b3);


    double err3lu= (x3lu-sol).norm()/sol.norm();
    double err3qr= (x3qr-sol).norm()/sol.norm();
    cout<<"Errore PALU: "<<err3lu<<endl;
    cout<<"Errore QR: "<<err3qr<<endl;


    return 0;
}
