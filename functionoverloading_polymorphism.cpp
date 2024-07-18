#include<iostream>
using namespace std;
int add(int,int,int);   // same name of functions are allowed in C++
int add(int,int);   //but function signature should be unique in C++
int main()
{
    cout<<add(2,5);
}
int add(int x, int y, int z)
{
    return x+y+z;
}
int add(int x, int y)
{
    return x+y;
}

//Early Binding             *check the written notes*