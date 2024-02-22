#include<bits/stdc++.h>
using namespace std;

void reverseAlt(int arr[], int size){
    
    for(int i = 0; i<size; i = i+2){
        if(i+1<size){

        swap(arr[i], arr[i+1]);
        }
    }
}

int main(){

    int a[5] = {1,2,3,4,5};
    int b[6] = {1,2,3,4,5,6};

    
    reverseAlt(b,6);    

for(int i = 0; i<6; i++){
        cout <<b[i] << " ";
        
    }

}