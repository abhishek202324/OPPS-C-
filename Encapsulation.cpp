/*Encapsulation means hiding the internal details of an object and only 
showing what is necessary.It binds data and functions together in a single unit
(class), and keeps data safe from outside access using access modifiers like private,
public.
*/
#include<iostream>
using namespace std;
class student{
    private:
    int age;
    string name;
    public:
    void setData(int a,string n){
        age=a;
        name=n;
    }
    void showdata(){
        cout<<"Name of the student is "<<name<<endl;
        cout<<"Age of the student is "<<age<<endl;
    }

};

int main(){
    student s;
    s.setData(20,"Abhishek");
    s.showdata();
    return 0;

}