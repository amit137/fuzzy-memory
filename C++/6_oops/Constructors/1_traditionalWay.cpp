#include<iostream>
#include<stdlib.h>
#include<list>
using namespace std;

class Student{
   public:
   string name;
   int age;
   string branch;
   list<string>subjects;

};

int main()
{
    Student s;
    s.name="Amit";
    s.age=20;
    s.branch="IT";
    s.subjects={"Automata","OS","Python","Web Desigining"};

    cout<<"Name : "<<s.name<<endl;
    cout<<"Age : "<<s.age<<endl;
    cout<<"Branch : "<<s.branch<<endl;
    cout<<"Subjects : "<<endl;
    for(string subject:s.subjects){
        cout<<subject<<endl;
    }

    Student s2;
    s2.name="Sumit";
    s2.age=17;
    s2.branch="PCM";
    s2.subjects={"Physics","Chemistry","Maths"};

    cout<<"Name : "<<s2.name<<endl;
    cout<<"Age : "<<s2.age<<endl;
    cout<<"Branch : "<<s2.branch<<endl;
    cout<<"Subjects : "<<endl;
    for(string subject:s2.subjects){
        cout<<subject<<endl;
    }
   return 0;
}


//but we are repeating code for each student
//Constructor is a member function of a class that is automatically called when an object is created of that class.
//It has the same name as class and no return type