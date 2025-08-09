#include<iostream>
using namespace std;

int main (){
 int n=6;
 for (int i=1;i<=n;i++){
        int num=1;
    for (int j=1;j<=i;j++){
        cout << num;
        num++;
    }
    cout << endl;

 }
 //reverse triangle
 for (int i=1;i<=n;i++){
    for (int j=i;j>=1;j--){
        cout << j;
    }
    cout << endl;

 }
 //floyd's triangle pattern
 int num=1;
 for (int i=1;i<=n;i++){
    for (int j=1;j<=i;j++){
        cout << num << " ";
        num++;
    }
    cout << endl;

 }


 return 0;
}
