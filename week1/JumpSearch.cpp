#include <iostream>
#include <math.h>
#include<algorithm>
using namespace std;

bool Problem_3(int *a,int n,int key)
{   
    int count=0;
    int jump_size=sqrt(n);
    int prev=0;
    int step=jump_size;
    while(a[int(min(step,n)-1)]<key)
    {   
        count++;
        prev=step;
        step+=jump_size;
        if(prev>=n)
        {
            cout<<"The number of comparisons taken = "<<count<<endl;
             return false;
        }
           
    }

    while(a[int(prev)]<key)
    {   
        count++;
        prev+=1;
        if(prev==min(step,n))
        {
            cout<<"The number of comparisons taken = "<<count<<endl;
            return false;
        }
           
    }

    if(a[int(prev)]==key)
    {       
        cout<<"The number of comparisons taken = "<<count<<endl;
        return true;
    }
    cout<<"The number of comparisons taken = "<<count<<endl;
    return false;
}


int main() {
    int t;
    cin>>t;
    while(t)
    {
        int a[100];
        int n;
        int key;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>key;
        if(Problem_3(a,n,key))
        {
            cout<<"The element is present inside the Array"<<endl;
        }
        else{
            cout<<"The element is not present inside the Array"<<endl;
        }
    }
    }
