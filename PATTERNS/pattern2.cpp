#include<bits/stdc++.h>
using namespace std;
int main(){
    int num ;
    cout << "ENTER A NUMBER : ";
    cin >> num;
    
    for(int i = 1; i<= num; i++ ){
        for(int j =1; j<=i; j++){
            cout << "* ";
        }   
        cout << endl;
    }
}