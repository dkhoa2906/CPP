#include<iostream>

using namespace std;

int main()
{
    short int n;

    cout << "Nhap so nguyen duong 3 chu so: ";
    cin >> n;

    short int tram = n/100;
    n -= 100*tram;

    short int chuc = n/10;
    n -= 10*chuc;

    cout << tram << " tram " << chuc << " chuc " << n << " don vi" << endl;

    cout << tram << " + " << chuc << " + " << n << " = " << tram+chuc+n;

    return 0;
}