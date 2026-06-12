#include <iostream>
using namespace std;
//Check whether a year is century year or not.
int main(){
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if (year % 100 == 0)
        cout << year << " is a century year." << endl;
    else
     cout << year << " is not a century year." << endl;

  return 0;
}