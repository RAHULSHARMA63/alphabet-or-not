#include <iostream>
using namespace std;
int main() 
{
    char k;
    cout << "enter a character \n";
    cin >> k;
  
    if((k >= 'a'&& k <= 'z') || (k >= 'A' && k <= 'Z'))
	 {
	     cout << k << " is an alphabet.";
    }
	 else 
	{
       cout << k << " is not an alphabet.";
    }  
    return 0;
}
