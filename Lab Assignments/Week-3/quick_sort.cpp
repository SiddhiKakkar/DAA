#include<iostream>
using namespace std;
void SelectionSort(int arr[],int n){
    int i,j,pos,min=0,comp=0,swaps=0;
    for (int i = 0; i < n-1; i++){
        min = arr[i];
        pos = i;
        for (int j = i+1; j < n; j++){
            comp++;
            if(min>arr[j]){
                min=arr[j];
                pos=j;
            }
        }
        if(pos!=i){
            arr[pos]=arr[i];
            arr[i]=min;
            swaps++;
        }
    }
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Comparisons: "<<comp<<endl;
    cout<<"Swaps: "<<swaps<<endl;
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
        SelectionSort(arr,n);
    }
}
