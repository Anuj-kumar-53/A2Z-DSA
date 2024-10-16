#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
node *insert(node *root, int val)
{
    if (root == nullptr)
    {
        root = new node(val);
        return root;
    }
    node *temp = root;
    if (val < temp->data)
    {
        temp->left = insert(temp->left, val);
    }
    else
    {
        temp->right = insert(temp->right, val);
    }
    return root;
}
void in_order(node *root)
{
    if (root == NULL)
    {
        return;
    }
    in_order(root->left);
    cout << root->data << " ";
    in_order(root->right);
}
// the above were just creating n printing in in_order...
// now we will start the process of deletion any given node......

// this fn find the last child on the left subtree in right...
node *findLast(node *root)
{
    if (root->right == NULL)
    {
        return root;
    }
    return findLast(root->right);
}

// this function make the joins n deletes the nodes....
node *help_delete(node *root)
{
    if (root->left == NULL)
    {
        node *rightChild = root->right;
        delete (root);
        return rightChild;
    }
    else if (root->right == NULL)
    {
        node *leftChild = root->left;
        delete (root);
        return leftChild;
    }
    node *rightChild = root->right;
    node *left_lastChild = findLast(root->left);
    left_lastChild->right = rightChild;
    node *newRoots = root->left;
    delete (root);
    return newRoots;
}
// this computes everything..
node *deleteNode(node *root, int key)
{
    if (root == nullptr)
        return NULL;
    if (root->data == key)
        return help_delete(root); // here it will provide the node after deleting
    if (key < root->data)
    {
        root->left = deleteNode(root->left, key);
    }
    else
    {
        root->right = deleteNode(root->right, key);
    }

    return root; // the stored head;
}
int main()
{
    int n;
    cin >> n;
    node *root = nullptr;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        root = insert(root, val);
    }
    in_order(root);
    int key;
    cout << "Enter the node that you want to delete: " << endl;
    cin >> key;
    root = deleteNode(root, key);
    cout << "now the in_order travelsal after deleting that node is: " << endl;
    in_order(root);
    return 0;
}