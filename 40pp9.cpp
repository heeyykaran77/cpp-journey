#include <iostream>
using namespace std;
//Check whether a number is divisible by 5 and 11.
int main(){
    int n;
    cout<< "Enter a number: ";
    cin >> n;
    if(n % 5 == 0 && n % 11 == 0)
        cout << "The number is divisible by both 5 and 11." << endl;
    else
        cout<< "The number is not divisible by both 5 and 11." << endl;
    return 0;
}