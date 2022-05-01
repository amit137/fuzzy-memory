#include<iostream>
int printArea(int,int);
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    unsigned short length,width,area;
    cout<<"Enter length of yard"<<endl;
    cin>>length;
    cout<<"Enter width of yard "<<endl;
    cin>>width;
    area=printArea(length,width);
    cout<<"Area is "<<area<<endl;
}

int printArea(int l,int w){
    return l*w;
}