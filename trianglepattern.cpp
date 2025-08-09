#include<iostream>
using namespace std;

int main (){
 int n=6;

 for (int i=1;i<=n;i++){
    for (int j=1;j<=i;j++){
        cout << "*";
    }
    cout << endl;

 }
 //another type
 for (int i=1;i<=n;i++){
    for (int j=1;j<=i;j++){
        cout << i;
    }
    cout << endl;

 }
 //for char
 char ch ='A';
 for (int i=1;i<=n;i++){
    for (int j=1;j<=i;j++){
        cout << ch;
    }
    ch=ch+1;
    cout << endl;

 }


 return 0;

}

