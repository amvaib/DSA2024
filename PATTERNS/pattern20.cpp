#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "ENTER A NUMBER : ";
    cin >> n;

    // initial spaces.
      int iniS = 0;
      for(int i=0;i< n;i++){
          
          //for printing the stars in the row.
          for(int j=1;j<=n-i;j++){
              cout<<"*";
          }
          
          //for printing the spaces in the row.
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          
          //for printing the stars in the row.
          for(int j=1;j<=n-i;j++){
              cout<<"*";
          }
          
          // The spaces increase by 2 every time we hit a new row.
          iniS+=2;
          
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
      }
      

    for(int i = 1; i<=n ; i++){
        for(int j  = 1; j<= i; j++){
            cout << "*";

        }
        for(int j = 1; j<=(2*n)-(2*i) ; j++){
            cout<< " ";
        }

        for(int j = 1; j<= i; j++){
            cout << "*";
        }


        
            
        cout << endl;

    }





    
    
}