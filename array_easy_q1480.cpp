#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    int i;
    int nums[n];
    int k=0;
    int runningsums[n];
    for(i=0;i<n;i++){
        cin>>nums[i];
    }
    int sum=0;
    //runningsums[0]=nums[i];
    for(i=0;i<n;i++){
       for(k=0;k<=i;k++){
         sum=sum+nums[k];
       }
       runningsums[i]=sum;
       sum=0;
    }
    for(i=0;i<n;i++){
        cout<<runningsums[i]<<" ";
    }
    return 0;
}