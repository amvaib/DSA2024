#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    for(int i = 2 ; i<=num/2; i++){
        if(num%2 == 0){
            return false;
        }
        else{
            return true;
        }
    }
}


int main(){
    int n;
    cout << "ENTER A NUMBER : ";
    cin>>n;

    bool result = isPrime(n);

    if(result == false){
        cout << "THE NUMBER IS NOT PRIME";
    } else{
        cout << "THE NUMBER IS PRIME";
    }


}