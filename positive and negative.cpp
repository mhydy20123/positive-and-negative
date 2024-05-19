#include <iostream>

using namespace std;

int main()
{
    int number;
 cout << "Enter the number : ";
 cin >> number;
    if (number == 0) 
        cout << " the number is zero " << endl;
    else{
        if(number>0)
        cout << number << " is positive " << endl;
        else cout << number << " is negative " << endl; 
    }
    return 0;
}
