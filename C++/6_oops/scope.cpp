#include<iostream>
using namespace std;
class X{
    private:
    int a;
    void fc(void){
        cout<<a;
    }
    public:
    int i;
    void fcc1(void){
        cout<<2*i;
        a=13;
        fc();
    }
};
X ob2;
int main()
{
    X ob1;//ob2 object is local to main
    ob1.i=10;
    // ob1.fc(); 
    ob1.fcc1();
    // ob2.a=20;
    ob2.fcc1();


}

void fcc2(void){
    X ob3;
    ob3.fcc1();
    ob3.i=20;
    ob2.fcc1();
    ob2.i=3;
    // ob1.fcc1();
    // ob1.i=10;
}


//everything in comment is invalid,out of scope


