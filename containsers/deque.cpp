#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(2);//{2}
    d.emplace_back(3);//{2,3}
    d.push_front(10);//{10,2,3}
    d.emplace_front(9);//{9,10,2,3}
    
    d.pop_back();//{9,10,2}
    d.pop_front();//{10,2}
}