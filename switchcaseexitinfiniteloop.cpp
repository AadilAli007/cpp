#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a = 1;
    while (1)
    {
        switch (a)
        {
        case 1:
            cout<<"A is 1"<<endl;
            break;
           
         
        default:
            cout<<"A is not 1";
            break;
        }

        exit(0);
    }
    
    return 0;
}