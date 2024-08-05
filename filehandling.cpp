#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Employee
{
    private:
        int empid;
        char name[30];
        float salary;
    public:
        void setEmployee(int id, char n[], float s)
        {
            empid=id;
            strcpy(name,n);
            salary=s;
        }
        void showEmployee()
        {
            cout<<empid<<" "<<name<<" "<<salary<<" "<<endl;
        }
        void storeEmployee()
        {
            ofstream fout;
            fout.open("file.txt",ios::app);
            fout.write((char*)this,sizeof(*this));
            fout.close();
        }
        void printAllEmployees()
        {
            ifstream fin;
            fin.open("file.txt",ios::in);
            if(!fin)
                cout<<"File not found";
            else
            {
                fin.read((char*)this,sizeof(*this));
                while(!fin.eof())
                {
                    showEmployee();
                    fin.read((char*)this,sizeof(*this));

                }
            }
            fin.close();
        }
};

int main()
{
    Employee e1;
    e1.setEmployee(3,"Shahid",55000);
    e1.printAllEmployees();
    return 0;
}





/*
int f1()
{
    ofstream fout;
    fout.open("file.txt",ios::out);
    fout<<"Hello";
    fout.close();
    return 0;
}
*/
/*
int f2()
{
    ifstream fin;
    fin.open("file.txt",ios::in);
    if(!fin){
        cout<<"File not found";
        return 0;
    }
    char ch;
    ch=fin.get();
    while(!fin.eof())
    {
        cout<<ch;
        ch=fin.get();
    }
    fin.close();
    return 0;
}
*/