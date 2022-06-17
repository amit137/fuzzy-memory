#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::ws;

int main()
{
   string s1("Hello");//direct initialization
   string s2("World");
   cout<<s1<<" "<<s2<<endl;

   string s3="Hello World";//copy  initialization
   cout<<s3<<endl;

   string s4(10,'c');//direct initialization
   cout<<s4<<endl;

   string s5=string(10,'c');//copy initialization
   cout<<s5<<endl;
   
   cout<<"Enter a string,it won't include whitespaces"<<endl;
   string s6;
   cin>>s6;
   cout<<s6<<endl;

   cout<<"Enter a string,it can include whitespaces"<<endl;
   string s7;
   getline(cin>>ws,s7);
   cout<<s7<<endl;
   cout<<"The size of this string is "<<s7.size()<<endl;
   
   //processing every characters
   cout<<"Using for "<<endl;
   for(int i=0;i<s7.size();i++){
       cout<<s7[i];
   }
   cout<<endl;
   for(int i=0;s7[i]!='\0';i++){
       cout<<s7[i];
   }
   cout<<endl;
   for(auto c:s7){ //using auto,compiler will decide the data type on its own
       cout<<c;
   }
   cout<<endl;
  for(auto &c:s7){
      c=toupper(c);
      cout<<c;
  }
  



//this will keep reading string as long as we want
//    string word;
//    while (cin>>word)
//    {
//        cout<<word<<endl;
//    }
   



}