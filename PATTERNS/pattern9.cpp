#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout << "ENTER A NUMBER : ";
    cin >> n;
    
    //space
    for(int i = 1; i<=n; i++){

        for(int j =1 ; j<= i-1; j++){
            cout << " ";
        }

        for(int j =1 ; j<= 2*n-(2*i-1); j++){
            cout << "*";
        }
        
        for(int j =1 ; j<= i-1; j++){
            cout << " ";
        }


        cout << endl;
        
    }
}