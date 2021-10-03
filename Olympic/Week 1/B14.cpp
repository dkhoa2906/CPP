#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int g;
    long long y;

    cout << "Nhap input: "; 
    cin >> g >> y;

    int s = g/2 + 2;    //Tong m, n
    int p = y + g;      //Tich m, n
    
    int m = (s - sqrt(s*s - 4*p))/2;
    int n = s - m;

    if (m>n) 
    {
        swap(m,n);
    }
	
    cout << "Kich thuoc san nha la: " << m << "x" << n;
    return 0;
}