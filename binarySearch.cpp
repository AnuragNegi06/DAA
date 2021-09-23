#include <iostream>
using namespace std;
int count=0;

int Problem_2(int *a,int start,int end,int key)
{	
    //Recursive Approach
    if(start<=end)
    {   
        count++;
        int mid=start+(end-start)/2;
        if(*(a+mid)==key)
        {
            return mid;
        }
        if(key>*(a+mid))
        {
            return Problem_2(a,mid+1,end,key);
        }

        return Problem_2(a,start,mid-1,key);  
    }
    return -1;  

}

int main() {
    int t;
    cin>>t;
    while(t)
    {   
        int *c=0;
        int a[100];
        int key;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>key;
        int mid=Problem_2(a,0,n-1,key);
        if(mid==-1)
        {
            cout<<"The element is not in the array"<<endl;
            cout<<"The number of comparisons taken = "<<count<<endl;
        }
        else
        {
            cout<<"The element is present in the array"<<endl;
            cout<<"The number of comparisons taken = "<<count<<endl;
        }
        count=0;
        t--;
    }

}
