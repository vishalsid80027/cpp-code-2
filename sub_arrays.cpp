// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;

//     cin >> n;
//     int arr[n];
//     for (int i = 0; i<n; i++)       // also this wrost case and time complexitiy=0(n).
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             for (int k = i; k <= j; k++)
//             {
//                 cout << arr[k] << " ";
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int maxno = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)    //Bureat apporach
//         {
//             int sum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 sum += arr[k];
//             }
//             maxno = max(maxno, sum);
//         }
//     }
//     cout << maxno;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int maxsum = INT_MIN;
//     int currentsum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (currentsum < 0)
//         {
//             currentsum = 0;
//         }
//         maxsum = max(maxsum, currentsum);
//     }
//     cout << maxsum;
//     return 0;
// }

//sum of all subarrays
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr = 0;
        for (int j = i; j < n; j++)
        {
            curr += arr[j];
            cout << curr<<endl;
        }
        
    }
    return 0;
}