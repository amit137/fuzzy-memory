#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   bool isPrime=true;
   for(int i=2;i<n;i++){
       if(n%2==0)
          isPrime=false;
       else
           isPrime;
   }
   if(n<=1){
       cout<<"not prime";
   }
   else if(isPrime==true){
       cout<<"prime";
   }
   else{
       cout<<"not prime";
   }
   
   return 0;
}