#include<iostream>
using namespace std;
int binarysearch(int arr[],int l,int r,int key){
    if(r<l)
        return -1;
    int mid=l+(r-l)/2;
    if(arr[mid]==key)
        return mid;
    if(arr[mid]>key)
        return binarysearch(arr,l,mid-1,key);
    return binarysearch(arr,mid+1,r,key);
}
int countOccurences(int arr[],int n,int key){
    int ind = binarysearch(arr,0,n-1,key);
    if(ind==-1)
        return 0;
    int count=1;
    int left=ind-1;
    while(left>=0 && arr[left]==key)
        count++ , left--;
    int right=ind+1;
    while(right<n && arr[right]==key)
        count++ , right++;

    return count;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,key;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin>>arr[i];
        cin>>key;
        cout<<countOccurences(arr,n,key)<<endl;
    }
}
