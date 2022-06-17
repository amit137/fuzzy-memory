#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    string x;
    cin>>x;
    cout<<x;
    int n=x.size();
    bool isPalindrome=true;
    for(int i=0;i<n/2;i++){
        if(x[i]!=x[n-i-1]){
            isPalindrome=false;
        }
       
    }
    if(isPalindrome==true){
        cout<<"\nIt is a palindome"<<endl;
    }
    else{
        cout<<"\nIt is not a palindrome"<<endl;
    }
    }
}