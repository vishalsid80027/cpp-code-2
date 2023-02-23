#include<bits/stdc++.h>
using namespace std;
int subarray(int arr[],int n){
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        maxsum=max(maxsum,currsum);
        if(currsum<0){
        currsum=0;
        }
    }
    return maxsum;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int ans=subarray(arr,n);
cout<<ans<<" "<<endl;

return 0;
}