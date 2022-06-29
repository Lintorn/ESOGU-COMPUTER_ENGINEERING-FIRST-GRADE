#include <iostream>
using namespace std;
#define N 23 // number of ladders
void numberOfRemainingStairs(int* remainStair,int* count) { /* remainStair--remaining number of stairs to climb 
count indicates the number of steps you have taken*/
    
    if(*remainStair >=5){ // decrease the value of reaminstairs until it is less than 5
        *remainStair -=5;
        *count+=1;
        cout<<"Step-"<<*count<<" =>"<<"Move 5 stairs up. Remaining: "<<*remainStair<<endl;
    }else if (*remainStair<=5 && *remainStair>1){// decrease the value of reamainstairs if it is less than 5 and bigger than 1  
        *remainStair -=2;
        *count+=1;
        cout<<"Step-"<<*count<<" =>"<<"Move 2 stairs up. Remaining: "<<*remainStair<<endl;
    }else { // if reamainingstairs is one just decrease it 1
        *remainStair -=1;
        *count+=1;
        cout<<"Step-"<<*count<<" =>"<<"Move 1 stairs up. Remaining: "<<*remainStair<<endl;
    }

}
int main(){
    int remainStair =N
    int count =0;
    cout<< "For N= "<< N <<endl;
    while (remainStair>=1)//call the function until there are no stairs left
    {
        numberOfRemainingStairs(&remainStair,&count);
    }
    cout <<"You reached the top of the ladder in "<<count<<" steps"<<endl;  

    return 0;
}

