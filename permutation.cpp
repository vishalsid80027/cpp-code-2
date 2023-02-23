#include <bits/stdc++.h>
using namespace std;
void permutation(string a, int l, int r)
{
    if (l == r)
    {
        cout << a << endl;
        return;
    }
    else
    {
        for (int i = 1; i <= r; i++)
        {
            swap(a[1], a[i]);
            permutation(a, l + 1, r); // recursive call
            swap(a[1], a[i]);         // backtracing
        }
    }
}
int main()
{
    string str = "ABC";
    permutation(str, 0, str.size() - 1);
    return 0;
}