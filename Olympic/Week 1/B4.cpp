#include<iostream>

using namespace std;

int main()
{
    int radius;

    cout << "Nhap ban kinh: ";
    cin >> radius;

    double perimeter = 2*radius*3.14;
    double area = radius*radius*3.14;

    cout << "Chu vi = " << perimeter << endl;
    cout << "Dien tich = " << area;

    return 0;
}