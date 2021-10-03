#include<iostream>

using namespace std;

int main()
{
    short int s;

    cout << "Nhap so nguyen duong 4 chu so: ";
    cin >> s;

    short int h = s / 3600;
    s -= 3600*h;

    short int m = s / 60;
    s -= 60*m;

    cout << h << " gio " << m << " phut " << s << " giay ";

    return 0;
}