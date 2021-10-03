#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double weightInkg;
    const double a = 2.20462262;

    cout << "Nhap vao khoi luong (kg):";
    cin >> weightInkg;

    double weightInlb = a*weightInkg;

    cout << "Khoi luong (lb) = " << setprecision(15) << weightInlb;

    return 0;
}