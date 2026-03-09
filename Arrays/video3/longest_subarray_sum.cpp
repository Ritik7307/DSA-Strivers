// Longest subarray with sum k (positive elements)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,1,1,1,1,4,3,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    long long k = 10;
    map<long long,int>preSum;
    long long sum=0;
    int maxLen=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==k){
            maxLen=max(maxLen,i+1);
        }
        long long rem = sum-k;
        if(preSum.find(rem) != preSum.end()){
             int len=i-preSum[rem];
            maxLen=max(maxLen,len);
        }
           
        preSum[sum]=i;
    }
    cout<<maxLen<<endl;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[]={1,2,3,1,1,1,1,4,3,1,2};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     long long k = 3;

//     int left = 0;
//     long long sum = 0;
//     int maxLen = 0;

//     for(int right = 0; right < n; right++){
//         sum += arr[right];

//         while(sum > k){
//             sum -= arr[left];
//             left++;
//         }

//         if(sum == k){
//             maxLen = max(maxLen, right - left + 1);
//         }
//     }

//     cout << maxLen << endl;
//     return 0;
// }