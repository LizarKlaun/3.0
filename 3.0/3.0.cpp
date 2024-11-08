#include <iostream>

using namespace std;

class Student {
    string name;
    int age;
public:
    Student() {
        name = "Boryslav";
        age = 24;
    }

    Student(string name, int age) {
        this->name = name;
        this->age = age;
    }

    Student(const Student& obj) {
        this->name = name;
        this->age = age;
    }

    void PrintInfoAboutStudent() {
        cout << "Student`s name: " << name << endl;
        cout << "Student`s age:" << age << endl;
    }
};

int main()
{
    Student obj;
    obj.PrintInfoAboutStudent();
}