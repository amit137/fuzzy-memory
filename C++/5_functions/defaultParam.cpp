#include<iostream>
int AreaCube(int length,int width=25,int height=1);
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
   
    int l,w,h,a;
    l=10;
    w=50;
    h=2;
    a=AreaCube(l,w,h);
    a=AreaCube(l,w);
    a=AreaCube(l);
    cout<<"Area is "<<a<<endl;
    cout<<"Area is "<<a<<endl;
    cout<<"Area is "<<a<<endl;

  return 0;
}

int AreaCube(int len,int wid,int hei){
    return len*wid*hei;
}