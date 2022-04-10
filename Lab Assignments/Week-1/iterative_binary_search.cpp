/* Time Complexity = O(log n)
   Space Complexity = O(1)
*/

#include<iostream>
using namespace std;
void binarysearch(int arr[],int s,int e,int target){
    int mid,comp=0;
    while(s<=e){
        mid=s+(e-s)/2;
        comp++;
        if(arr[mid]==target){
            cout<<"Present "<<comp<<endl;
            return;
        }
        if(arr[mid]<target)
            s=mid+1;
        else
            e=mid-1;            
    }
    cout<<"Not Present "<<comp<<endl;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,target;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>target;
        int start=0,end=n-1;
        binarysearch(arr,start,end,target);
    }
}
