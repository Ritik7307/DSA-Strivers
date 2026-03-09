#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,6,8,5,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target=18;
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        int a = arr[i];
        int more =  target-a;
        if(mpp.find(more)!=mpp.end()){
            cout<<"Yes"<<endl;
            return 0;
        }
        mpp[a]=i;
    }
    cout<<"No"<<endl;
}