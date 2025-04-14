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
    Teacher t[5];
    cout << "Enter details of 5 teachers:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\n--- Teacher " << (i + 1) << " ---\n";
        t[i].input();
    }

    cout << "\n--- Displaying Teacher Details ---\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nTeacher " << (i + 1) << " Details:";
        t[i].display();
    }

   
}