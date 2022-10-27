#include<iostream>
using namespace std;

float volume(float length =1, float width = 1, float height = 1 ){
    return length*width*height;
}

int main(){
    float length,width,height;

    cout<<"Enter the Length of Box : ";
    cin>>length;
    cout<<"Enter the Width of Box : ";
    cin>>width;
    cout<<"Enter the Height of Box : ";
    cin>>height;

    cout<<"Volume of Box : " << volume(length,width,height);

    cout<<endl;
    system("pause");
}