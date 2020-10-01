#include<iostream>
using namespace std;

int main(){

    int arr[20],n;

    cout<<"Enter the size of array";
    cin>>n;
    cout<<"Enter elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<"index is "<<i<<" : "<<arr[i]<<" sq is "<<arr[i]*arr[i]<<endl;
    }
    return 0;
}
