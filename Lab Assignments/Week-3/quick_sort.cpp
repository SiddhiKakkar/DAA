#include<iostream>
using namespace std;
int partion(int arr[],int low,int high){
    int i=low-1;
    int pivot=arr[high];
    for (int j = low; j < high; j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void QuickSort(int arr[],int low,int high){
    if(low<high){
        int p = partion(arr,low,high);
        QuickSort(arr,low,p-1);
        QuickSort(arr,p+1,high);
    }
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        QuickSort(arr,0,n-1);
        int flag=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"Yes"<<endl;
        else    
            cout<<"No"<<endl;
    }
}
