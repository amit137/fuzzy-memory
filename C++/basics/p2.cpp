#include<iostream>
using namespace std;

//1.functions
// int area(int l,int w); //prototype

// int main()
// {
//     int lengthOfYard;
//     int widthOfYard;
//     int areaOfYard;
//     cout<<"Enter length and width"<<endl;
//     cin>>lengthOfYard>>widthOfYard;

//     areaOfYard=area(lengthOfYard,widthOfYard);
//     cout<<"Area is "<<areaOfYard<<endl;

//     return 0;
// }

// int area(int length,int width){
//     return length*width;
// }


// float greaterNumber(float a,float b);
// int main()
// {
//     float firstNum,secNum,biggerNum;
//     cout<<"Enter any two numbers";
//     cin>>firstNum>>secNum;
//     biggerNum=(firstNum,secNum);
//     cout<<"The bigger number is "<<biggerNum<<endl;

//     return 0;
// }

// float greaterNumber(float x,float y)
// {
//     if(x>y)
//     return x;
//     else 
//     return y;
// }


// int doubler(int num);
// int main()
// {
//     cout<<"Enter any number between 1 and 10000"<<endl;
//     int number;
//     cin>>number;
//     int doubleNumber=doubler(number);
//     cout<<"The double of the number is "<<doubleNumber<<endl;

//     return 0;
// }
// int doubler(int a)
// {
//     if(a<10000)
//     return 2*a;
//     else 
//     cout<<"You cant reach here"<<endl;
//     return -1;
// }



// void swap(int a,int b);
// int main()
// {
//     int a,b;
//     cout<<"Enter any two numbers to swap"<<endl;
//     cin>>a>>b;
//     cout<<"The numbers before swap in main are "<<a<<" "<<b<<endl;
//     swap(a,b);
//     cout<<"The numbers after swap function is called in main are "<<a<<" "<<b<<endl;

//    return 0;
// }

// void swap(int x,int y)
// {
//     int temp;
//     cout<<"The numbers before swap in function swap are "<<x<<" "<<y<<endl;
//     temp=x;
//     x=y;
//     y=temp;
//     cout<<"The numbers afterr swap in function swap are "<<x<<" "<<y<<endl;
// }



//2.default params
// int cube(int length=100,int width=50,int heigth=10);
// int main()
// {
//     int a,b,c;
//     a=4;
//     b=6;
//     c=9;
//     cout<<"First cube is "<<cube(a,b,c)<<endl;
//     cout<<"Second cube is "<<cube(a,b)<<endl;
//     cout<<"Third cube is "<<cube(a)<<endl;
//     cout<<"Fourth cube is "<<cube()<<endl;

//     return 0;
// }
// int cube(int x,int y,int z)
// {
//    return x*y*z;
// }

//4.function overloading or function polymorphism,functions with the same name but differ with the type of params or number of params

// int Double(int);
// long Double(long);
// float Double(float);
// double Double(double);
// int main()
// {
//     int myint=6500;
//     long mylong=65000;
//     float myfloat=6.5F;
//     double mydouble=6.5e20;

//     cout<<"Int before function call  is "<<myint<<endl;
//     cout<<"Int after function call is "<<Double(myint)<<endl;

//     cout<<"Long before function call is "<<mylong<<endl;
//     cout<<"Long after function call is "<<Double(mylong)<<endl;

//     cout<<"Float before function call is "<<myfloat<<endl;
//     cout<<"Float after function call is "<<Double(myfloat)<<endl;

//     cout<<"Double before function call is "<<mydouble<<endl;
//     cout<<"Double after function call is "<<Double(mydouble)<<endl;
// }

// int Double(int x)
// {
//     return 2*x;
// }

// long Double(long x)
// {
//     return 2*x;
// }

// float Double(float x)
// {
//     return 2*x;
// }

// double Double(double x)
// {
//     return 2*x;
// }

//5.Recursiion-functions that call themselves
//fibonacci number

// int fibo(int n);
// int main()
// {
//     int number,answer;
//     cout<<"Enter a number "<<endl;
//     cin>>number;
//     cout<<"The "<<number<<" fibonacci number is "<<fibo(number)<<endl;
//     return 0;
// }
// int fibo(int x)
// {
//     if(x<3)
//     return 1;
//     else 
//     return fibo(x-2)+fibo(x-1);
// }

//6.Classes-collection of data memebrs and functions--variables
//object is an instance of the class
// class Cat
// {
//     unsigned int age;
//     unsigned int weight;
//     void meow();
// };

// int main()
// {
//     Cat Boots;
//     Boots.age=10;//error,cant access private data,private by default
// }


// class Cat
// {
//     public:
//     unsigned int age;
//     unsigned int weight;
//     void meow();
// };
// int main()
// {
//     Cat Frisky;
//     Cat Donald;
//     Frisky.age=10;
//     Frisky.weight=20;
//     unsigned int a;
//     cout<<"Frisky is my cat whose age is "<<Frisky.age<<" and its weight is "<<Frisky.weight<<"kg"<<endl;
//     cout<<"Now enter your cat Donald's age "<<endl;
//     cin>>a;
//     Donald.age=a;
//     cout<<"Ok,got it.So Donald's age is "<<Donald.age<<endl;

//     return 0;
// }

//using accessor functions

class Cat
{
    public:
    int getAge();//accessor function
    void setAge(int age);//accessor function
    void meow();//general function

    private:
    int itsAge;
};

int Cat::getAge()
{
    return itsAge;
}

void Cat::setAge(int age)
{
    itsAge=age;
}

void Cat::meow()
{
    cout<<"Meow"<<endl;
}

int main()
{
    Cat Frisky;
    Frisky.setAge(5);
    cout<<"Frisky's age is "<<Frisky.getAge()<<" years old"<<endl;
    Frisky.meow();

    return 0;
}














