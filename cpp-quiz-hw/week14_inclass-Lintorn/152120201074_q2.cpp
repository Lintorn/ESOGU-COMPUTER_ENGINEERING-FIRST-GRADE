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
} person,*ptr;


int main(){
    // initialeze pointer
    struct Person *ptr;
    ptr = &person;

    // get the input from user
    cout << "Enter your name: ";
    getline(cin, ptr->name);

    cout << "Enter your surname: ";
    getline(cin, (*ptr).surname);

    cout << "Enter your city: ";
    getline(cin, (*ptr).city);

    cout << "Enter your age: ";
    cin >> (*ptr).age;

    cout << "Enter your height: ";
    cin >> (*ptr).height;

    cout << "Enter your salary: ";
    cin >> (*ptr).salary;

     // outputs

    cout <<"\n\n"<< "Your name is: "<< ptr->name<<endl;
    cout << "Your surname is: "<<ptr->surname<<endl;
    cout << "Your city is: "<<ptr->city<<endl;
    cout << "Your age is: "<<ptr->age<<endl;
    cout << "Your name height: "<<ptr->height<<endl;
    cout << "Your name salary: "<<ptr->salary<<endl;






    return 0;
}