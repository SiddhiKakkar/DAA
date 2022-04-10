#include<iostream>
using namespace std;
void function(int arr[],int n,int key){
    int c=0;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if(abs(arr[i]-arr[j])==key)
                c++;
        }
    }
    cout<<c;
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
        function(arr,n,key);
    }
}
