#include<bits/stdc++.h>
using namespace std;
//sets it stores elements which are unique and in an sorted ordered way,,
int main(){
set<int> st;
st.insert(4);//{4}
st.emplace(1);//{1,4}
st.insert(3);//{1,3,4}
st.insert(4);//{1,3,4}
st.insert(8); //{1,3,4,8}
auto t = st.find(4);
auto t= st.find(1000);// IF WE FIND THE ELEMENT WHICH IS NOT IN THE SET THEN WE GET THE INDEX OF LAST ELMENT+1..like st.en             d
int s = st.count(4);
auto t1=st.find(3);
auto t2=st.find(8);
st.erase(t1,t2); // the element between tis will be removed
st.erase(4);


// multiset it stores dublicate also it only obeys sorted
multiset<int> ms;
ms.insert(1);
ms.emplace(2);
ms.emplace(1);//{1,1,2}
ms.erase(1);// both the ones will be deleted
ms.erase(ms.find(1));// only the first 1 will be deleted

// unordered set it only store unique but does not store in the shorted way...
unordered_set<int> un;
//{1,4,2,5}
// everything is same as the set but lowerbound n the upper bound does not work 


}