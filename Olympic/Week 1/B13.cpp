#include<iostream>

using namespace std;

int main()
{
    int a, b, v;

    cout << "Nhap input: ";
    cin >> a >> b >> v;
    
    int t = (v-b) / (a-b);
    
    t += ((v-b) % (a-b) == 0) ? 0 : 1;

    cout << t;
    
    return 0;
}