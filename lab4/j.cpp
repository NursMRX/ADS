#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *left, *right;

    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class BST {
    public:
    Node *root;

    BST() {
        root = NULL;
    }

    // Insert operation - O(log n) average, O(n) worst case
    Node *insert(Node *node, int data) {
        if (node == NULL) {
            node = new Node(data);
            return node;
        }

        if (data <= node->data) 
            node->left = insert(node->left, data);
        else
            node->right = insert(node->right, data);

        return node;
    }#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node *left, *right;
    Node(int x) : val(x), left(NULL), right(NULL) {}
};

Node* build(int a[], int l, int r){
    if(l > r) return NULL;
    int mid = (l + r) / 2;
    Node* node = new Node(a[mid]);
    node->left = build(a, l, mid - 1);
    node->right = build(a, mid + 1, r);
    return node;
}

void print(Node* root){
    if(root == NULL) return;
    cout << root->val << ' ';
    print(root->left);
    print(root->right);
}

int main() {
    
    int n = 1, t, a[33000];
    
    cin >> t;
    
    for(int i = 1; i <= t; i++) n *= 2; n--;
    
    for(int i = 1; i <= n; i++) cin >> a[i];
    
    sort(a + 1, a + n + 1);
    
    print(build(a, 1, n));
    
    return 0;
}