#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> ls;

    ls.push_back(2); //{2}

    ls.emplace_back(3); //{2,3}

    ls.push_front(5); //{5,2,3}

    ls.emplace_front(6); //{6,5,2,3}

    
}