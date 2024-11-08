#include <iostream>

using namespace std;

class Student {
    string name;
    string surname;
    int age;
public:
    Student() {
        name = "Boryslav";
        surname = "Lincheshki";
        age = 24;
    }

    Student(string name, string surname, int age) {
        this->name = name;
        this->surname = surname;
        this->age = age;
    }

    Student(const Student& obj) {
        this->name = name;
        this->surname = surname;
        this->age = age;
    }

    void PrintInfoAboutStudent() {
        cout << "Student`s name: " << name << endl;
        cout << "Student`s age:" << age << endl;
    }

    void ChangeInfoAboutStudent() {
        cout << "Enter a new name for student: " << endl;
        cin >> this -> name;
        cout << "Enter a new surname for student: " << endl;
        cin >> this->surname;
        cout << "Enter a new age for student: " << endl;
        cin >> this->age;
    }

    string getName(){
        return this -> name;
    }

    string genSurname() {
        return this -> surname;
    }

    int getAge() {
        return this -> age;
    }

    void setName() {
        this->name = name;
    }

    void setSurname() {
        this->surname = surname;
    }

    void setAge() {
        this->age = age;
    }
};

class Group {
    Student* students;
    int amountOfStudent;
public:
    Group() {
        amountOfStudent = 1;
        students = new Student[amountOfStudent];
    }

    ~Group() {
        delete[] students;
        students = nullptr;
    }
}; 

int main()
{
    Student obj;
    obj.PrintInfoAboutStudent();
    obj.ChangeInfoAboutStudent();
    obj.PrintInfoAboutStudent();
}