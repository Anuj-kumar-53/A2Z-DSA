#include<bits/stdc++.h>
using namespace std;
class practice{
   private:
   int age;
    public:
    char name;
    int roll_no;
    void setage(int s){
        age = s;
    }
    int getage(){
        return age;
    }
   

};
int main(){
    //object or instance of class
    practice object;
    cin>>object.name;
    object.roll_no = 50;
    cout<<object.name<<endl;
    cout<<object.roll_no<<endl;
    //object.age = 18 ;// we cant access this cause this is in private acces modifier
    // that y we need geter n seter to acces the private properties...
    //acessing private properties....
    object.setage(14);
    cout<<object.getage();
 

    
}