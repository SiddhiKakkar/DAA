/* Time Complexity = O(log n)
   Space Complexity = O(log n)
*/

#include<iostream>
using namespace std;
void binarysearch(int arr[],int s,int e,int target,int count){
    if(s>e){
        cout<<"Not Prenent "<<count;
        return;
    }
    int mid = (s+e)/2;
    count++;
    if(arr[mid]==target){
        cout<<"Present "<<count;
        return;
    }
    else if(target<arr[mid])
        e=mid-1;
    else    
        s=mid+1;
    binarysearch(arr,s,e,target,count);
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,target,c=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>target;
        int start=0,end=n-1;
        binarysearch(arr,start,end,target,c);
    }
}
