#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> num;
    num.push_back(1);
    num.push_back(100);
    num.push_back(2);
    num.push_back(101);
    num.push_back(3);
    num.push_back(111);
    num.push_back(103);
    sort(num.begin(),num.end());
    int le_small = 0;
    int count = 0;
    int longest = 1;
    int n = num.size();
    for(int i=0;i<n;i++){
        if(num[i]-1 == le_small){
            count++;
            le_small = num[i];
        }
        else if(le_small != num[i]){
            count = 1;
            le_small = num[i];
        }
        longest = max(longest,count);
    }
    cout<<longest;

}