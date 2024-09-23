#include<bits/stdc++.h>
using namespace std;
class Queue{
    int size;
    int * arr;
    int start,end,curr_sz,max_size;
    public:
    Queue(){
        size = 1000;
        arr = new int[size];
        start = -1;
        end = -1;
        curr_sz = 0;
    }
    Queue(int siz){
        max_size = siz;
        arr = new int[max_size];
        start = -1;
        end = -1;
        curr_sz = 0;
    }
    void push(int ele){
        if(curr_sz == max_size){
            cout<<"stack is empty";
            exit(1);
        }
        if(end == -1){
            start =0;
            end =0;
        }else
                end = (end+1)%max_size; //we can also write end++;
                arr[end] =ele;
                curr_sz++;
        
    }
    int Pop(){
        if(start == -1){
            cout<<"empty queue";
            exit(1);
        }
        int popped = arr[start];
        if(curr_sz == 1){
            start = -1;
            end =-1;
        }
        else
        start = start+1;  //start = start%max_size
        curr_sz--;
        return popped;

    }
    int Top(){
        if(start == -1){
            cout<<"its empty";
            exit(1);
        }
        return arr[start];
    }
    int Size(){
        return curr_sz;
    }

};
int main(){
    Queue qt(10); //i have given the size as i have made the constructure which takes input..
    qt.push(10);
    cout<<"The element poped is: "<<qt.Pop()<<endl;
    qt.push(20);
    cout<<"the top element is : "<<qt.Top()<<endl;
    qt.push(30);
    cout<<"the top element is : "<<qt.Top()<<endl;
    cout<<"the size is: "<<qt.Size()<<endl;
    qt.push(50);
    cout<<"The element poped is: "<<qt.Pop()<<endl;
    qt.push(60);
    cout<<"the top element is : "<<qt.Top()<<endl;
    qt.push(70);
    qt.push(80);
    cout<<"the size is: "<<qt.Size()<<endl;
    cout<<"The element poped is: "<<qt.Pop()<<endl;
   
}