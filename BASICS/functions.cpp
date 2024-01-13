#include<bits/stdc++.h>
using namespace std;
long oddEven(long num1){

    if(num1&1){
        return 1;
    }
    else{
        return 0;
    }


}

int main(){

    long n;
    cout <<"ENTER A NUMBER : ";
    cin >> n;

    int result = oddEven(n);

    if(result){
        cout << "THE NUMBER IS ODD" << endl;
    } else{
        cout << "THE NUMBER IS EVEN"<< endl;
    }


    
    
}