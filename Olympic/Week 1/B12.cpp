#include<iostream>

using namespace std;

int main()
{
    int T;

    cout << "Nhap so tien: ";
    cin >> T;

    int soTo100 = T/100;
    T -= soTo100*100;

    int soTo20 = T/20;
    T -= soTo20*20;

    int soTo5 = T/5;
    T -= soTo5*5;

    cout << soTo100 << " to 100d + " << soTo20 << " to 20d + ";
    cout << soTo5 << " to 5d + " << T << " to 1d" << endl;
    cout << "=> Tong so to la: " << soTo100+soTo20+soTo5+T;

    return 0;
}