#include<iostream>
using namespace std;
class Student{
    private:
    int rollno;
    char name[3];
    float marks;
    char grade;
    public:
    void readStudent(){
        cout<<"\nEnter roll no.\n"; cin>>rollno;
        cout<<"\nEnter name\n"; gets(name);
        cout<<"\nEnter marks\n"; cin>>marks;
    }
    void dispStudent(){
        calcGrade();
        cout<<"\nRoll no: "<<rollno<<endl;
        cout<<"\nName: "<<name<<endl;
        cout<<"\nMarks: "<<marks<<endl;
        cout<<"\nGrade : "<<grade<<endl;

    }
    int getRollno(){
        return rollno;
    }
    float getMarks(){
        return marks;
    }

    void calcGrade(){
        if(marks>75){
            grade='O';
        }else if(marks>50){
            grade='A';
        }
        else if(marks>25){
            grade='B';
        }
        else{
            grade='C';
        }
    }
};

int main()
{
    Student s[3];
    for(int i=0;i<3;i++){
        cout<<"\nEnter details of student\n";
        s[i].readStudent();
    }
    int ch,rno,pos=-1,highMarks=0;
    do{
        system("cls");
        cout<<"\nMain Menu\n";
        cout<<"\n1.Specific Student\n";
        cout<<"\n2.Topper\n";
        cout<<"\n3.Exit\n";
        cout<<"\nEnter your choice\n";
        cin>>ch;
        switch(ch){
            case 1:cout<<"\nEnter roll number of student\n";
            cin>>rno;
            for(int i=0;i<3;i++){
                if(s[i].getRollno()==rno){
                    s[i].dispStudent();
                    break;
                }
            }
            case 2: for(int i=0;i<3;i++){
                if(s[i].getMarks()>highMarks){
                    pos=i;
                    highMarks=s[i].getMarks();
                }
            }
            s[pos].dispStudent();
            break;
            case 3:break;
            default:cout<<"\nWrong Choice\n";
            break;

        }
    }while(ch>=1 && ch<=3);

    return 0;
}