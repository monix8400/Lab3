#pragma once
#include "Node.h"
#include <string>
using std::string;

class Tree
{
private:
    Node* root;

public:
    Tree();
    Tree(int v);
    ~Tree();
    void insert(int v, Node* node);
    void insert(int v);
    Node* remove(int v, Node* node);
    void remove(int v);
    string inorder(Node* node);
    string inorder();
    string preorder(Node* node);
    string preorder();
    string postorder(Node* node);
    string postorder();
    Node* min_node(Node* node);
    int countNodes(Node* node);
    int countNodes();
    int countEdges(Node* node);
    int countEdges();
    int countLeafs(Node* node);
    int countLeafs();
    int height(Node* node);
    int height();
};
