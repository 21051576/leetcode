#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int nums[n];
    int i,k=0;
    cout<<"Enter the array elements"<<endl;
    for(i=0;i<n;i++){
        cin>>nums[i];
    }
    int temp[n],j=0;
    for(i=0;i<n;i++){
        if(nums[i]!=nums[i+1]){
            temp[j++]=nums[i];
        }
    }
    for(i=j;i<n;i++){
        temp[i]=0;
    }
    for(i=0;i<n;i++){
        nums[i]=temp[i];
    }
    cout<<"Printing the array"<<endl;
    for(i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}