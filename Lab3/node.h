#pragma once
class Node
{
    friend class Tree;

private:
    Node* right;
    Node* left;
    int val;
    
    ///default constructor
    Node();

    ///constructor
    Node(int vl);

    ///destructor
    ~Node();
};