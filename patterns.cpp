#include<bits\stdc++.h>
using namespace std;
void pattern1(int n){
for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        cout<<"* ";
    }
    cout<<endl;
}
}
void pattern2(int n){
for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        cout<<j;
    }
    cout<<endl;
}
}

void pattern3imp(int n){
for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        cout<<j;
    }
    cout<<endl;
}}

/*  *
    ***
   *****
   */ //imp pattern
void pattern4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<< "*";
        }
        for(int i=0;i<n-1-i;i++){
            cout<<" ";
        }
        cout<<endl;
    }

}
// reverse of pattern 4........
void patter_reverse(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        for(int j=0;j<9-2*i;j++){
            cout<<"*";
        }
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
//#imppppppppppppppppppppppppppppppppppp
void pattern5(int n){
    for(int i=1;i<2*n-1;i++){
        int star=i;
        if(star>n) {
            star=2*n -i;
        }
        for(int j=1;j<star;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern6(int n){
        int star =0;
    for(int i=0;i<=n;i++){
        if(i%2 == 0) star =1;
        else star =0;
        for(int j=0;j<=i;j++){
            cout<<star;
            star = 1-star;

        } 
        cout<<endl;
    }
}
void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=0;j<=6-2*i;j++){
            cout<<" ";
        }
         for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern8(int n){
    for(int i=0;i<n;i++){
        for( char j='A';j<='A'+i;j++){
            cout<<j <<" ";
        }
        cout<<endl;
    }
}
void pattern9(int n){
    for(int i=0;i<n;i++){
        for( char j='A';j<='A'+n-i-1;j++){
            cout<<j <<" ";
        }
        cout<<endl;
    }
}
void pattern10(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
int x;
cin>> x;
pattern10(x);
return 0;
}
