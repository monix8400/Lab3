#include "Lab3_test.h"
#include <cassert>

///test for countNodes
void test_countNodes()
{
	Tree tree(1);
	tree.insert(2);
	tree.insert(3);
	assert(tree.countNodes() == 3);
}

///test for countEdges
void test_countEdges()
{
	Tree tree(1);
	tree.insert(2);
	tree.insert(3);
	assert(tree.countEdges() == 2);
}

///test the number of Leafs
void test_countLeafs()
{
	Tree tree(1);
	tree.insert(2);
	tree.insert(3);
	assert(tree.countNodes() == 3);
}

///test for height
void test_height()
{
	Tree tree(1);
	tree.insert(2);
	tree.insert(3);
	assert(tree.height() == 2);
}