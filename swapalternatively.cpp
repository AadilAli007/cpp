#include<iostream>
using namespace std;
void inputarray( int arr[],int size){
    for (int  i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
}
void printarray( int arr[],int size){
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[100];
    int size;
    cout<<"ENTER THE NUMBER OF ELEMENTS IN ARRAY!!"<<endl;
    cin>>size;
    cout<<"TAKING INPUT"<<endl;
    inputarray(arr,size);
    cout<<"ARRAY BEFORE ALTERNATIVE SWAP :-"<<endl;
    printarray(arr,size);
    cout<<"ALTERNATIVELY SWAP ARRAY :-"<<endl;
    if(size%2 == 0){
    for (int i = 0; i < size; i=i+2)
    {
        if(i<size){
            swap(arr[i],arr[i+1]);
        }
    }}
    else{
        for (int i = 0; i < size-1; i=i+2)
    {
        if(i<size){
            swap(arr[i],arr[i+1]);
        }
    }
    }
    printarray(arr,size);

    



    return 0;
}