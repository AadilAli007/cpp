#include<iostream>
using namespace std;

float volume(float radius, float height){
    return ((3.14)*radius*radius*height) ;
}

float volume(float radius, double height){
    return ((3.14)*radius*radius*(height/3)) ;
}

float volume(float radius){
    return ((1.33)*(3.14)*radius*radius*radius) ;
}

int main(){

    float sphereRadius,coneRadius,cylinderRadius,cylinderHeight;
    double coneSlantHeight;

    cout<<"Enter the radius of Sphere : ";
    cin>>sphereRadius;

    cout<<"Enter the radius of Cone : ";
    cin>>coneRadius;
    cout<<"Enter the Slant height of Cone : ";
    cin>>coneSlantHeight;

    cout<<"Enter the radius of Cylinder : ";
    cin>>cylinderRadius;
    cout<<"Enter the height of Cylinder : ";
    cin>>cylinderHeight;

    cout<<"\nVolume of Sphere : " << volume(sphereRadius);
    cout<<"\nVolume of Cone : " << volume(coneRadius,coneSlantHeight);
    cout<<"\nVolume of Cylinder : " << volume(cylinderRadius,cylinderHeight);

    cout<<endl;
    system("pause");
}