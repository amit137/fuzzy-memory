 #include<iostream>
 using namespace std;



//1.using sizeof(data type ) to find size of any data type

// int main()
// {
//     cout<<"the size of int is "<<sizeof(int)<<endl;
//     cout<<"The size of char is "<<sizeof(char)<<endl;
//     cout<<"The size of float is "<<sizeof(float)<<endl;
//     cout<<"The size of bool is "<<sizeof(bool)<<endl;
//     cout<<"The size of short is "<<sizeof(short)<<endl;
//     cout<<"The size of double is "<<sizeof(double)<<endl;
//     cout<<"The size of long int is "<<sizeof(long int)<<endl;
// }


// 2.signed numbers can be negative and positive,unsigned numbers are always positive


// int main(){
       
//        int x,y,z;
       
//        cin>>x>>y;
//        z=x*y;
//        cout<<"The area of the rectangle is "<<z<<endl;

//        return 0;
// }


//3.typedef allows us to create an alias for any phrase 
//typedef unsigned short int USHORT;

// typedef unsigned short int USHORT;

// int main()
// {
//     USHORT width=5;
//     USHORT length;
//     length=10;
//     USHORT area=length*width;

//     cout<<"Width : "<<width<<endl;
//     cout<<"Length : "<<length<<endl;
//     cout<<"Area : "<<area<<endl;

//    return 0;
// }


//4.overflow 

// typedef short int si;
// int main()
// {
//     si smallNumber;
//     smallNumber=32767;//limit of short int

//     cout<<smallNumber<<endl;
//     smallNumber++;
//     cout<<smallNumber<<endl;
//     smallNumber++;
//     cout<<smallNumber<<endl;   
// }


//5.characters and numbers

// int main()
// {
//     for(int i=32;i<128;i++)
//     std::cout<<(char)i;//prints out all the ascii characters
//     return 0;
// }

// 6.using define preprocessor
// #define nameOfVariable  valueOfVariable;
// #define studentsPerClass 15;
//but we can also use constants with const
// const unsigned short int studentsPerClass=15;


//7.enumerated constants

// int main()
// {
//     enum Days {Sunday,Monday,Tuesday,Wednesday,Friday,Saturday};

//     Days today;
//     today=Monday;

//     if(today==Sunday || today==Saturday)
//     std::cout<<"\nGotta love the weekends\n";
//     else
//     std::cout<<"\n Back to work\n";
    
//     return 0;
// }



//8.prefix and postfix

// int main()
// {
//     std::cout;
//     int myage=39;
//     int yourage=39;

//     cout<<"I am "<<myage<<"years old"<<endl;
//     cout<<"You are "<<yourage<<"years old"<<endl;
//     myage++;
//     ++yourage;
//     cout<<"After one year"<<endl;
//     cout<<"I am "<<myage<<"years old"<<endl;
//     cout<<"You are"<<yourage<<"years old"<<endl;
//     cout<<"Another year passes"<<endl;
//     cout<<"I am now "<<++myage<<" years old"<<endl;
//     cout<<"You are now "<<yourage++<<" years old"<<endl;
//     cout<<"Lets print it again"<<endl;
//     cout<<"I am now "<<myage<<" years old"<<endl;
//     cout<<"You are now "<<yourage<<" years old"<<endl;

//   return 0;
// }


// 9. if and else statements

// int main()
// {
//     int a,b;
//     cout<<"Enter any two numbers"<<endl;
//     cin>>a>>b;
//     int bigNumber,smallNumber;
//     if(a>b){
//         bigNumber=a;
//         smallNumber=b;
//     }
//     else{
//         bigNumber=b;
//         smallNumber=a;
//     }
//     if( bigNumber%2==0 && smallNumber%2==0){
//         cout<<"Both numbers are evenly divisible"<<endl;
//         if(bigNumber==smallNumber){
//             cout<<"The are same numbers"<<endl;
//         }
//         else{
//             cout<<"They are different numbers"<<endl;
//         }
//     }
//     else{
//         cout<<"Not evenly divisible"<<endl;
//     }

//     return 0;
// }















