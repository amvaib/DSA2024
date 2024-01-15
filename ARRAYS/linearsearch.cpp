#include<bits/stdc++.h>
using namespace std;
bool searchArray(int arr[], int n , int key){
    for(int i = 1; i<=n; i++){
        if(arr[i] == key){
            return 1;
        }
        
    }
    return 0;
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

    int key1;
    cout << "ENTER THE KEY : ";
    cin>>key1;

    bool found = searchArray(num,size,key1);

    if(found){
        cout << "THE KEY IS FOUND"<< endl;

    }
    else {
        cout << "THE KEY IS NOT FOUND"<< endl;
    }

}