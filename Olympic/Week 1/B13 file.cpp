#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    int a, b, v;

    ifstream fileInput("input.txt");
    fileInput >> a >> b >> v;
    fileInput.close();
    
    int t = (v-b) / (a-b);
    
    t += ((v-b) % (a-b) == 0) ? 0 : 1;

    ofstream fileOutput("output.txt");
    fileOutput << t;
    fileOutput.close();

    return 0;
}