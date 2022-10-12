#include<iostream>
using namespace std;
int totalsetbits(int a, int b)
{
    int count1 = 0,count2 = 0;
    while (a!=0)
    {
        if (a&1)
        {
            count1++;
        }
        a = a>>1;
        
    }
    while (b!=0)
    {
        if (b&1)
        {
            count2++;
        }
        b = b>>1;
        
    }
    
    int ans = count1 + count2;
    return ans;
}
int main()
{
    int a, b;

    cout << "Enter first number: "<<endl;
    cin >> a;
    cout << "Enter second number: "<<endl;
    cin >> b;
    int ans = totalsetbits(a,b);
    cout<<"Total No. of set bits: "<<ans<<endl;
    return 0;
}