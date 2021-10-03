#include<iostream>

using namespace std;

int main()
{
    int length, width;

    cout << "Nhap chieu dai va chieu rong: ";
    cin >> length >> width;
    
    int perimeter = 2*(length + width);
    int area = length*width;
    
    cout << "Chu vi = " << perimeter << endl;
    cout << "Dien tich = " << area;

    return 0;
}