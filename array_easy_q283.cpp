#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int nums[n];
    int i,temp,c=0;
    cout<<"enter array containing zero"<<endl;
    for(i=0;i<n;i++){
        cin>>nums[i];
    }
    for(i=0;i<n;i++){
        if(nums[i]!=0){
            nums[c++]=nums[i];
        }
    }
    while(c<n){
        nums[c++]=0;
    }
    cout<<"printing array"<<endl;
    for(i=0;i<n;i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}