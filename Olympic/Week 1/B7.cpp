#include<iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int tuSoA, mauSoA, tuSoB, mauSoB;
    
    cout << "Nhap tu va mau cua phan so thu nhat: ";
    cin >> tuSoA >> mauSoA;

    cout << "Nhap tu va mau cua phan so thu hai: ";
    cin >> tuSoB >> mauSoB;

    int tichTuSo = tuSoA*tuSoB;
    int tichMauSo = mauSoA*mauSoB;

    int UCLN = __gcd(tichTuSo,tichMauSo);

    if (UCLN < tichTuSo*tichMauSo) {
        tichTuSo /= UCLN;
        tichMauSo /= UCLN;
    }

    cout << "Tich hai phan so = " << tichTuSo << "/" << tichMauSo;

    return 0;
}