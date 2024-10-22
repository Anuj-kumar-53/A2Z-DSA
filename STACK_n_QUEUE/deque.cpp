#include<iostream>
#include<deque>
#include<stack>
#include<vector>
#include<queue>
using namespace std;
//basics of dequue....
int main(){
    deque<int>dq;
    int n;cin>>n;
    cout<<"enter the no of elements in front: ";
    for(int i=0;i<n;i++){
        int val;cin>>val;
        dq.push_front(val);
    }
    int m;cin>>m;
    cout<<"enter the no of elements in back: ";
    for(int i=0;i<m;i++){
        int val;cin>>val;
        dq.push_back(val);
    }
    cout<<"all the elements in the deque: ";
for(auto it:dq){
    cout<<it<<" ";
}
cout<<"front: "<<dq.front()<<endl;
cout<<"back: "<<dq.back()<<endl;
dq.pop_back();
dq.pop_front();
cout<<"aftering poping: ";
cout<<"front: "<<dq.front()<<endl;
cout<<"back: "<<dq.back()<<endl;

    cout<<"all the elements in the deque after popping: ";
for(auto it:dq){
    cout<<it<<" ";
}
return 0;

}
