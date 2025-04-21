#include<iostream>
using namespace std;
class hello{
    public:
    string name;
    int roll;
    hello(){
        name="none";
        roll=0;
    }
    hello(string n,int r){
        name=n;
        roll=r;

    }
    public:
    void show(){
        cout<<"name :"<<name<<endl;
        cout<<"roll number: "<<roll<<endl;

    }

};
int main()
{
    hello obj;
    obj.show();
    return 0;
}