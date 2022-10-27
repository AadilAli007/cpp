#include<iostream>
using namespace std;
float volume(float length =1, float width = 1, float height = 1 ){
    return length*width*height;
}
int main(){
    float length,width,height;
    cout<<"This program is for calculating volume of a box."<<endl<<"Enter length of Box : ";
    cin>>length;
    cout<<"Enter width of Box : ";
    cin>>width;
    cout<<"Enter height of Box : ";
    cin>>height;
    cout<<"Volume of Box : " << volume(length,width,height)<<endl;
    system("pause");
}
