#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    int nums[n];
    cout<<"Enter the array elements"<<endl;
    int i,c=0;
    for(i=0;i<n;i++){
        cin>>nums[i];
    }
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(nums[i]==nums[j]){
                c++;
            }
        }
        cout<<"The element appearing maximum no of times is"<<endl;
        if(c>n/2){
            cout<<nums[i]<<" ";
            break;
        }
    }
    return 0;
}