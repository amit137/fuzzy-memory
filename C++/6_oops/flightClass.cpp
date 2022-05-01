#include<iostream>
using namespace std;
class Flight{
   private:
   int flightNumber;
   string destination;
   float distance;
   float fuel;
   void calFuel(void){
       if(distance<=1000){
           fuel=500;
       }
       else if(distance>1000 && distance<=2000){
           fuel=1100;
       }
       else if(distance>2000){
           fuel=2200;
       }
       cout<<"The fuel consumption is\n"<<fuel<<" liters\n";
   }
   public:
   void feedInfo(void){
       cout<<"Enter flight number\n"; cin>>flightNumber;
       cout<<"Enter destination\n";   cin>>destination;
       cout<<"Enter distance\n";      cin>>distance;
       calFuel();
   }
   void showFuel(void){
       cout<<"The flight number is\n"<<flightNumber<<"\n";
       cout<<"The destination is\n"<<destination<<"\n";
       cout<<"The distance is\n"<<distance<<" km\n";
   }

};

int  main()
{
    Flight f;
    f.feedInfo();
    f.showFuel();
}