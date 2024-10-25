#include<bits/stdc++.h>
using namespace std;
void print(stack<int>main){
    stack<int>ans = main;
    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }
    cout<<endl;
}
int main(){
    stack<int>main;
    stack<int>maxi;
        int n;
        int val;
    while(true){
        cin>>n;
        cout<<"next choice: ";
        switch(n){
            case 1: //push
            cout<<" input: ";
                cin>>val;
                main.push(val);
               if(maxi.empty() or val >= maxi.top()){
                maxi.push(val);
               }
               break;
            case 2: //pop
                if(!main.empty()){
                    if(main.top() == maxi.top()){
                        maxi.pop();
                    }
                    main.pop();
                }
                else{
                    cout<<"stack is empty: "<<endl;
                }
                break;
            case 3: //max ELement in the stack..
                if(!maxi.empty()){
                    cout<<"max ELELment: "<<maxi.top();

                }else cout<<"stack is empty.";
                break;
            case 4: //print all the elements in a stack.l
                cout<<"printing all the elements in a stack: ";
                print(main);break;
            case 5:
                cout<<"exiting the program: ";
                return 0;
            default: cout<<"Invalid input: ";break;
        }

    }
    return 0;
}