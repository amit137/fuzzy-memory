#include<iostream>
using namespace std;
void power(int x,int y){
    int p=1;
    for(int i=1;i<=y;i++){
     p=p*x;   
    }
    cout<<p<<endl;
}
void evenOrOdd(int x)
{
    if(x&1){
       cout<<"Odd\n";
    }
    else{
        cout<<"Even\n";
    }
}
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
      fact=fact*i;
    }
    return fact;
}
int main()
{
    int a,b;
    // cout<<"Enter the numbers "<<endl;
    // cin>>a>>b;
    // power(a,b);
    int c;

    // cout<<"Check whether even or odd "<<endl;
    // cin>>c;
    // evenOrOdd(c);

    int d;
    cout<<"Find factorial of "<<endl;
    cin>>d;
    int f=factorial(d);
    cout<<f<<endl; 
}