#include <iostream>
using namespace std;
// Calculate percentage of 5 subjects
int main(){
     double sub1, sub2, sub3, sub4, sub5, totalmarks, percentage;
     cout << "Enter Subject 1 marks: ";
     cin>>sub1;
        cout<< "Enter Subject 2 marks: ";
        cin>>sub2;
        cout<< "Enter Subject 3 marks: ";
        cin>>sub3;
        cout<< "Enter Subject 4 marks: ";
        cin>>sub4;
        cout<< "Enter Subject 5 marks: ";
        cin>>sub5;
        totalmarks = sub1 + sub2 + sub3 + sub4 + sub5;
        percentage = (totalmarks / 500) * 100;
        cout << "Total Marks: " << totalmarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        
  return 0;
}