#include <iostream>
using namespace std;
void swap_(int *a,int i,int j)
{
    int temp=*(a+i);
    *(a+i)=*(a+j);
    *(a+j)=temp;
}
void Problem_2(int *a,int n)
{   
    int comp=0;
    int swap=0;

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {   
            comp++;
            if(*(a+j) < *(a+i))
            {   
                swap++;
                swap_(a,i,j);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<*(a+i)<<' ';
    }
    cout<<"\nThe number of comparisons = "<<comp<<endl;
    cout<<"The number of swaps = "<<swap<<endl;

}

int main() {

    int t;
    cin>>t;
    while(t--)
    {
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Problem_2(a,n);
    }
}
