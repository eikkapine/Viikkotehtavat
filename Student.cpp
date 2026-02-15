#include "Student.h"
#include <iostream>

Student::Student(string n, int a)
{
    name = n;
    age = a;
}

void Student::setAge(int a)
{
    age = a;
}

void Student::setName(string n)
{
    name = n;
}

string Student::getName() const
{
    return name;
}

int Student::getAge() const
{
    return age;
}

void Student::printStudentInfo() const
{
    cout << "Student " << name << " Age " << age << endl;
}
