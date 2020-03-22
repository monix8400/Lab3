#pragma once
class Node
{
public:
    Node* right;
    Node* left;
    int val;
    Node();
    Node(int vl);
    ~Node();
};