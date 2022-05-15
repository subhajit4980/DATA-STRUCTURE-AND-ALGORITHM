#include <bits/stdc++.h>
using namespace std;

struct Node
{
    /* data */
    int key;
    int lcount;
    struct Node*left;
    struct Node*right;
    Node(int k)
    {
        lcount=0;
        key=k;
        left=right=NULL;
    }
};
Node* insert(Node* root, int x)
{
    if (root == NULL)
        return new Node(x);

    if (x < root->key) {
        root->left = insert(root->left, x);
        root->lcount++;
    }
 
    else if (x > root->key)
        root->right = insert(root->right, x);
    return root;
}
Node* kth_smallest(Node*root,int x)
{
    int count = root->lcount + 1;
    if((count)==x)
    {
        return root;
    }
    else if ((count)>x)
    {
        /* code */
        kth_smallest(root->left,x);
    }
    else
    {
        kth_smallest(root->right,(x-count));
    }
    
}
int main() {
	
	Node* root = NULL;
    int keys[] = { 20, 8, 22, 4, 12, 10, 14 };
 
    for (int x : keys)
        root = insert(root, x);
 
    int k = 4;
    Node* res = kth_smallest(root, k);
    if (res == NULL)
        cout << "There are less than k nodes in the BST";
    else
        cout <<k<<"-th Smallest Element is " << res->key;
    return 0;
	
}