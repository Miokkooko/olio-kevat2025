#include <algorithm>
#include <iostream>
#include <vector>
#include "student.h"
#include <map>
using namespace std;




int main ()
{
    int selection =0;




    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;



        switch(selection)
        {
        case 0:
        {
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            int a;
            string n;

            cout<<"Anna uuden opiskelijan ika"<<endl;
            cin >> a;
            cout<<"Anna uuden opiskelijan nimi"<<endl;
            cin>>n;
            Student student(n,a);
            studentList.push_back(student);

            break;
        }
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            cout<<"Students: "<<endl;
            for (auto it = studentList.rbegin(); it != studentList.rend(); it++)
            {
                cout<<"Nimi: "<<it->getName()<<" Ika: "<<it->getAge()<<endl;
            }
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout<<"Students sorted by name:"<<endl;
            std::sort(studentList.begin(),studentList.end(),[]( Student &a,  Student &b){
                return a.getName()<b.getName();
            });
            for(auto &student : studentList)
            {
                student.printStudentInfo();
            }

            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout<<"Students sorted by age:"<<endl;
            std::sort(studentList.begin(),studentList.end(),[]( Student &a,  Student &b){
                return a.getAge()<b.getAge();
            });
            for(auto &student : studentList)
            {
                cout<<student.getName()<<" "<<student.getAge()<<endl;
            }

            break;
        case 4:
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            {
            cout<<"Anna nimi"<<endl;
            string nimi;
            cin>>nimi;

            auto it = std::find_if(studentList.begin(),studentList.end(),[nimi](Student& obj) {return nimi==obj.getName();});


            if(it!=studentList.end())
            {
            cout<<"Nimi: "<<it->getName()<<" "<<"Ika: "<<it->getAge();
            }else cout<<"Nimea ei loytynyt"<<endl;


            break;
            }

        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }

    }while(selection < 5);
}


