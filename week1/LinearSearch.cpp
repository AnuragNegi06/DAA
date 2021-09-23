#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i=0;
        cin>>n;
        int key;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>key;
        int flag=0;
        for(i=0;i<n;i++){
            if(key==arr[i]){
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"Not Present    "<<n;
        else cout<<"Present    "<<i+1;

    }
}
