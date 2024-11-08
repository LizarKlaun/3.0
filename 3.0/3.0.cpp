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

    void ChangeInfoAboutStudent() {
        cout << "Enter a new name for student: " << endl;
        cin >> this -> name;
        cout << "Enter a new age for student: " << endl;
        cin >> this->age;
    }

    string getName(){
        return this -> name;
    }

    int getAge() {
        return this -> age;
    }

    void setName() {
        this->name = name;
    }

    void setAge() {
        this->age = age;
    }
};

int main()
{
    Student obj;
    obj.PrintInfoAboutStudent();
    obj.ChangeInfoAboutStudent();
    obj.PrintInfoAboutStudent();
}