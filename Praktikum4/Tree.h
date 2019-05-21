#pragma once
#include <iostream>
#include <iomanip>
#include <sstream>
#include <new>
#include <string>
#include "TreeNode.h"


using namespace std;

// Tree class-template definition
template< typename NODETYPE > class Tree
{
	public:
		Tree(); // constructor
		~Tree(); // destructor
		Tree(const Tree&) = delete; // no copies of Tree-objects allowed               
		const Tree& operator=(const Tree&) = delete; // no assignment allowed               

		void insertNode(const NODETYPE &);
		std::string preOrderTraversal() const;
		std::string inOrderTraversal() const;
		std::string postOrderTraversal() const;
		TreeNode< NODETYPE > * binaryTreeSearch(const NODETYPE &) const;
		std::string toString() const;
		void deleteNode(const NODETYPE &);
	private:
		TreeNode< NODETYPE > * rootPtr;

		// utility functions
		void insertNodeHelper(TreeNode< NODETYPE > *&, const NODETYPE &);
		void preOrderHelper(TreeNode< NODETYPE > *, std::stringstream &) const;
		void inOrderHelper(TreeNode< NODETYPE > *, std::stringstream &) const;
		void postOrderHelper(TreeNode< NODETYPE > *, std::stringstream &) const;
		TreeNode< NODETYPE > * binarySearchHelper(TreeNode< NODETYPE > *,
			const NODETYPE &) const;
		void toStringHelper(TreeNode< NODETYPE > *, int, std::stringstream &) const;
		bool deleteNodeHelper(TreeNode< NODETYPE > *&, const NODETYPE &);
		void replaceNodeHelper(TreeNode< NODETYPE > *&, TreeNode< NODETYPE > *&);
		void destructorHelper(TreeNode< NODETYPE > *);
	}; // end class Tree
