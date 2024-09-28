
#include<bits/stdc++.h>
using namespace std;
class rectangle{
public:
double height,width;
void setwidth(double a){
height = a;
}
void setheight(double b){
width = b;
}
void area(){
    cout<<"area"<<height* width;
}
void para(){
    cout<<"perimeter: "<<2*(height+width);
}
void dimensions(){
    cout<<"deimensions: ";
    area();
    para();
}



};


// int main(){
//     rectangle obj;
//     double a,b;
//     cin>>a>>b;
//     obj.setwidth(a);
//     obj.setheight(b);
//     //obj.area();
//     //obj.para();
//     obj.dimensions();

// }






// #include<bits/stdc++.h>
// using namespace std;
// class myfirst{
//     private: 
//     int m=110;
//     public:
//     string any;
//     int n;
//     void tim(int n){
//         int x=n;
//         cout<<"public: "<<x;
//         cout<<"private"<<m;
//     }

    
// };
// int main(){
//     myfirst code;
//     cin>>code.any;
//     cout<<code.any;
//     code.tim(100000);

// }