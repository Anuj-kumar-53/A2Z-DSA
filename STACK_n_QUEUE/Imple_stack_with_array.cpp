//this is basically last in first out..
#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int size;
    int * arr;
    int top;
       public:
       Stack(){
        top = -1;
        size = 100;
        arr = new int[size];
       }
       //add elements...
       void push(int x){
        top++;
        arr[top] = x;
       }
       int Pop(){
        int x = arr[top];
        top--;
        return x;
       }
       int Top(){
        return arr[top];
       }
       int Size(){
        return top+1;
       }


};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
      cout << "Top of stack is before deleting any element " << st.Top() << endl;
  cout << "Size of stack before deleting any element " << st.Size() << endl;
  cout << "The element deleted is " << st.Pop() << endl;
  cout << "Size of stack after deleting an element " << st.Size() << endl;
  cout << "Top of stack after deleting an element " << st.Top() << endl;
  st.push(1000);
  cout<<st.Size()<<endl;
  cout<<st.Top();
  return 0;

}