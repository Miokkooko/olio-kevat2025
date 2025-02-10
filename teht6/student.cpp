#include "student.h"

Student::Student(string n, int a)
{
    Name = n;
    Age = a;
}

void Student::setAge(int)
{

}

void Student::setName(string)
{

}

string Student::getName()
{
    return Name;
}

int Student::getAge()
{
    return Age;
}

void Student::printStudentInfo()
{
    cout<<getName()<<" "<<getAge()<<endl;
}


