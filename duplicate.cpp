#include<bits/stdc++.h>
using namespace std;
int remdup(int arr[],int n){
    int temp[n];
    temp[0]=arr[0];
    int res=1;
    for(int i=0;i<n;i++){
        if(temp[res-1]!=arr[i]){
            if(temp[res]=arr[i])
            res++;
        }
    }
    for(int i=0;i<res;i++)
        arr[i]=temp[res];
        return res;
    
}
int main(){
int arr[]={1,2,2,5,1,4,4,3};
int n=sizeof(arr)/sizeof(arr[0]);
int ans=remdup(arr,n);
cout<<ans<<" ";
return 0;
}