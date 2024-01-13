#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1;
    cout << "ENTER FIRST NUMBER : ";
    cin>>num1;

    int num2 ;
    cout << "ENTER SECOND NUMBER : ";
    cin>>num2;

    char function;
    cout << "ENTER A FUNCTION : ";
    cin>> function;

    int result ;

    switch(function){

        case '+': result = num1 + num2;
        break;

        case '-': result = num1- num2;
        break;

        case '*' : result = num1*num2;
        break;

        case '/': result = num1/num2;
        break;

        default: cout << "THE FUNCTION IS INVALID!";
        break;
    }

    cout << result << endl;
}