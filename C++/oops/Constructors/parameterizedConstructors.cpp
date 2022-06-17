#include<iostream>
#include<stdlib.h>
using namespace std;
class Test{
    int ant;
    public:
    Test(int i){
        ant=i;
        cout<<ant;
    }
};

int main()
{
    Test object1(45);
    // Test Object2;  an error,no default constructor available
}