#include "Tree.h"
#include "node.h"
#include "Lab3_test.h"
using std::cout;
using std::endl;

int main()
{
	Tree tree(40);
	tree.insert(2);
	tree.insert(70);
	tree.insert(7);
	tree.insert(700);
	tree.insert(-1);
	tree.insert(5);
	tree.insert(200);
	cout << "Inorder: " << endl;
	cout << tree.inorder() << endl;
	cout << "Postorder: " << endl;
	cout << tree.postorder() << endl;
	cout << "Preorder: " << endl;
	cout << tree.preorder() << endl;
}