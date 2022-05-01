#include<iostream>
#include<algorithm>
using namespace std;

void enterArray(int a[],int n){
    cout<<"Enter array elements\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

void printArray(int a[],int n){
    cout<<"The array is \n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void swapAlternateElements(int a[],int n){
    int temp;
    cout<<"Array after alternate swapping of elements is\n";
    for(int i=0;i<n-1;i+=2){
    if(i+1<n){
     temp=a[i+1];
     a[i+1]=a[i];
     a[i]=temp;
    }
    }
    
}
// void uniqueElement(int a[],int n){
//     sort(a,a+n);
//     int i=0;
//     cout<<"Unique Element is \n";
//     while (i<n)
//     {
//         if(a[i]==a[i+1]){
//             i+=2;
//         }
//         else{
//             cout<<a[i]<<endl;
//             break;
//         }
//     }
    
// }
int uniqueElement(int a[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^a[i];
    }
    return ans;
}
void countFrequency(int a[],int n){
    int count=0;
    int x;
    cout<<"Enter the number you want to find frequency of\n";
    cin>>x;
    for(int i=0;i<n;i++){
        if(x==a[i])
        count++;
    }
    cout<<count<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int a[n];
    enterArray(a,n);
    printArray(a,n);
    swapAlternateElements(a,n);
    printArray(a,n);
    int x=uniqueElement(a,n);
    cout<<x<<endl;
    countFrequency(a,n);
}