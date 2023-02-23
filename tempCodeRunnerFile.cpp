#include <iostream>
using namespace std;

int main()
{
    int arr[10], n, max, min;
    cin >> n;
    cout << "enter your array element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "largest value->" << max << endl;
    cout << "smallest value->" << min << endl;
    return 0;
}