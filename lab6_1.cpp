#include<iostream>
using namespace std;
int i=0;
int x=1;
int N=0;

int main(){
    while(x !=0){
    cout << "Enter an integer: ";
    cin >> x;
    x=x;
    if(x%2==0){
        i++;
    }
    else{
        N++;
    }
    }
    cout << "#Even numbers = ";
    cout << i-1 << "\n";
    cout << "#Odd numbers = ";
    cout << N;
    

    return 0;
}