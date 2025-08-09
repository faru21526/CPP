#include<iostream>
using namespace std;

int main (){
 int n=5;

 for (int i=1;i<=n;i++){
    char ch ='A'; // for repeat the number everyline it should be in outer loop
    for (int j=1;j<=n;j++){
        cout << ch << " ";
        ch=ch+1;
    }
    cout << endl;
 }
 return 0;

}



