/* Time Complexity = O(sqrt(n)) or O(n/m + (m-1))
   Space Complexity = O(1)
*/

#include<bits/stdc++.h>
using namespace std;

void jumpsearch(int arr[],int l,int n){
    int count = 0;
    int low,high,jump;
    low=0;
    jump=int(sqrt(l));
    high=low+jump;
    while(n>=arr[min(high,l-1)]){
        count++;
        if(n==arr[min(high,l-1)]){
            cout<<"Present "<<count;
            return;
        }
        low=high;
        high=low+jump;
        if(low>=l){
            cout<<"Not Present "<<count;
            return;
        }
    }
    for (int i = low; i < min(high,l-1); i++){
        count++;
        if(arr[i]==n){
            cout<<"Presnt "<<count;
            return;
        }
    }
    cout<<"Not Present "<<count;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,key,i;
        cin>>n;
        int arr[n];
        for (i = 0; i < n; i++)
            cin>>arr[i];
        cin>>key;
        jumpsearch(arr,n,key);
    }
    return 0;
}
