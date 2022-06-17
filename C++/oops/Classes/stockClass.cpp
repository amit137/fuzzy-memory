#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
class STOCK{
    private:
    int ICode;
    string Item;
    float Price;
    int Qty;
    float Discount;
    void findDisc(void){
        if(Qty<=50){
            Discount=0;
        }
        else if(Qty>50 && Qty<=100){
            Discount=5;
        }
        else if(Qty>100){
            Discount=10;
        }
    }
    
    public:
    void Buy(void){
        cout<<"\nEnter ICode\n"; cin>>ICode;
        cout<<"\nEnter Item\n";  cin>>Item; //getline(cin,Item); 
        cout<<"\nEnter Price\n"; cin>>Price;
        cout<<"\nEnter Qty\n";   cin>>Qty;
        
        findDisc();
    }

    void showAll(void){
        cout<<"\nThe ICode is : "<<ICode<<"\n";
        cout<<"\nThe Item is : "<<Item<<"\n";
        cout<<"\nThe Price is : "<<Price<<"\n";
        cout<<"\nThe Qty is : "<<Qty<<"\n";
        cout<<"\nDiscount is : "<<Discount<<"\n";
    }
};

int main()
{
    STOCK s;
    s.Buy();
    s.showAll();
}