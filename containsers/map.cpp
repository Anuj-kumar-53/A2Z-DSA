#include<bits/stdc++.h>
using namespace std;
int main(){
    // it stores in the for of key value pair
    map<pair<int,int>,int>  mpp1;
    map<int,pair<int,int>>  mpp2;
    // declaring map
    map<int,int> mpp;
    mpp[1]=2;
    mpp.insert({3,1}); 
    mpp.insert({2,5});
    /*{1,2}
      {2,5}
      {3,1} it stores it in the sorted form..
     */
    //mpp[{2,5}]=100;     
    for(auto i: mpp){
        cout<<i.first<<" "<<i.second<<endl;

    }
// we can also use its key to print the value
cout<<mpp[2];//prints 5
//multimap stores dublicaate keys
// unorderedMap does not stores dublicate and is not ordered also

}