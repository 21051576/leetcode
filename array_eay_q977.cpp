#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int nums[n];
    int i,j,temp;
    cout<<"Enter the array elements "<<endl;
    for(i=0;i<n;i++){
        cin>>nums[i];
    }
    for(i=0;i<n;i++){
        nums[i]=nums[i]*nums[i];
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(nums[j]>nums[j+1]){
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}