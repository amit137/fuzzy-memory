#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the range "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<"\nEnter the range again "<<endl;
    int m;
    cin>>m;
    int j=1;
    for(;;){
        if(j<=m){
            cout<<j<<" ";
           
        }
        else{
            break;
        }
         j++;
    }
}

int main()
{


    for(int a=0,b=2;a<=10,b<=20;a++,b++){
        cout<<a<<" "<<b<<endl;
    }
}

// fibonacci number
int main()
{ 
    int n;
    cout<<"Enter range "<<endl;
    cin>>n;
    int a=0;
    int b=1;
    int c;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}

// prime or not
int main()
{
    int n;
    cin>>n;
    bool isPrime=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
           isPrime=false; 
           break;
        }
        
    }
    if(isPrime==0){
        cout<<"not a prime number "<<endl;
    }
    else{
        cout<<"is a prime number "<<endl;
    }
   
}

int main()
{
    for(int i=0;i<5;i++){
        for(int j=i;j<=5;j++){
            cout<<i<<" "<<j<<endl;
        }
    }
}

