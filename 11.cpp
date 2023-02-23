#include <bits/stdc++.h>
using namespace std;
class abc
{
public:
    void dis(int n)
    {
        int i, j;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
            {
                cout << " $ ";
            }
            cout<<endl;
        }

    }

};

int main()
{
    abc obj;
    int n;
    cin >> n;

    obj.dis(10);
    return 0;
}

#include <iostream>
using namespace std;

int main() {
	int arr[5]={-11 ,24 ,-5 ,-8 ,-4};
	int j=0;
	for(int i=0;i<5;i++){
	    if(arr[i]<0){
	        if(i!=j){
	            swap(arr[i],arr[j]);
	            j++;
	        }
	    }
	    for(int i=0;i<5;i++){
	        cout<<arr[i]<<" ";
	    }

	}
	return 0;
