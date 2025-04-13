#include<iostream>
#include<string>

using namespace std;
class Teacher{
    public:
    string name;
    string dept;
    string subject;
    int salary;

    //method to take input from the user 
    void input(){
        cout<<"Enter teacher name's : ";
        getline(cin,name);
        cout<<"Enter department : ";
        getline(cin,dept);
        cout<<"Enter subject:";
        getline(cin,subject);
        cout<<"Enter salary";
        cin>>salary;
        cin.ignore();


    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"salary: "<<salary<<endl;

    }
};
int main(){
    Teacher t1;
    t1.input();
    t1.display();
    //t2.input();
   // t1.display();
}