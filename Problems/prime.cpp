#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    bool isPrime=true;
    if(x==0 || x==1){
      isPrime=false;
    }
   
    for(int i=2;i<=x/2;i++){
      if(x%i==0){
          isPrime=false;
      }
    }
    if(isPrime==false){
        cout<<"Not a prime number"<<endl;

    }
    else{
        cout<<"A prime number"<<endl;
    }
}