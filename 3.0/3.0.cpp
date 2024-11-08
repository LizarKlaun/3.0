#include <iostream>

using namespace std;

class Student {
    string name;
    int age;
    double mark;
public:
    Student() {
        name = "Boryslav";
        age = 24;
    }

    Student(string name, int age, double mark) {
        this->name = name;
        this->age = age;
        this->mark = mark;
    }

    Student(const Student& obj) {
        this->name = name;
        this->age = age;
        this->mark = mark;
    }

    void PrintInfoAboutStudent() {
        cout << "Student`s name: " << name << endl;
        cout << "Student`s age:" << age << endl;
    }

    void ChangeInfoAboutStudent() {
        cout << "Enter a new name for student: " << endl;
        cin >> this -> name;
        cout << "Enter a new age for student: " << endl;
        cin >> this->age;
    }
};

int main()
{
    Student obj;
    obj.PrintInfoAboutStudent();
    obj.ChangeInfoAboutStudent();
    obj.PrintInfoAboutStudent();
}