#include<iostream>
using namespace std;   
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }
     for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i = 0;i<n;i++){
        for(int j = i+1 ; j<n;j++){
            if(arr[i]<arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    cout<<endl;
    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<arr[3];
}