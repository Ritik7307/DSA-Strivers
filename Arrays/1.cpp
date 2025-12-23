// Largest Element in an array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3,2,1,5,2};
    int largest = arr[0];
    for(int i=0;i<5;i++){
        largest = max(largest,arr[i]);
    }
    cout<<largest<<endl;
    return 0;
}