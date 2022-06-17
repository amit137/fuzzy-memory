#include<iostream>
using namespace std;

void printArray(int a[],int size){
    cout<<"Enter array elements\n";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"The array is "<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
   int a[5]={2,3};
   int n=5;
   for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
   }
   cout<<endl;
   int b[10]={0};
   for(int i=0;i<10;i++){
       cout<<b[i]<<" ";
   }


   int c[10];
   int m;
   cout<<"\nEnter the size of the array,less than 10\n";
   cin>>m;
   printArray(c,m);

   cout<<"\nThe character array is\n";
   char ch[5]={'a','b','c','d','e'};
   for(int i=0;i<5;i++){
       cout<<ch[i]<<" ";
   }
   cout<<endl;

   
}