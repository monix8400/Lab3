#include "Node.h"

///default constructor
Node::Node()
{
    this->right = nullptr;
    this->left = nullptr;
    this->val = 0;
}

///constructor
Node::Node(int vl)
{
    this->right = nullptr;
    this->left = nullptr;
    this->val = vl;
}

///destructor
Node::~Node()
{
    delete right;
    delete left;
}