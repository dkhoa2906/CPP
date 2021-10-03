#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    short int soHangA, soHangB;

    cout << "Nhap vao 2 so nguyen duong 3 chu so: ";
    cin >> soHangA >> soHangB;

    short int tramB = soHangB/100;
    short int chucB = (soHangB - tramB*100)/10;
    short int donviB = soHangB - tramB*100 - chucB*10;

    cout << "Mo phong phep nhan tay:" << endl;
    cout << setw(6) << right << soHangA << endl;
    cout << setw(3) << right << "x" << endl;
    cout << setw(6) << right << soHangB << endl;
    cout << setfill('-') << setw(6) << "" << endl;
    cout << setfill(' ');
    cout << setw(6) << right << donviB*soHangA << endl;
    cout << setw(5) << right << chucB*soHangA << endl;
    cout << setw(4) << right << tramB*soHangA << endl;
    cout << setfill('-') << setw(6) << "" << endl;
    cout << setfill(' ');
    cout << setw(6) << right << soHangA*soHangB;
    

    return 0;
}