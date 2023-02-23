#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter the size of arrays:"<<endl;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    cout<<"reversed the arrays"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}