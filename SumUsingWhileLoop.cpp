//print sum from 1 to n
#include<iostream>
using namespace std;
void main(){
    int i=1,n,sum=0;
    cout<<"Enter value of n :"<<endl;                     //input
    cin>>n;
    while (i<=n){                                           //logic
        sum+=i;
        i++;
    }
    cout<<"The sum form 1 to "<<n<<" : "<<sum<<endl;           //output
}
