#pragma once
// forward declaration of class Tree
template< typename NODETYPE > class Tree;

// TreeNode class-template definition
template< typename NODETYPE >
class TreeNode
{
	friend class Tree< NODETYPE >;
public:
	// constructor
	TreeNode(const NODETYPE &d)
		: leftPtr(nullptr), // pointer to left subtree
		data(d), // tree node data
		rightPtr(nullptr), // pointer to right substree
		frequency(1)
	{ }
	// return copy of node's data
	NODETYPE getData() const { return data; }
	int getFrequency() {
		return frequency;
	}
private:
	TreeNode * leftPtr; // pointer to left subtree
	NODETYPE data;
	int frequency ;
	TreeNode * rightPtr; // pointer to right subtree
}; // end class TreeNode
