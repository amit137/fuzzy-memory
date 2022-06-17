#include<iostream>
#include<vector>
using namespace std;
class Students{
    public:        //visibility modifier needs to be specified in class or else it will be private by default
    string name;
    int age;
    vector<string>subjects;

    void showStudentData(){
        cout<<"Student name is : "<<name<<endl;
        cout<<"Student age is : "<<age<<endl;
        cout<<"Subjects are : "<<endl;
        for(string subject:subjects){
        cout<<subject<<endl;
        }
    }
};
struct Teachers{  //no visibility modifier needed,data members and member functions are public by default
    string name;
    int experience;
    vector<string>subjects;

    void showTeachersData(){
        cout<<"Teacher's name is : "<<name<<endl;
        cout<<"Teacher's experience is : "<<experience<<endl;
        cout<<name<<" teaches : "<<endl;
        for(string subject:subjects){
            cout<<subject<<endl;
        }
    }
};

int main()
{
    Students s;
    s.name="Amit";
    s.age=20;
    s.subjects.push_back("Computer Science");
    s.subjects.push_back("OS");
    s.subjects.push_back("IOT");

    s.showStudentData();


    Teachers t;
    t.name="Cherno";
    t.experience=10;
    t.subjects.push_back("Gaming");
    t.subjects.push_back("Classes");

    t.showTeachersData();


    cin.get();
}