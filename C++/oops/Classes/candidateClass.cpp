#include<iostream>
#include<string.h>
#include<stdlib.h>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Candidate{
    long RNo;
    char Name[30];
    float Score;
    char Remarks[30];
    void AssignRem(void){
        if(Score>=50){
            strcpy(Remarks,"Selected");
        }
        else if(Score<50){
           strcpy(Remarks,"Not selected");
        }
    }

    public:
    void Enter(void){
        cout<<"Enter Roll no"<<endl;  cin>>RNo;
        cout<<"Enter Name"<<endl;     cin.getline(Name,30);   
    }
};