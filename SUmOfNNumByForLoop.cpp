#include<iostream>
using namespace std;
int main()
{
    int i=1,n,sum=0;
    cout<<"ENTER THE VALUE OF N"<<endl;
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout<<"Total is :- "<<sum<<endl;
    
    return 0;
}