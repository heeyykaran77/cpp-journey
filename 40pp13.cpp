#include <iostream>
using namespace std;
//Convert float into int and print both values.
int main(){
    float f;
    int i;
    cout << "Enter a floating-point number: ";
    cin >> f;
    i = (int)f;
    cout << "The floating-point number is: " << f << endl;
    cout << "The integer value is: " << i << endl;
    return 0;
}