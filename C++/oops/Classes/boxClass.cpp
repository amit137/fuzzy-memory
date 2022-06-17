#include<iostream>
using namespace std;
class Box{
    private:
    int boxNumber;
    float side;
    float area;
    void execArea(){
        area=side*side;
    }
    public:
    void getBox(void){
        cout<<"Enter  Box Number\n"; cin>>boxNumber;
        cout<<"Enter side of this Box\n"; cin>>side;

        execArea();
    }
    void setBox(void){
        cout<<"Box Number\n"<<boxNumber<<"\n";
        cout<<"Side of Box is\n"<<side<<"\n";
        cout<<"Area of Box is\n"<<area<<"\n";
    }

};

int main()
{
    Box b;
    b.getBox();
    b.setBox();
 
 return 0;
}