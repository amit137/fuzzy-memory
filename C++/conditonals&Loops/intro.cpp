#include<iostream>
using namespace std;

/*
//if else loop 
int main()
{   
    //larger number between two numbers
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<"a is greater than b"<<endl;
    }
    else{
        cout<<"b is greater than a"<<endl;
    }
    
    // cin doesn't read space, enter and tab,so we use cin.get() for that
    int c;
    c=cin.get();
    cout<<"Value of c is "<<c<<endl;//ASCII value of space is 32,enter 10,tab 9


}
*/

/*
//while loop
int main()
{
   int n;
   cin>>n;
   int i=1;
   int sum=0;
   while (i<=n)
   {
       cout<<i<<" ";
       sum+=i;
       i++;
   }
   cout<<"Sum is "<<sum<<endl;
}
*/

/*
//Pattern 1
// ***
// ***
// ***
int main()
{
    int i=1;
    int n;
    cin>>n;
    while (i<=n)
    {
        int j=1;

        while (j<=n)
        { 
            cout<<"*";
            j++;
        }
        cout<<endl;
      i++;  
    }
    
}
*/

/*
//Pattern 2
// 111
// 222
// 333
int main()
{
    int i=1;
    int n;
    cin>>n;
    while (i<=n)
    {
       int j=1;
       while (j<=n)
       {
           cout<<i<<" ";
           j++;
       }
       cout<<endl;
       i++;
       
    }
    

}
*/

/*
//Pattern 3
// 1234
// 1234
// 1234
// 1234
int main()
{
    int i=1;
    int n;
    cin>>n;
    while (i<=n)
    {
        int j=1;
       while (j<=n)
       {
           cout<<j<<" ";
           j++;
       }
         cout<<endl;
        i++;
    }
  
    
}
*/

//Pattern4
/*
// 321
// 321
// 321
int main()
{
    int i=1;
    int n;
    cin>>n;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<n-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
}
*/
/*
//Pattern 5
// 123
// 456
// 789
int main()
{
    int i=1;
    int count=1;
    int n;
    cin>>n;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<count<<" ";
            count++;
            j++;
           
        }
        cout<<endl;
        i++;
    }
    
}
*/
/*
int main()
{
    int i=1;
    int n;
    cin>>n;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<"*";
            j++;
            
        }
        cout<<endl;
        i++;
        
    }
    
}
*/
//Pattern 6
// 1
// 22
// 333
// 4444
// int main()
// {
//     int i=1;
//     int n;
//     cin>>n;
//     while (i<=n)
//     {
//        int j=1;
//        while (i>=j)
//        {
//            cout<<i<<" ";
//            j++;
//        }
//        cout<<endl;
//        i++;
//     }
    
// }

/*
//Pattern 7
// 1
// 23
// 456
// 78910
int main()
{
    int i=1;
    int count=1;
    int n;
    cin>>n;
    while (i<=n)
    {
        int j=1;
        
        while (i>=j)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
       
        cout<<endl;
        i++;
    }
    
}
*/
//Pattern 8
// 1
// 23
// 345
// 4567
// int main()
// {
//     int i=1;
//     int n;
//     cin>>n;
    
//     while (i<=n)
//     {
//         int j=1;
//          int val=i;
//         while (i>=j)
//         {
//             cout<<val<<" ";
//             val++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
    
// }

// // 1
// // 21
// // 321
// // 4321
// int main()
// {
//     int i=1;
//     int n;
//     cin>>n;
//     while (i<=n)
//     {
//         int j=1;
//         while (i>=j)
//         {
           
//            cout<<i-j+1<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
        
//     }
    

// }

// AAA
// BBB 
// CCC 
// int main()
// {
//     int i=1;
//     int n;
//     cin>>n;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=n)
//         {
//           cout<<char('A'+i-1)<<" ";
//           j++; 
//         }
//         cout<<endl;
//         i++;
//     }
    
// }
// ABC
// DEF
// GHI
// int main()
// {
//     int i=1;
//     int n;
//     cin>>n;
//     while (i<=n)
//     {
//        int j=1;
//        while (j<=n)
//        {
//           cout<<char('A'+j-1)<<" ";
//           j++;
//        }
//        cout<<endl;
//        i++;
//     }
    
