#include<iostream>
#include<stdlib.h>
#include<list>
using namespace std;
class Students{
  public:
  string name;
  int age;
  string branch;
  list<string>subjects;
  
  Students(string Name,int Age){ //constructor
      name=Name;
      age=Age;
      branch="IT";
  }

  void getInfo(void){  //member function--method
      cout<<"Name : "<<name<<"\n";
      cout<<"Age : "<<age<<"\n";
      cout<<"Branch : "<<branch<<"\n";
      for(string subject:subjects){
          cout<<subject<<"\n";
      }
  }
};

int main()
{
    Students s("Amit",20);
    s.subjects.push_back("Automata");
    s.subjects.push_back("OS");
    s.subjects.push_back("Python");
    s.subjects.push_back("Web Designing");

    Students s2("Sumit",18);
    s2.subjects.push_back("Physics");
    s2.subjects.push_back("Chemistry");
    s2.subjects.push_back("Maths");


  s.getInfo();//method invoked
  s2.getInfo();

  return 0;
}