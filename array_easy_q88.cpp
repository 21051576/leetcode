#include<iostream>
using namespace std;
int main(){
	int m, n, i, k,temp;
    cout<<"Enter the Size for First Array: ";
    cin>>m>>n;
    int nums1[m+n], nums2[n], nums3[m+n];
    cout<<"Enter "<<m<<" Elements for First Array: ";
    for(i=0; i<m; i++)
    {
        cin>>nums1[i];
        nums3[i] = nums1[i];
    }
    k = i;
    cout<<"Enter "<<n<<" Elements for Second Array: ";
    for(i=0; i<n; i++)
    {
        cin>>nums2[i];
        nums3[k] = nums2[i];
        k++;
    }
    for(i=0;i<m+n-1;i++){
        for(int j=0;j<m+n-i-1;j++){
            if(nums3[j]>nums3[j+1]){
                temp=nums3[j];
                nums3[j]=nums3[j+1];
                nums3[j+1]=temp;
            }
        }
    }
    for(i=0;i<m+n;i++){
        nums1[i]=nums3[i];
        cout<<nums3[i]<<" ";
    }
    return 0;
}