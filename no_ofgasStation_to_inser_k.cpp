//here we have to insert k elements in the given array
//array should be in sorted order..
//use of long double always;
// we are doing this using priority_quese and a hash..
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];cout<<"entered array should be in a sorted order";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;cout<<"enter how many elements u want to insert";
    cin>>k;
   vector<int> howmany(n-1,0);
   priority_queue<pair<long double,int>> pq;
   for(int i=0;i<n-1;i++){
    pq.push({arr[i+1]-arr[i],i});
   }
   for(int gas=1;gas<=k;gas++){
    auto tp = pq.top();pq.pop();
    int second = tp.second;
    howmany[second]++;
    long double diff = arr[second+1] - arr[second];
    long double newlength = diff/(long double)(howmany[second]+1);
    pq.push({newlength,second});
   }
   cout<< pq.top().first;
   return 0;
}