#include<iostream>
using namespace std;

int main (){
int grade;

cout << "Enter the grade:";
cin >> grade;

if(grade >= 90){
    cout << "A\n";
} else if (grade>=80 && grade<90){
    cout << "B\n";
} else {
    cout << "C\n";
}

return 0;
}
