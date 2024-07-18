#include<iostream> // iostream is a header
using namespace std; // namespace
int main()
{
    int x,y;
    std::cout<<"Hello"<<endl; // std is a namespace
    cout<<"Enter two numbers"; // cout is used with "<<"(insertion operator) to print on the screen
    cin>>x>>y; // cin is used with ">>"(extraction operator) to take the input from the user
    cout<<"Sum of "<<x<<" and "<<y<<" is "<<x+y;
    cout<<endl; //newline character like '\n'
    return 0;
}