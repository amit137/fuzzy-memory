#include<iostream>
using namespace std;
void enterArray(int a[],int n){
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void printArray(int a[],int n){
    cout<<"The array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void sumArray(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
      sum+=a[i];
    }
   cout<<"The array sum is "<<endl;
   cout<<sum<<endl;
}
void productArray(int a[],int n){
    int product=1;
    for(int i=0;i<n;i++){
        product*=a[i];
    }
    cout<<"The array product is "<<endl;
    cout<<product<<endl;
}
void linearSearch(int a[],int n){
    int item;
    int pos=0;
    bool flag;
    cout<<"Enter element you want to search"<<endl;
    cin>>item;
    for(int i=0;i<n;i++){
        if(a[i]==item){
           pos=i+1;
           flag=true;
           break;
        }
        else{
            flag=false;
        }
    }

    if(flag){
        cout<<"Element found at index "<<pos<<endl;
    }
    else{
        cout<<"Element not found "<<endl;
    }
}

void reverseArray(int a[],int n){
    cout<<"The reverse array is\n";
    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    enterArray(a,n);
    printArray(a,n);
    sumArray(a,n);
    productArray(a,n);
    linearSearch(a,n);
    reverseArray(a,n);
}