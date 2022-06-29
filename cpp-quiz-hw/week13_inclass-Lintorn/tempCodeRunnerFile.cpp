#include <iostream>
#include <string>
using namespace std;


int main(){
    
    int nOfstudent;
    cout << "Enter total number of students: ";
    cin >> nOfstudent;
    float *sarr = new float[nOfstudent];
    cout << "enter gpa of students"<<endl;

    for (size_t i = 0; i < nOfstudent; i++)
    {
        cout << "Student"<<i+1<<": ";
        cin >> sarr[i];
    }
    
    cout << endl <<"Displaying GPA of students."<<endl;
    for (size_t i = 0; i <nOfstudent; i++)
    {
         cout << "Student"<<i+1<<": "<<sarr[i]<<endl;
    }
    
    delete[] sarr;


    return 0;
}