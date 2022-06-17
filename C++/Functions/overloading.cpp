#include<iostream>
using namespace std;
int area(int s);
float area(int l,int w);
int main()
{
    int side,length,width;
    cout<<"Enter side of square"<<endl;
    cin>>side;
    cout<<"Enter length and width of Rectangle"<<endl;
    cin>>length;
    cin>>width;
    int areaOfSquare=area(side);
    float areaOfRectangle=area(length,width);
    cout<<areaOfSquare<<endl;
    cout<<areaOfRectangle<<endl;
   
}

int area(int s){
    return s*s;
}

float area(int l,int w){
    return l*w;
}