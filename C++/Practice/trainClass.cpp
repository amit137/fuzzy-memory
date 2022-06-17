#include<iostream>
using namespace std;
class Train{
    private:
    int trainNumber;
    string destination;
    float distance;
    float fuel;
    void calFuel(void){
        if(distance<=1500){
            fuel=250;
        }
        else if(distance>1500 && distance<=1000){
            fuel=1000;
        }
        else if(distance>3000){
            fuel=2500;
        }
    }
    public:
    void getInfo(void){
        cout<<"\nEnter Train Number\n";  cin>>trainNumber;
        cout<<"\nEnter Destination\n";   cin>>destination;
        cout<<"\nEnter distance\n";      cin>>distance;
        calFuel();
    }
    void showInfo(void);

};

void Train::showInfo(void){
    cout<<"\nTrain Number : \n"<<trainNumber<<"\n";
    cout<<"\nDestination : \n"<<destination<<"\n";
    cout<<"\nDistance : \n"<<distance<<"\n";

}


int main()

{
   Train t;
   t.getInfo();
   t.showInfo();
}


