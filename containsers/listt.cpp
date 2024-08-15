#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> ls;
    ls.push_back(2);//{2}
    ls.emplace_back(4);//{2,4}
    ls.push_front(10);//{10,2,4};
    ls.emplace_front();//{2,4}
    // the rest functions are similar to vector........
    // study vector properly.
}
