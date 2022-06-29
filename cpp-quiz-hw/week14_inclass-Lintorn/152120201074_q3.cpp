#include <iostream>
#include <string>
using namespace std;
#define pi 3.14
struct Circle{
    float radius,area,circumference;


}circle;

void setCircleProperties(Circle circle){
    
    circle.area = pi*(circle.radius*circle.radius);
    circle.circumference = 2*pi*(circle.radius);

    cout << endl<<"Radius: "<<circle.radius<<endl;
    cout << "Area: "<<circle.area<<endl;
    cout << "Circumference: "<<circle.circumference<<endl;

}


int main(){
    float inpradius;
    cout << "Enter radius:";
    cin >> inpradius;
    circle.radius = inpradius;
    setCircleProperties(circle);



    return 0;
}