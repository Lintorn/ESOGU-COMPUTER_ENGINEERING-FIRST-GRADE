#include <iostream>
#include <string>
#include<sstream>
#include <typeinfo>
using namespace std;



string findLargestWord(string aa){
    // inputun cumlesinin kac kelimeden olustugunu bul
    int fctr = 0;
	for (int i = 0; i < aa.length(); ++i)
	{
		if (aa[i] == ' ') //stringteki bosluk sayisini bulup ustune 1 ekleyerek stringteki kelime sayisina ulasiriz
			fctr++;
	}
    fctr++;
    //stringi kelime kelime ayır ve bir array icine yerlestir
	istringstream iss(aa); 
	string *str= new string[fctr];
	int index = 0;
	string tmp;
	while (getline(iss, tmp, ' '))
	{
		str[index] = tmp;
		index++;
    }
    //cout << str[3] << endl<< str[3].length()<<endl;
    

    int j;int max = 0;
    for (size_t i = 0; i < fctr; i++)
    {
        int num = str[i].length();
        if(num>max){
            max = num;
            j = i;
        }
    }
    return str[j];
    

}

int main(){

    cout << findLargestWord("Cpp is a programming language for everyone.");
    return 0;
}



