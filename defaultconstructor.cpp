#include<iostream>
using namespace std;
class defaultt{
    public:
    string name;
    int roll;
    defaultt(){
        name="abhishek";
        roll=23;

    }
    void diplay(){
        cout<<"Name of the student is "<<name<<endl;
        cout<<"Roll number "<<roll;

    }


};
int main()
{
    defaultt objj;
    objj.diplay();

 return 0;
}
