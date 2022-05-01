#include<iostream>
using namespace std;
void prnsqr(int i);
void prnsqr(char c);
void prnsqr(float f);
void prnsqr(double d);
int main()
{
   prnsqr(3);
   prnsqr('a');
   prnsqr(3.0F);//if we don't add F here,it will be taken as a double 
   //F for float,L for long double
   //a constant without suffix is signed int,suffix U makes usigned-- LU means unsigned long
   prnsqr(3.1234567);
   
}

void prnsqr(int i){
    cout<<"Integer "<<i<<"'s square is "<<i*i<<"\n";
}
void prnsqr(char c){
    cout<<c<<" is a character,so no square of it "<<"\n";
}
void prnsqr(float f){
    cout<<"Float "<<f<<"'s square is "<<f*f<<"\n";
}

void prnsqr(double d){
    cout<<"Double "<<d<<"'s square is "<<d*d<<"\n";
}