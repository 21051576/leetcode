#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int nums[n];
    int a,b,c;
    a=0;
    b=1;
    nums[0]=0;
    nums[1]=1;
    for(int i=2;i<n;i++){
        c=a+b;
        nums[i]=c;
        a=b;
        b=c;
    }
    int n1;
    cout<<"Enter the value of n1"<<endl;
    cin>>n1;
    cout<<"The output is"<<endl;
    int fib=nums[n1-1]+nums[n1-2];
    n1=fib;
    cout<<n1;
    return 0;
}