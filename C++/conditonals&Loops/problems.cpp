#include<iostream>
using namespace std;

//product and sum of digits of an integer
// int myfunction(int n){
   
//   int product=1;
//   int sum=0;
//   while (n!=0)
//   {
//       int rem=n%10;
//       n=n/10;
//       sum+=rem;
//       product*=rem;
//   }
//   int result=product-sum;
//   return result;
// }
// int main(){
//     int num;
//     cout<<"Enter a number "<<endl;
//     cin>>num;
//    int x= myfunction(num);

//    cout<<x<<endl;
// }

//reverse an integer
int reverseint(int x)
{
    int newNumber=0;
   while (x!=0)
   {
    if((newNumber>INT32_MAX/10)||(newNumber<INT32_MIN/10)){
           return 0;
    }
      int rem=x%10;
      newNumber=(newNumber*10)+rem;
      x=x/10;
   }
   return newNumber;
}
int main()
{
    int n;
    cout<<"Enter the number you want to reverse\n";
    cin>>n;
    int y=reverseint(n);
    cout<<y<<endl;
}