#include<iostream>

using namespace std;

int main() 
{
    short int n;
    
    cout << "Nhap so nguyen duong: ";
    cin >> n;

    cout << "So dao nguoc: " << n%10 << n/10;
    
    return 0;
}