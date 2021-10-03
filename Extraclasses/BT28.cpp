#include <iostream>
#include <fstream>

using namespace std;

int main(){
    short int h, a, b;

    ifstream input("snail.inp");
    input >> h >> a >>b;
    input.close();

    short int t = (h-b) / (a-b);
    t += ((h-b)%(a-b) != 0) ? 1 : 0;
    short int s = 2 * b * (t-1) + h;

    ofstream output("snail.out");
    output << t << " " << s;
    output.close();

    return 0;
}