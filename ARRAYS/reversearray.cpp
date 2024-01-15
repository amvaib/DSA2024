#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int size){
    int start = 0;
    int end = size -1;
    for(int i =0;start<=end; i++){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int a[5] = {1,2,3,4,5};
    int b[6] = {5,6,7,8,9,0};

    reverse(a ,5);
    reverse(b,6);
    for(int i = 0; i<5; i++){
        cout <<a[i] ;
        
    }
}