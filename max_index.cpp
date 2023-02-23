#include<bits/stdc++.h>
using namespace std;
int maxIndexDiff(int A[], int N){
    int ans=0;
    for(int i=0;i<N;i++){
        for(int j=N-1;j>i;j--){
            if(A[j]>=A[i]){
                ans=max(ans,j-i);
                break;
            }
        }
    }
    return ans;
}
int main(){
int N;
cin>>N;
int A[N];
for(int i=0;i<N;i++){
    cin>>A[i];
}
int res=maxIndexDiff(A, N);
cout<<res<<endl;
return 0;
}