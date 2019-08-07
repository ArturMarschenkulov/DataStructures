#include "Tree.h"

BinarySearchTree::Node::Node()
	: m_left(nullptr), m_right(nullptr), m_data(0) {}

BinarySearchTree::Node::Node(int data)
	: m_left(nullptr), m_right(nullptr), m_data(data) {}

BinarySearchTree::BinarySearchTree() 
	: m_head(nullptr)
	, m_size(0) {}

void BinarySearchTree::insert(int data) {
	if ( data <= m_head->m_data ) {

	}
}
