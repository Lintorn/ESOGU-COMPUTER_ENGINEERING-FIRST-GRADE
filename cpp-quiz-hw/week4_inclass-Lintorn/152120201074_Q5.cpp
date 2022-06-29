#include<iostream>
using namespace std;
void check(int &n, int &sum){
    if(n>=sum){
        sum=sum+n;
    }
    else {
        sum=sum-n;
    }
}
int main() {
    int n, max=50, sum=0;
    while(max>sum){
        cin>>n;
        check(n,sum);
        cout<<"N= "<<n<<" Sum= "<<sum;
    
    }


    return 0; 
}