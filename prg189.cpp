#include<iostream>
#include<array>
using namespace std;
int main(){
    int arr[7];
    cout<<"Enter the numbers one by one in array"<<endl;
    int i;
    for(i=0;i<7;i++){
        cin>>arr[i];
    }
    cout<<"The original array is"<<endl;
    for(i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    int j=0,t=0;
    int n=7,p=1;
    int k;
    cout<<"enter the number of times you need to rotate"<<endl;
    cin>>k;
    for(i=0;i<k;i++){
        t=arr[6];
        for(j=6;j>-1;j--){
           arr[j]=arr[j-1];
        }
        arr[0]=t;
        }
    for(i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}