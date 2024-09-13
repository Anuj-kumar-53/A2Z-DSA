// the only difference is that the tail or the last element point back to first
// element and the rest are same.. but after inserting or deleting we need to join again the tail.
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

public:
    node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
node *insert(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *newE = new node(arr[i]);
        temp->next = newE;
        temp = temp->next;
    }
    temp->next = head;
    return head;
}
void print(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}
node *add(node *header, int val){
    node* newE = new node(val);
    if(header == nullptr){
        header = newE;
        header->next = header;
        return header;
    }else{ 
    node* temp = header;
    while(temp->next != header){
        temp= temp->next;
    }
    temp->next = newE;
    newE->next = header; 
    return header;
    }
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};
    node *head = insert(arr);

    print(head);
    node *header = nullptr;
    cout<<"enter the elements of linkied list u have to enter till its negative \n";
    while (true)
    {
        int n;
        cin >> n;
        if(n<0) break;
        header = add(header, n);
    }
 print(header);
    return 0;
}