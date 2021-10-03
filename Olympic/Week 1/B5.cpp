#include<iostream>

using namespace std;

int main()
{
    int h, m, s;
    
    cout << "Nhap so gio, phut, giay: ";
    cin >> h >> m >> s;

    int timeInSeconds = s + 60*m + 3600*h;

    cout << "Tong so giay = " << timeInSeconds << "giay";
      
    return 0;
}