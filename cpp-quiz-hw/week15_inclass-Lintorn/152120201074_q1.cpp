#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

fstream file;

struct nameSurname
{
    string name;
    string surName;

} user[5];

int main()
{
    //store the input into struct
    for (size_t i = 0; i < 5; i++)
    {
        cout << "For " << i+1 << ". person: \nEnter name: ";
        cin >> user[i].name;
        cout << "Enter surname: ";
        cin >> user[i].surName;
    }
 
    
    // write it to the file
    for (size_t i = 0; i < 5; i++)
    {
        file.open("textFile.txt", ios::app);
        if (file.is_open())
        {
            file << user[i].name<<' '<<user[i].surName<<endl;
            file.close();
        }
    }  
    string names[10];

    // read the file and save it to the array
    file.open("textFile.txt",ios::in);
    if(file.is_open()){
        string str;
        int i=0;
        
        while(getline(file,str)){
            istringstream iss(str);
            string temp;
            while(getline(iss,temp,' ')){
                names[i] = temp;
                i++;
            }
        }

    }file.close();
    
    for (size_t i = 0; i < 5; i++)
    {
        cout <<i+1<<". Person name is "<<names[i]<<"\n"<<i+1<<". Person surname is "<<names[i+1]<<endl;
    }
           
      
  
  

    return 0;
}