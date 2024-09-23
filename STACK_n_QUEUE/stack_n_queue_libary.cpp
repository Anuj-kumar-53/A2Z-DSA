#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<"the size: "<<s.size()<<endl;
    cout<<"the top: "<<s.top()<<endl;
    s.pop();
    s.pop();
    cout<<"the size: "<<s.size()<<endl;
    cout<<"the top: "<<s.top()<<endl;


cout<<"QUEUE implementations: "<<endl;
///note for queue there is not top we have to use front......
    //Queue
    queue<int>qt;
    qt.push(10);
    qt.push(20);
    cout<<"the size: "<<qt.size()<<endl;
    cout<<"the top: "<<qt.front()<<endl;
    qt.push(30);
    qt.push(40);
    qt.push(50);
    qt.push(50);
    qt.pop();
    qt.pop();
    qt.push(60);
    cout<<"the size: "<<qt.size()<<endl;
    cout<<"the top: "<<qt.front()<<endl;
    qt.pop();
    qt.pop();
    cout<<"the size: "<<qt.size()<<endl;
    cout<<"the top: "<<qt.front()<<endl;
}