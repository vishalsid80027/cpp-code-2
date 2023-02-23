#include <bits/stdc++.h>
using namespace std;
string generatePASS(int len)
{
    string str = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int n = str.length();
    string PASS;

    for (int i = 1; i <= len; i++)
        PASS.push_back(str[rand() % n]);

    return (PASS);
}
int main()
{
    srand(time(NULL));
    int len = 6;
    printf("Your PASS is - %s", generatePASS(len).c_str());
    return 0;
}