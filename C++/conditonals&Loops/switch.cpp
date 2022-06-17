#include<iostream>
using namespace std;
// int main()
// {
//     int day;
//     cin>>day;
//     switch(day){
//         case 1:  cout<<"Monday"<<endl;
//         break;
//         case 2:  cout<<"Tuesday"<<endl;
//         break;
//         case 3:  cout<<"Wednesday"<<endl;
//         break;
//         default: cout<<"Invalid number "<<endl;
//     }
// }

//calculator
// int main()
// {
//     int a,b;
//     char op;
//     cout<<"Enter numbers"<<endl;
//     cin>>a>>b;
//     cout<<"Enter operator "<<endl;
//     cin>>op;
//     switch (op)
//     {
//     case '+':cout<<"Sum is "<<a+b<<endl;
//         break;
//     case '-':cout<<"Subtraction gives "<<a-b<<endl;
//         break;
//     case '*':cout<<"Product is "<<a*b<<endl;
//         break;
//     case '/':cout<<"Division is "<<a/b<<endl;
//         break;
//     default:cout<<"Invalid operator "<<endl;
//         break;
//     }
// }

//how many notes needed for any given amount
// int main()
// {
//     int n;
//     cout<<"Enter money "<<endl;
//     cin>>n;
//     int a,b,c;
//     a=b=c=0;
//     while(n!=0){
//   if(n/100>0){
//       a=n/100;
//       n=n%100;
//   }
//   else if(n/50>0){
//       b=n/50;
//       n=n%50;
//   }
//   else if(n/10>0){
//       c=n/10;
//       n=n%10;
//   }
//     }  
//   cout<<a<<" "<<b<<" "<<c<<endl;
    
// }

int main()
{
    int n;
    cout<<"Enter amount "<<endl;
    cin>>n;
    int rs100,rs50,rs20,rs1;
    switch(1){
        case 1:rs100=n/100;
        n=n%100;
        cout<<rs100<<endl;
        
        case 2:rs50=n/50;
        n=n%50;
        cout<<rs50<<endl;

        case 3:rs20=n/20;
        n=n%20;
        cout<<rs20<<endl;

        case 4:rs1=n/1;
        n=n%1;
        cout<<rs1<<endl;
    }
}