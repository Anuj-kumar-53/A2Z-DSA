#include<bits/stdc++.h>
using namespace std;
int main(){
    // pairs and its ways of declaring ...
    pair<int,int> anyvariable = {3,5};
    pair<int,pair<float,int>> x = {1,{2.4,8}};
    cout<<anyvariable.first<<" "<<x.second.second;
    pair<int,int> arr[]={{1,2},{3,5},{4,8}};
    cout<<arr[1].second;
}