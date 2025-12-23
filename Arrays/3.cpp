// Remove Duplicates from Sorted Array

#include<bits/stdc++.h>
using namespace std; // modify and return the no. of unique elements


int main(){
    int arr[] = {1,1,2,2,2,3,3};

    // Brute Force Approach:

    // set<int>st;
    // for(int i=0;i<7;i++){
    //     st.insert(arr[i]);
    // }

    // int idx = 0;
    // for(auto it : st){
    //     arr[idx] = it;
    //     idx++;
    // }
    // cout << "Number of unique elements: " << idx << endl;
    // cout << "Array after removing duplicates:" << endl;
    // for(int i = 0; i < idx; i++){
    //     cout << arr[i] << " ";
    // }

    // Optimal Approach: Two Pointer
    int i=0;
    for(int j=1;j<7;j++){
        if(arr[j]!=arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    cout<<i+1<<endl;
    for(int k=0;k<i+1;k++){
        cout<<arr[k]<<" ";
    }
}