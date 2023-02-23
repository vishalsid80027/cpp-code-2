#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}
int counter=1;
while(counter<n){
    for(int i=0;i<n-counter;i++){
        if(arr[i]>arr[i=1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    counter++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
return 0;
}

#include <iostream>
using namespace std;
void swapping(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
    void bubblesort(int *arr, int size)
   
        for (int i = 0; i < size; i++)
        {
            int swap = 0;
            for (int j = 0; j < size - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swapping(array[j], array[j + 1]);
                    swaps = 1;
                }
            }
        }
        if (!swaps)
            break;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    cout << "enter element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "array before sorting";
    display(arr, n);
    bubblesort(arr, n);
    cout << "array after sorting";
    display(arr, n);
    return 0;
}