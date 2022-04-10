/* Time Complexity = O(n)
   Space Complexity = O(1)
*/

#include<iostream>
using namespace std;
void linearsearch(int arr[],int n,int target){
    int flag=0,i;
    for(i=0;i<n;i++){
        if(arr[i]==target){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Present "<<i+1<<endl;
    }
    else{
        cout<<"Not Present "<<n<<endl;
    }
}

int main(){
    int n,target,t;
    cin>>t;
    while(t--){
        cout<<"enter the size"<<endl;
        cin>>n;
        int arr[n];
        cout<<"enter the elements"<<endl;
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        cin>>target;
        linearsearch(arr,n,target);
    }
    return 0;
}
