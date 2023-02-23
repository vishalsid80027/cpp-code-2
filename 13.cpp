// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int output[500], input[500], count, i;
//     cout << "eneter the arrays" << endl;
//     cin >> count;
//     cout << "enter" << count << "numbers" << endl;
//     for (i = 0; i < count; i++)
//     {
//         cin >> input[i];
//     }
//     for (i = 0; i < count; i++)
//     {
//         output[i] = input[count - i - 1];
//     }
//     for (i = 0; i < count; i++)
//     {

//         cout << output[i];
//     }

//     return 0;
// }

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
bool issorted(int arr[],int n){
    for(int i=0;i,n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                return false;
            }
        }
        return true;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    issorted(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
