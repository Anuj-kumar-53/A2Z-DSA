#include<bits/stdc++.h>
using namespace std;
//**********Queue is FIFO(first in first out)
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);//{1,2,3}
    q.emplace(4);//{1,2,3,4}
    q.back()+=5; // it add 5 to the last element
    cout<<q.back();//prints the last element
    cout<<q.front();// prints the first element n still the size is same
    q.pop();// removes the first element in terms of queue


}