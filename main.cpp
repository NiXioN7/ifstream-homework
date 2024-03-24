#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() 
{
    setlocale(0, "ru");
    string line;
    ifstream in;
    string x;
    string y;
    int i = 0;
    in.open("C:/Users/User/Desktop/123.txt");
    if (in.is_open())
    {
        while (getline(in, line))
        {
            x += line[0];
            y += line[2];
        }
    }
    ofstream out;
    out.open("C:/Users/User/Desktop/1234.txt");
    if (out.is_open())
    {
        out << x[0] << " " << x[1] << " " << x[2] << endl;
        out << y[0] << " " << y[1] << " " << y[2] << endl;
    }
}
