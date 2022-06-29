#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

fstream file;
struct Teacher{
    string name,surname,specialty;
    string teacherline;
    string hede[3];
};

int main(){
    string str;
    int linecounter = 0;
    file.open("teacher.txt", ios::in);
    if (file.is_open())
    {
        while (getline(file, str))
        {
            linecounter++;
        }
    }
    file.close();
    Teacher* teach = new Teacher[linecounter];



    // read the file and save it to the array
     file.open("teacher.txt",ios::in);
     if(file.is_open()){

         int i=0;
         while(getline(file,str)){
             istringstream iss(str);
             string temp;
             string wordarr[3];
             int i=0;
             while(getline(iss,temp,' ')){
                 wordarr[i]= (teach+i).hede[i];
             }
             
             cout <<"Name: "<*(*teach).hede[0]<<" Surname: "<<(*teach).hede[1]<<" Cource: "<<(*teach).hede[2]<<endl;
             
         }

     }file.close(); 

    return 0;
}
