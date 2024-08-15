#include<bits/stdc++.h>
using namespace std;
int main(){
   // GCD {2,5} greatest number which divides both of them
   int n1,n2;
   int gcde;
   cin>> n1 >>n2;
   for(int i=1;i<n1;i++){
    if(n1%i==0 and n2%i==0)
    gcde = i;
   }
   cout<<gcde;
   //now euclidean algorithm to find gcd of the number
   /* in this gcd(n1,n2)= gcd(n1-n2,n2) where the first element should be greater(n1) or else it will be change gcd(n2-n1,n1)
   we will do this until one element will be zero 
   so this will take a lot of time so in should we will do gcd(n1%n2,n2) n the rest steps are same
   
   */
  int x1,x2;
  cin>>x1>>x2;
  while(x1>0 and x2>0){
    if(x1>x2) x1= x1%x2;
    else  x2= x2%x1;
    if(x1 ==0) return x1;
    else
    return x2;
  }

}