// }

// ABC
// DEF
// GHI
// int main()
// {
//     int i=1;
//      int x=0;
//     int n;
//     cin>>n;
//     while (i<=n)
//     {
//        int j=1;
//        while (j<=n)
//        {
//           cout<<char('A'+x)<<" ";
//           x++;
//           j++;
//        }
//        cout<<endl;
//        i++;
       
//     }
    
// }

// ABC
// BCD
// CDE
// int main()
// {
//     int i=1;
     
//     int n;
//     cin>>n;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=n)
//         {
           
//             cout<<char('A'+i+j-2)<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
        
//     }
    
// }

//A
//BB
//CCC

// int main()
// {
//     int i=1;
//     int n;
//     cin>>n;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=i)
//         {
//            cout<<char('A'+i-1)<<" ";
//            j++;
//         }
//         cout<<endl;
//         i++;
//     }
    
// }

// A
// BC
// DEF
// GHIJ 
// int main()
// {
//     int i=1;
//      int v=i;
//     int n;
//     cin>>n;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=i)
//         {
//            cout<<char('A'+v-1)<<" ";
//            v++;
//            j++;   
//         }
//         cout<<endl;
//         i++;
//     }
    
// }

// A
// BC
// CDE
// DEFG
// int main()
// {
//     int i=1;
//     int n;
//     cin>>n;
//     while (i<=n)
//     {  
//        int j=1;
//        while (j<=i)
//        {
//            cout<<char('A'+i+j-2)<<" ";
//            j++;
//        }
//        cout<<endl;
//        i++;
//     }
    
// }

// D
// CD
// BCD 
// ABCD 
// int main()
// {
//     int i=1;
//     int n;
//     cin>>n;
//     while (i<=n)
//     {
//         int j=1;
//         char x='A'+n-i;
//         while (j<=i)
//         {
//             cout<<x<<" ";
//             x++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
    
// }

// ABC
// ABC
// ABC
// int main()
// {
//     int i=1;
//     int n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while (j<=n)
//         { 
//             cout<<char('A'+j-1)<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
        
//     }
// }

// A
// BB
// CCC
// DDDD 
// int main()
// {
//     int i=1;
//     int n;
//     cin>>n;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=i)
//         {
//             cout<<char('A'+i-1)<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
        
//     }
    
// }

// A
// BC
// CDE
// DEFG
// int main()
// {
//     int i=1;
//     int n;
   
//     cin>>n;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=i)
//         {  
//             cout<<char('A'+i+j-2)<<" ";
        
//             j++;
//         }
//         cout<<endl;
//         i++;
        
//     }
    
// } 


//    *
//   **
//  ***
// **** 

// int main()
// {
//    int n;
//    cin>>n;
//    int i=1;
//    while (i<=n)
//    {
//        //space

//        int space=n-i;
//        while (space)
//        {
//            cout<<" ";
//            space--;
//        }
//        int j=1;
//        while (j<=i)
//        {
//            cout<<"*";
//            j++;
//        }
//        cout<<endl;
//    i++; 
       
//    }
  
   
// }

// ****
// ***
// **
// *
// int main()
// {
//     int i=1;
//     int n;
//     cin>>n;
//    while (i<=n)
//    {
//        int star=n-i+1;
//        while(star){
//            cout<<"*";
//            star--;
//        }
//        int j=1;
//        while (j<=i)
//        {
//            cout<<" ";
//            j++;
//        }
//        cout<<endl;
//        i++;
       
//    }
   

// }

//    1
//   22
//  333
// 4444
// int main()
// {
//     int i=1;
//     int n;
//     cin>>n;
//     while(i<=n){
//         int space=n-i;
//         while (space)
//         {
//            cout<<" ";
//            space--;
//         }
//         int j=1;
//         while (i>=j)
//         {
//            cout<<i;
//            j++;
//         }
//         cout<<endl;
//         i++;
        
        
//     }
// }

int main()
{
    int i=1;
    int n;
    cin>>n;
    while(i<=n)
    {
       int j=1;
      
       int star=n;
       while (star)
       {
           cout<<"*";
           star--;
       }
        while(i>=j){
           cout<<" ";
           j++;
       }
       cout<<endl;
       i++;
       
    }
}