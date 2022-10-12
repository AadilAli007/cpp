//print sum from 1 to n
#include<iostream>
using namespace std;
int main()
{
    int i=1,n,sum=0;
    cout<<"ENTER THE VALUE OF N"<<endl;
    cin>>n;
    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<"THE SUM FROM 1 TO N IS : "<<sum<<endl;
    
    return 0;
}