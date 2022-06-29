#include <iostream>
#include <string>
#include <istream>
using namespace std;


struct Student{
    string  tname, tsurname, tspeciality;
    string sname_surname[6];

}student;


int main(){
    int numberOfteacher;
    cout << "Enter how many teacher in the school: ";
    cin >>numberOfteacher;
    cin.ignore();
    Student *ptrTeacher = new Student[numberOfteacher];
    ptrTeacher = student;

    for (int i = 0; i < numberOfteacher; i++)
    {
        cout << i+1<<". teacher:"<<endl;
        cout << "Enter the name: ";
        getline(cin, (ptrTeacher+i)->tname) ;
        cout << "Enter the surname: ";
        getline(cin, (ptrTeacher+i)->tsurname);
        cout << "Enter the specialty: ";
        getline(cin,(ptrTeacher+i)->tspeciality) ;
        
        for (int i = 0; i < 6; i++)
        {
            cout << "Enter the student "<<i+1<<" name surname: ";
            getline(cin,student.sname_surname[i]);
        }
        
        
    }
    
    for (int i = 0; i < numberOfteacher; i++)
    {
        cout << i+1<<". Teacher Name: "<<ptrTeacher->tname<<"Surname: "<<ptrTeacher->tsurname<<"speciality: "<<ptrTeacher->tspeciality<<endl;
        for (int j = 0; j < 6; j++)
        {
            cout<<j+1<<". student: "<<ptrTeacher[i].student.sname_surname[i]<<endl;
        }
        


    }
    


    return 0;
}