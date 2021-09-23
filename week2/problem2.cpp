#include <iostream>
using namespace std;


int Problem_2(int *a,int n)
{
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(*(a+i)+*(a+j)==*(a+k))
                {   
                    cout<<*(a+i)+*(a+j)<<endl;
                    cout<<i+1<<' '<<j+1<<' '<<k+1;
                    return 0;
                }
            }
        }
    }
    cout<<"No combination found"<<endl;
    return 0;
}


int main()
{       
    int t;
    cout<<"Enter the number of test cases"<<endl;
    cin>>t;
    while(t)
    {   
        int a[100];
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        Problem_2(a,n);
        t--;
    }
    return 0;
}
