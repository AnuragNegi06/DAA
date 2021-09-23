#include <iostream>
using namespace std;
void Problem_1(int *a,int n)
{   
    int comp=0;
    int shift=0;
    for(int i=0;i<n;i++)
    {   
        int current =*(a+i);
        int j=i-1;
        while(*(a+j)>current && j>=0)
        {   
            comp++;
            shift++;
            *(a+j+1)=*(a+j);
            j--;
        }
        *(a+j+1)=current;
        shift++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<*(a+i)<<' ';
    }
    cout<<"\nThe number of comparisons = "<<comp<<endl;
    cout<<"The number of Shifts = "<<shift-1<<endl;

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
    Problem_1(a,n);
    }
}
