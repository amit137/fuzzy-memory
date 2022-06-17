#include<iostream>
#include<stdlib.h>
using namespace std;
class ITEM{
    int item_code[5];
    float item_price[5];
    public:
     void initialize(void);
     float largest(void);
     float sum(void);
     void display_items(void);
};

void ITEM::initialize(){
    for(int i=0;i<5;i++){
       cout<<"Item no. : "<<i+1<<"\n";
       cout<<"Enter item code\n";
       cin>>item_code[i];
       cout<<"Enter item price\n";
       cin>>item_price[i];
    }
}

float ITEM::largest(void){
    float max=item_price[0];
    for(int i=0;i<5;i++){
        if(item_price[i]>max)
        max=item_price[i];
    }
    return max;
}

float ITEM::sum(void){
    float s=0;
    for(int i=0;i<55;i++){
        s+=item_price[i];
    }
    return s;
}

void ITEM::display_items(void){
    for(int i=0;i<5;i++){
        cout<<"Item no : "<<i+1<<"\n";
        cout<<"Item code : "<<item_code[i]<<"\n";
        cout<<"Item price : "<<item_price[i]<<"\n";
    }
    cout<<"\n";
}


int main()
{
    ITEM order;
    order.initialize();
    float total=0;
    float biggest;
    int ch=0;
    system("cls");
    do{
        cout<<"\nMain Menu\n";
        cout<<"1. Display largest price\n";
        cout<<"2. Display total sum of prices\n";
        cout<<"3. Display all the items\n";
        cout<<"Enter your choice\n"; cin>>ch;
        switch(ch){
            case 1: biggest=order.largest();
            cout<<"The largest price is "<<biggest<<"\n";
            break;
            case 2:total=order.sum();
            cout<<"The sum of all the prices is "<<total<<"\n";
            break;
            case 3:order.display_items();
            break;
            default:cout<<"Invalid Choice\n";
            break;
        }

    }while(ch>=1 && ch<=3);
    return 0;
}