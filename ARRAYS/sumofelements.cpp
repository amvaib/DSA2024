#include<bits/stdc++.h>
using namespace std;

int sumArray(int arr[], int size){
    int sum = 0;
    for(int i = 1; i<=size; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int size;
    cout<< "ENTER THE SIZE OF THE ARRAY : ";
    cin>>size;
    int num[100];

    for(int i = 1; i<=size; i++){
        cout << "ENTER "<< i << " ELEMENT : ";
        cin >> num[i];
    }

    cout << "THE SUM OF THIS ARRAY IS : "<< sumArray(num,size) << endl;


}