// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// class solution{
//     public:
//     int binarysearch(int arr[],int n,int k){
//         int s=0;
//         int e=n;
//         while(s<e){
//             int mid=(s+e)/2;
//             if(arr[mid]==k){
//                 return mid;
//             }
//             else if(arr[mid]<k){
//                 return mid+1;
//             }
//             else{
//                 return mid-1;
//             }
//         }
//         return -1;
//     }
// };
// int main() {
//     // Write C++ code here
//     int x;
//     cin>>x;
//     int arr[x];
//     for(int i=0;i<x;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     solution ob;
//     int result=ob.binarysearch(arr,x,k);
//     cout<<result<<" "<<endl;

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
    void reverseingroup(int arr[],int n,int k){
        for(int i=0;i<n;i+=k){                         //reverse in grouping arrays.
            int left=i;
            int right=min(i+k-1,n-1);
            while(left<right){
                swap(arr[left++],arr[right--]);
            }
        }
    }

int main(){
    int arr[]={1, 2, 3, 4, 5, 6, 7, 8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;

reverseingroup(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}