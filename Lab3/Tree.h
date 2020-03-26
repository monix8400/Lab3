#pragma once
#include "Node.h"
#include <string>
using std::string;

class Tree
{
    friend class Node;

private:
    Node* root;

    ///default constructor 
    Tree(); 
    
public:
    ///constructor
    Tree(int v);

    ///destructor
    ~Tree();  

    ///insert a node
    void insert(int v, Node* node); 

    ///insert root
    void insert(int v); 

    ///delete a node
    Node* remove(int v, Node* node); 

    ///delete root
    void remove(int v); 

    ///public string inorder
    string inorder(Node* node); 

    ///public string inorder
    string inorder(); 

    ///public string preorder
    string preorder(Node* node); 

    ///public string preorder
    string preorder();  

    ///public string postorder
    string postorder(Node* node); 

    ///public string postorder
    string postorder(); 

    ///get the first node
    Node* min_node(Node* node); 

    ///count the number of nodes
    int countNodes(Node* node); 

    ///count the number of nodes
    int countNodes(); 

    ///count the number of edges
    int countEdges(Node* node); 

    ///count the number of edges
    int countEdges(); 

    ///count the number of leafs
    int countLeafs(Node* node); 

    ///count the number of leafs
    int countLeafs(); 

    ///count the height
    int height(Node* node); 

    ///count the height
    int height(); 
};
