#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout << "ENTER A NUMBER : ";
    cin>> n;

    
    char ch = 'A';
    for(int i = 1; i<=n; i++){

        for(int j = 1; j<=i;j++){
            cout << ch<< " ";

            
        }
        ch++;
        cout << endl;
        

    }
}