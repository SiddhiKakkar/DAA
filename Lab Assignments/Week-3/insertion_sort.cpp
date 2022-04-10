#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n){
    int i,j,t=0,shift=0,comp=0;
    for (int i = 1; i < n; i++){
        t=arr[i];
        j=i-1;
        shift++;
        while(j>=0 && t<arr[j]){
            arr[j+1]=arr[j];
            j--;
            comp++;
            shift++;
        }
        arr[j+1]=t;
    }
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"Comparisons: "<<comp<<endl;    
    cout<<"Shifts: "<<shift<<endl;    
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
        InsertionSort(arr,n);
    }
}
