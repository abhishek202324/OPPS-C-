#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void show() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1("Harshit", 20); // Constructor with parameters
    s1.show();
    return 0;
}
