#include <iostream>
#include <algorithm>
#include "Tree.h"
using std::to_string;
using std::max;


///default constructor
Tree::Tree()
{
    root = new Node(0);
}

///constructor
Tree::Tree(int v)
{
    root = new Node(v);
}

///destructor
Tree::~Tree()
{
    delete root;
}

///insert a node
void Tree::insert(int v, Node* tree)
{
    if (v <= tree->val)
    {
        if (tree->left == nullptr)
        {
            tree->left = new Node();
            tree->left->val = v;
            tree->left->right = nullptr;
            tree->left->left = nullptr;

        }
        else
            insert(v, tree->left);

    }
    else
    {
        if (tree->right == nullptr)
        {
            tree->right = new Node();
            tree->right->val = v;
            tree->right->right = nullptr;
            tree->right->left = nullptr;
        }
        else
            insert(v, tree->right);
    }
}

///insert root
void Tree::insert(int v)
{
    insert(v, root);
}

///delete a node
Node* Tree::remove(int v, Node* tree)
{
    if (tree == nullptr)
        return nullptr;
    if (v < tree->val)
    {
        tree->left = remove(v, tree->left);
    }
    else if (v > tree->val)
    {
        tree->right = remove(v, tree->right);
    }
    else
    {
        if (tree->left == nullptr && tree->right == nullptr)
        {
            delete tree;
            tree = nullptr;
        }
        else if (tree->left == nullptr)
        {
            Node* aux;
            aux = tree;
            tree = tree->right;
            delete aux;
        }
        else if (tree->right == nullptr)
        {
            Node* aux;
            aux = tree;
            tree = tree->left;
            delete aux;
        }
        else
        {
            Node* min = min_node(tree->right);
            tree->val = min->val;
            tree->right = remove(min->val, tree->right);
        }
    }
    return tree;
}

///delete root
void Tree::remove(int v)
{
    root = remove(v, root);
}

///public string inorder
string Tree::inorder(Node* n)
{
    if (n == nullptr)
    {
        return "";
    }
    return inorder(n->left) + to_string(n->val) + " " + inorder(n->right);
}

///public string inorder
string Tree::inorder()
{
    return inorder(root);
}


///public string preorder
string Tree::preorder(Node* n)
{
    if (n == nullptr)
    {
        return "";
    }
    return  to_string(n->val) + " " + preorder(n->left) + preorder(n->right);
}

///public string preorder
string Tree::preorder()
{
    return preorder(root);
}

///public string postorder
string Tree::postorder(Node* n)
{
    if (n == nullptr)
    {
        return "";
    }
    return preorder(n->left) + preorder(n->right) + to_string(n->val) + " ";
}

///public string postorder
string Tree::postorder()
{
    return postorder(root);
}

///get the first node
Node* Tree::min_node(Node* node)
{
    if (node == nullptr)
        return nullptr;
    Node* c = node;
    while (c->left != nullptr)
        c = c->left;
    return c;
}

///count the number of nodes
int Tree::countNodes(Node* n)
{
    if (n == nullptr)
        return 0;
    return 1 + countNodes(n->left) + countNodes(n->right);
}

///count the number of nodes
int Tree::countNodes()
{
    return countNodes(root);
}

///count the number of edges
int Tree::countEdges(Node* n)
{
    if (n == nullptr)
        return 0;
    return countNodes(root) - 1;
}

///count the number of edges
int Tree::countEdges()
{
    return countEdges(root);
}

///count the number of leafs
int Tree::countLeafs(Node* node)
{
    if (node == nullptr)
        return 0;
    if (node->left == nullptr && node->right == nullptr)
        return 1;
    return countLeafs(node->left) + countLeafs(node->right);
}

///count the number of leafs
int Tree::countLeafs()
{
    return countLeafs(root);
}

///count the height
int Tree::height(Node* n)
{
    if (n == nullptr)
        return 0;
    return 1 + max(height(n->left), height(n->right));
}

///count the height
int Tree::height()
{
    return height(root);
}