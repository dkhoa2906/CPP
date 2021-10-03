#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int inpHour, inpMinute, inpSecond;

    cout << "Input: ";
    cin >> inpHour >> inpMinute >> inpSecond;

    int s = inpSecond%60;
    int m = (inpMinute + inpSecond/60)%60;
    int h = (inpHour + inpMinute/60)%24;

    cout << setw(2) << setfill('0') << h << ":"; 
    cout << setw(2) << setfill('0') << m << ":";
    cout << setw(2) << setfill('0') << s;
    
    return 0;

     



}