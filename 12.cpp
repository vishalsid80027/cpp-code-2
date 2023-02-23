#include <bits/stdc++.h>
using namespace std;
void printvalue(char digit)
{
    switch (digit)
    {
    case '0':
        cout << "zero";
        break;

    case '1':
        cout << "one";
        break;
    case '2':
        cout << "two";
        break;
    case '3':
        cout << "three";
        break;
    case '4':
        cout << "four";
        break;
    case '5':
        cout << "five";
        break;
    case '6':
        cout << "six";
        break;
    case '7':
        cout << "seven";
        break;
    case '8':
        cout << "eight";
        break;
    case '9':
        cout << "nine";
        break;
    }
}
void printword(string N)
{
    int i;
    int length = N.length();
    for (i = 0; i < length; i++)
    {
        printvalue(N[i]);
    }
}
int main()
{
    string N = " 13845 ";
    cout << endl;
    printword(N);
    
    return 0;
}