#include<iostream>
using namespace std;

class User
{
    public:
        virtual void show()
        {

        }
};
class Admin : public User
{
    public:
        void show()
        {

        }
};
class Learner : public User
{
    public:
        void show()
        {

        }
};
int main()
{
    return 0;
}