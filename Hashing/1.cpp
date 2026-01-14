#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
   //   pre computation

   int hash[13]={0};
   for(int i=0;i<n;i++){
      hash[arr[i]]++;
   }
     int q;
     cout<<"Enter queris: ";
     cin>>q;
     while(q--){
      int number;
      cin>>number;
      // fetch
      cout<<hash[number]<<endl;
     }
}