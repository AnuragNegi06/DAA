#include <iostream>
#include<math.h>
using namespace std;

int Problem_3(int *a,int n,int key)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(*(a+i)-*(a+j))==key)
                count++;
        }
    }
    return count;
}

int main() {
    int t;
    cin>>t;
    while(t)
    {
        int a[100];
        int key;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>key;
        if(Problem_3(a,n,key)==0)
        {
            cout<<"No pair found"<<endl;
        }
        else
        {
            cout<<"The number of pairs = "<<Problem_3(a,n,key);
        }
        t--;
    }
