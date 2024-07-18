#include<iostream>
using namespace std;
struct Book
{
    private: // DATA HIDING by using access specifiers
        int bookid;
        char title[50];
        float price;
    public:
    //creating functions in stucture is possible in C++ (ENCAPSULATION)
        void setBookid(int id)
        {
            if(id<0)
                bookid=-id;
            else
                bookid=id;
            //to avoid data corruption
        }
        void display()
        {
            cout<<bookid<<" "<<title<<" "<<price<<endl;
        }
        void input()
        {
            cout<<"Enter Book ID, Title and Price";
            cin>>bookid;
            cin.ignore(); // instead of fflush we use .ignore in C++ to empty the buffer
            cin.getline(title,50); // we use .getline in C++ to input the string instead of fgets
            cin>>price;
        }

};
int main()
{
    Book b1;
    Book b2,b3; // no need of using the struct keyword in C++
    b1.input();
    b2.input();
    b3.input();
    b2.setBookid(-5);
    b3.display();
    b2.display();
    return 0;
}

// ABSTRACTION => Hiding implementation details.