//// this one is confusing

#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    // so when it is false it automatically swaps the value

}
int main(){
   // int a={1,3,5,6};
    sort(a,a+4);
    //or
    sort(a.begin(),a.end());
    //sorting in decending order
    sort(a,a+n, greater<int>);
    pair<int,int> a[] = {{1,2},{2,4},{5,6},{20,1}};

    //its bool  comp it a inbulid function that swap the values
    sort(a,a+n,comp);

    int num = 7 ;// so in binary its 111
    int num2=6; // in binary its 110
    int cnt = __builtin_popcount(num);//its 3 and for num2 its 2
    string s="134";
    do{
        cout<< s <<endl;   
    }while(next_permutation(s.begin(),s.end()));
    // it will print all the possible combintations like 134,143,431,413 and so on..
    int maxi = *max_element(a,a+n);
}