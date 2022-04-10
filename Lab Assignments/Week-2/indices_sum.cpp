#include<iostream>
using namespace std;
void function(int arr[],int n){
    int flag=0,i=0,j=0,k=0;
    for (i = 0; i < n; i++){
        for (j = i+1; j < n-1; j++){
            for (k = j+1; k < n-2; k++){
                if(arr[i]+arr[j]==arr[k])
                    cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                    return;
            }
        }
    }
    cout<<"No sequence found"<<endl;
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
        function(arr,n);
    }
}
