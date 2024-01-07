#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout << "ENTER A NUMBER : ";
    cin>> n;

    

    for(int i = 1; i<=n; i++){

        for(char ch = 'A';ch<='A'+i-1; ch++){
            cout << ch<< " ";
            
        }
        
        cout << endl;
        

    }
}