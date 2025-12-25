#include<bits/stdc++.h>
using namespace std;

void print(){
    cout<<1<<endl;
    print();
}
int main(){
    print();
    return 0;
}
// This will call infinitely many times the same function(itself) again & again