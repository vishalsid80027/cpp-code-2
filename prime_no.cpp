#include <bits/stdc++.h>
using namespace std;
class abc
{
public:
    int check(int x)
    {
        int p = 0;
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                p = 1;
                break;
            }
        }
        return p;
    }
};
int main()
{
    int x, p;
    cout << "Enter your numbers=" << endl;
    cin >> x;
    abc obj;
    p = obj.check(x);
    if (p == 0)
    {
        cout << "prime" << endl;
    }
    else
    {
        cout << "non-prime" << endl;
    }
    return 0;
}
