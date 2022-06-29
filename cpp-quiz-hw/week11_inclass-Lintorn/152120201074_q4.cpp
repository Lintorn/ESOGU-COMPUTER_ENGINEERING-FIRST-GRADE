#include <iostream>
#include <string>
using namespace std;

bool check(string a) {

  int length = int(a.size());
  for (int i = 0; i < length; i++){
    if (a[i] == 'E' || a[i] == 'e'){
      if (i+2 < length  && (a[i+2] == 'G' || a[i+2] == 'g'))
          return true;
    }
    if (a[i] == 'G' || a[i] == 'g'){
      if (i+2 < length  && (a[i+2] == 'E' || a[i+2] == 'e'))
          return true;
    }
  }
  return false;

}

int main() 
{
	
    cout << "eagerer -> " << check("eagerer") << endl;
    cout << "eaglets -> " << check("eaglets") << endl;
    cout << "eardrop -> " << check("eardrop") << endl;

	return 0;
}