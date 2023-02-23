#include<bits/stdc++.h>
using namespace std;

int main(){
// The limits asking from users
int n;
cout<<"Enter your limits:"<<endl;
cin>>n;

for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<(char)('A'+j-1)<<" ";
    }
    cout<<endl;
    
}

return 0;
}