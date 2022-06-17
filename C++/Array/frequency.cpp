#include<iostream>
using namespace std;

void enterArray(int a[],int n)
{
    cout<<"Enter array elements\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void printArray(int a[],int n){
    cout<<"The array is\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void countFrequency(int a[],int n,int x){
    
    int count=0;
    for(int i=0;i<n;i++){
        if(x==a[i])
        count++;
    }
  cout<<"The frequency of "<<x<<" is "<<count<<endl;
}

int binarySearch(int a[],int l,int r,int x){
    if(r<l)
    return -1;
   
    int mid=l+(r-1)/2;

    for(int i=l;i<r;i++){
        if(a[mid]==x)
        return mid;

        if(x<a[mid])
        return binarySearch(a,l,mid-1,x);

        return binarySearch(a,mid+1,r,x);
    }


}

int countUsingBinarySearch(int a[],int n,int x){
    int ind=binarySearch(a,0,n-1,x);

    if(ind==-1)
    return 0;

    int count=1;
    int left=ind-1;
    while(left>=0 && a[left]==x)
    count++, left--;

    int right=ind+1;
    while(right<n && a[right]==x)
    count++,right++;

return count;
}
int main()
{
    int n,x;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int a[n];
    enterArray(a,n);
    printArray(a,n);
    cout<<"Enter element\n"; cin>>x;
    countFrequency(a,n,x);
    int y=countUsingBinarySearch(a,n,x);
    cout<<y<<endl;
}