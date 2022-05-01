#include<iostream>
#include<vector>
using namespace std;
void enterArray(int a[],int n){
    cout<<"Enter array elements\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

void printArray(int a[],int n){
    cout<<"The array si\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void countFrequencyOfEachElement(int a[],int n){
    vector<bool>visited(n,false);
   
    
    for(int i=0;i<n;i++){
        if(visited[i]==true)
        continue;
int count=1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j])
            count++;
            visited[j]=true;
             cout<<a[i]<<" "<<count<<" ";
        }
   
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int a[n];
    enterArray(a,n);
    printArray(a,n);
    countFrequencyOfEachElement(a,n); 
}