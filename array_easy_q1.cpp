#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int nums[n];
    int i;
    cout<<"Enter the array elements one by one"<<endl;
    for(i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cout<<"Enter the target"<<endl;
    cin>>target;
    int j;
    for(i=0,j=0;i<n,j<n;i++,j++){
        for(j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                cout<<"["<<i<<","<<j<<"]";
            }
        }
    }
}