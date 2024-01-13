#include<bits/stdc++.h>
using namespace std;
int main(){
    int amount ;
    cout << "ENTER THE TOTAL AMOUNT : ";
    cin>> amount;

    int note = 0;
    int num = 1 ;

    switch(num){

        case 1: {
            note = amount/100;
            amount = amount - (100*note);
            cout << "THE 100 RUPEE NOTES REQUIRED ARE : " << note << endl;

        }

        case 2: {
            note  = amount/50;
            amount = amount - (50*note);
            cout << "THE 50 RUPEES NOTE REQUIRED ARE : "<< note << endl;
        }

        case 3: {
            note = amount/20;
            amount = amount - (20*note);
            cout << "THE 20 RUPEE NOTES REQUIRED ARE : " << note << endl;

        }

        case 4: {
            note = amount/1;
            amount = amount - (1*note);
            cout << "THE 1 RUPEE NOTES REQUIRED ARE : " << note << endl;

        }
    }
}