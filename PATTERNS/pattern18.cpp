#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "ENTER A NUMBER : ";
    cin>>n;

    for(int i = 1; i<=n; i++){

        for(int j =1 ; j<= n-i; j++){
            cout << " ";
        }
        int breakpoint = (2*i-1)/2;
    char ch = 'A';




        for(int j =1 ; j<= 2*i-1; j++){
            cout << ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }
        
    

    
        for(int j =1 ; j<= n-i; j++){
            cout << " ";
        }


        cout << endl;
        
    }
}