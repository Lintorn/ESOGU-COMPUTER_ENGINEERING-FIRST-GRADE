#include <iostream>
#include <string>
using namespace std;

struct Person{
    string name;
    string surname;
    string city;
    int age;
    int height;
    int salary;
} person;

int main(){

    // get the input from user
    cout << "Enter your name: ";
    getline(cin, person.name);

    cout << "Enter your surname: ";
    getline(cin, person.surname);

    cout << "Enter your city: ";
    getline(cin, person.city);

    cout << "Enter your age: ";
    cin >> person.age;

    cout << "Enter your height: ";
    cin >> person.height;

    cout << "Enter your salary: ";
    cin >> person.salary;


    // outputs

    cout <<"\n\n"<< "Your name is: "<<person.name<<endl;
    cout << "Your surname is: "<<person.surname<<endl;
    cout << "Your city is: "<<person.city<<endl;
    cout << "Your age is: "<<person.age<<endl;
    cout << "Your name height: "<<person.height<<endl;
    cout << "Your name salary: "<<person.salary<<endl;


    return 0;
}