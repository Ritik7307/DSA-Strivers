// Second Largest Element in an array

// Better Approach:

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {3,7,8,9,5};
//     int largest = arr[0];
//     for(int i=0;i<5;i++){
//         largest = max(largest,arr[i]);
//     }
//     int sLargest = -1;
//     for(int i=0;i<5;i++){
//         if(arr[i]>sLargest && arr[i]!=largest){
//             sLargest = arr[i];
//         }
//     }
//     cout<<sLargest<<endl;
//     return 0;
// }


// Optimal Approach

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3,7,8,9,5};
    int largest = arr[0];
    
    // Assumptuion array do not contain any negative number

    int slargest = -1;

    for(int i=0;i<5;i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i]>slargest){
            slargest = arr[i];
        }
    }
    cout<<slargest<<endl;

}