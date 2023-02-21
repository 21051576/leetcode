#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of prices"<<endl;
    cin>>n;
    int prices[n];
    cout<<"Enter the prices one by one"<<endl;
    int i;
    for(i=0;i<n;i++){
        cin>>prices[i];
    }
    int max=0,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            int diff=prices[j]-prices[i];
            if(diff>0){
                if(diff>=max){
                    max=diff;
                }
            }
        }
    }
    cout<<"Maximum Profit is "<<max;
    return 0;
}