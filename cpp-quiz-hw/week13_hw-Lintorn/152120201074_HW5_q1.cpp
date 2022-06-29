#include <iostream>
#include <string>
using namespace std;

int main(){
    int amountOfproduct;
    cout << "Enter how much product in the market: ";
    cin >> amountOfproduct;

    string *p_name = new string[amountOfproduct];
    string *p_brand = new string[amountOfproduct];
    string *p_date = new string[amountOfproduct];
    float *p_price = new float[amountOfproduct];
    // taking input
    for (size_t i = 0; i < amountOfproduct; i++)
    {
        cout <<i+1<<". Product:"<<endl;

        cout<< "Enter the name: ";
        cin >> p_name[i];

        cout << "Enter the brand: ";
        cin >> p_brand[i];

        cout << "Enter the expiration date: ";
        cin >> p_date[i];

        cout << "Enter the price: ";
        cin >> p_price[i];
    }

    //display the informations
    for (size_t i = 0; i < amountOfproduct; i++)
    {
        cout << i+1<<". Product "<<"Name: "<<p_name[i]<<", Brand: "<<p_brand[i]<<", Expiration Date:"<<p_date[i]<<", Price: "<<p_price[i]<<endl;
    }
    
    delete[] p_name;
    delete[] p_brand;
    delete[] p_price;
    delete[] p_date;
    

    return 0;
}