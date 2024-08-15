#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> variable={2,3,53,4}; // it creates an empty array whose siize can be anything
    variable.push_back(1); //the first element 1 is added in the array
    variable.emplace_back(5); //this also adds elements in the array
    vector<pair<int,int>> x;
    x.push_back({1,2}); 
    x.emplace_back(3,54);
    vector<int> y(5,10); // its an array that contanis 10 five times
    vector<int> y(5);//it contains 0 five times
    // for printing the output we can simply use like arr v[2]
    cout<<variable[1] <<" ";
    // iterators ........................................................
    vector<int>::iterator g=y.begin(); // it points to the first memeory address
    vector<int>::iterator g=y.end(); // it point to the memory behind the last element
    //vector<int>::iterator g=rbegin(); //opposite
    //vector<int>::iterator g=rend(); 
    //ways of printing
    for(vector<int> ::iterator g= y.begin();g != y.end();g++){
        cout<<*(g)<<" ";
    }
    // another way
    for(auto g= y.begin();g!=y.end();g++){
        cout<<*(g)<<" ";
    }
    y.erase(y.begin()+1); // just one element 
    // erase(start,end)
    y.erase(y.begin()+1,y.end()-2);

    //INSERT function
    vector<int>v(2,10);//{10,10}
    v.insert(v.begin(),300);
    v.insert(v.begin()+2,3,10000); // insert(index,how many times,the number)
    vector<int> copy(2,30);//{30,30}
    v.insert(v.begin(),copy.begin(),copy.end());
    // function in vector
    cout<<v.size();// it gives the size
    v.pop_back(); // it removes the last element
    v.clear(); // it removes the entire elements from the vector
    cout<<v.empty(); // it gives true if the vector is empty or else false
    

}