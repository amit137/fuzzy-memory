#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb  push_back
#define rep(i,a,b)  for(ll i=a;i<b;i++)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
	cin>>t;
	while(t--){
	    int d;
	    cin>>d;
	    int  c1,c2=0;
	    while(d>0){
            int rem;
	        rem=d%10;
	        d=d/10;
	        if(rem==0){
                c1++;
            }else if(rem==1){
                c2++;
            }
           
	    }
         if(c1==1 || c2==1){
                cout<<"Yes\n";
            }
         else if(c1>1 && c2>1){
            cout<<"No\n";
         }
         else{
            cout<<"Yes\n";
         }
        
    }
}