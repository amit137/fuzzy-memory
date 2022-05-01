#include<iostream>
using namespace std;

void enterArray(int a[],int size){
    cout<<"Enter the array element\n";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
}
void printArray(int a[],int size){
    cout<<"The array is "<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void maxElement(int a[],int size){
   cout<<"The Maximum Element is"<<endl;
    for(int i=0;i<size;i++){
        if(a[i]>a[0]){
            a[0]=a[i];
        }
    }
  cout<<a[0]<<endl;

}

void minElement(int a[],int size){
  cout<<"The Minimum Elemenet is "<<endl;
  for(int i=0;i<size;i++){
      if(a[i]<a[0]){
          a[0]=a[i];
      }
  }
  cout<<a[0]<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int a[n];
    enterArray(a,n);
    printArray(a,n);
    maxElement(a,n);
    minElement(a,n);
}