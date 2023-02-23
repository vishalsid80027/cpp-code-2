
#include <iostream>
using namespace std;
void maxsubarray(int arr[],int n,int k,int x){
    int sum=0, ans=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    if(sum<x){
        ans=sum;
    }
    for(int i=k;i<n;i++){
        sum=sum-arr[i-k];
        sum+=arr[i];
        if(sum<x){
            ans=max(ans,sum);
        }
    }
    cout<<ans<<" "<<"max subarrays(<x)"<<endl;
}
int main() {
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int k;
   cin>>k;
   int x;
   cin>>x;
   maxsubarray(arr,n,k,x);
   

    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// void  maxsubarray(int arr[],int n,int k,int x){
//     int sum=0,ans=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     if(sum<x){
//         sum=ans;
//     }
//     for(int i=k;i<n;i++){
//         sum=sum-arr[k-1];
//         sum+=arr[i];
//         if(sum<x){
//             ans=max(ans,sum);
//         }
//     }
//     cout<<ans<<" "<<"this is max subarrays(<x)"<<endl;

// }
// int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    int k;
//    cin>>k;
//    int x;
//    cin>>x;
//    maxsubarray(arr,n,k,x);
// return 0;
// }