#include<bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cout<<"enter year";
    cin>>year;
    if(year % 4 ==0){
        if(year%100 == 0){
            if(year % 400 == 0){
                cout<<"its a leap year";
            }else       cout<<"its noooot a leap year";
        }else  cout<<"its a leap year";
    } else cout<<"its noooot a leap year";
}