#include<iostream>
int main()
{
    enum Days{ Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};

    Days d;
    d=Monday;
    if(d==Sunday || d==Saturday){
        std::cout<<"\n It is holiday\n";
    }
    else{
        std::cout<<"\nBack to Work\n";
    }
    return 0;
}