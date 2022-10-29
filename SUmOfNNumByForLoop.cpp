#include<iostream>
using namespace std;
void main(){                                                                //main function starts
    int i=1,n,sum=0;
    cout<<"Enter number till whom sum has to find out : "<<endl;
    cin>>n;                                                                 //input
    for ( i=1;i<=n;i++)
        sum+=i;                                                             //summing up all
    cout<<"Sum of first "<<n<<" numbers is "<<sum<<endl;                    //printing result
}
