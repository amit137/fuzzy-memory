#include<iostream>
typedef unsigned short int usi;
int main()
{
    using std::cout;
    using std::endl;

    usi rcb=169;
    usi csk=178;
    if(csk>rcb){
        cout<<"CSK Won"<<endl;
    }
    else if(csk<rcb){
        cout<<"RCB Won"<<endl;
    }
    else if(csk==rcb){
        cout<<"No,it cannot be a tie"<<endl;
        if(csk>rcb){
            cout<<"CSK Won"<<endl;
        }
        else if(rcb>csk){
            cout<<"RCB Won"<<endl;
        }
        else if(rcb==csk){
            cout<<"Ok,it really was a tie"<<endl;
        }
    }

}