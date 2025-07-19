// Sum of odd numbers
#include<iostream>
using namespace std;

int main (){
int n=10;
int sum=0;
for(int i=1;i<=n;i++){
    if(i%2!=0){
        cout << i << " ";
        sum+=i;
    }
}
    cout << "\nOdd sum =" << sum << " "<< endl;

return 0;
}
