// #include <bits/stdc++.h>
// using namespace std;
// int linearsearch(int arr[], int n, int key)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             return 1;
//         }
        
//     }
//     return -1;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int key;
//     cin >> key;
//     cout << linearsearch(arr, n, key);
//     return 0;
// }




 #include <iostream>
 using namespace std;
 int main()
 {
 static int a[5] = {1,2,3,4,5};
 void display (int a[],int n);
 int n = 5;
 cout <<"contents of the array in main\n";
 for (int i = 0; i <= n-1; ++i) {
 a[i] = a[i] % 2;
 cout << a[i] << '\t';
 }
 display(a,n);
 return 0;
 }
 void display(int a[],int n)
 {
 cout <<"\ncontents of the array in function\n";

 for (int i = 0; i <= n-1; ++i) {
 a[i] = i % 2;
 cout << a[i] << '\t';
 }
 }