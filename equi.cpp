#include<bits/stdc++.h>
using namespace std;
int Equilibrium(int a[],int n){
int left_sum=0;
int right_sum=0;
for(int i=0;i<n;i++){
    left_sum+=a[i];

}
if(n==1){
    return 1;
}
else if(n==2){
    return -1;
}
else{
    for(int i=0;i<n-1;i++){
        if(right_sum==(left_sum-a[i]-right_sum)){
            return(i+1);
        }
        right_sum+=a[i];
    }
}
return -1;

}
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int res=Equilibrium(a,n);
cout<<res<<endl;

return 0;
}