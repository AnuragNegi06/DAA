#include <iostream>
using namespace std;
int count=0;

int Problem_1(int *a,int start,int end,int key)
{   
    int i,j;    
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(*(a+mid)==key)
        {    
            count++;
            i=mid-1;
            j=mid+1;
            while(*(a+i)==key && i>=0)
            {   
                count++;
                i--;
            }

            while(*(a+j)==key && j<=end)
            {   
                count++;
                j++;
            }
            break;
        }

        else if(*(a+mid)<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }

    if(count==0)
    {
        cout<<"Key not present in the Array"<<endl;
    }
    else
    {
        cout<<key<<" - "<<count<<endl;
    }
    return 0;
}
int main()
{   
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
        Problem_1(a,0,n-1,key);
        count=0;
        t--;
    }
    return 0;
}
