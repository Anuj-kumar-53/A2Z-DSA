#include<bits/stdc++.h>
using namespace std;
//************ this is such a container in which the maximum or greatest element is stored first  
int main(){
    priority_queue<int> pq;
    pq.push(5);//{5}
    pq.push(2);//{5,2}
    pq.push(8);//{8,5,2}
    pq.emplace(7);//{8,7,5,2}
    cout<<pq.top();// print the max element or the topmost element
    // opposite of this that is it store the smallest element at the toppppp
 priority_queue<int,vector<int>,greater<int>>pq;
 pq.push(5);
  pq.push(2);
   pq.push(8);
   pq.emplace(7);//{2,5,7,8}
   cout<<pq.top(); // now the smallest element willl be printed..

}