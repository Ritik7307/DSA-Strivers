// Find the number appears  in an array once, while the other are twice

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,2,2,5,3,3,4,4};
    int n =sizeof(arr)/sizeof(arr[0]);
    int ans =0;
    for(int i=0;i<n;i++){
        ans^=arr[i];
    }
    cout<<ans<<endl;
}