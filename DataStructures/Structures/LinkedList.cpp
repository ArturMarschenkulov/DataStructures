#include "LinkedList.h"

SinglyLinkedList::Node::Node()
	: m_next(nullptr), m_data(0) {}

SinglyLinkedList::Node::Node(int data)
	: m_next(nullptr), m_data(data) {}


SinglyLinkedList::SinglyLinkedList()
	: m_head(nullptr)
	, m_tail(nullptr)
	, m_size(0) {}
void SinglyLinkedList::push_front(int data) {
	Node* node = new Node(data);

	if ( m_tail == nullptr ) {
		m_tail = node;
	}

	node->m_next = m_head;
	m_head = node;


	m_size++;
}
void SinglyLinkedList::push_back(int data) {
	Node* node = new Node(data);
	if ( m_tail == nullptr ) {
		m_tail = node;
		m_head = node;
	}
	m_tail->m_next = node;
	m_tail = node;


	m_size++;
}
void SinglyLinkedList::push_at(int pos, int data) {
	Node* node = new Node(data);

	Node* prev = new Node;
	Node* curr = new Node;

	curr = m_head;
	for ( int i = 1; i < pos; i++ ) {
		prev = curr;
		curr = curr->m_next;
	}
	prev->m_next = node;
	node->m_next = curr;

	m_size++;
}
void SinglyLinkedList::pop_front() {
	Node* temp = new Node;

	temp = m_head;
	m_head = m_head->m_next;
	delete temp;

	m_size--;
}
void SinglyLinkedList::pop_back() {
	Node* curr = new Node;
	Node* prev = new Node;

	curr = m_head;

	while ( curr->m_next != nullptr ) {
		prev = curr;
		curr = curr->m_next;
	}
	m_tail = prev;
	prev->m_next = nullptr;
	delete curr;
	m_size--;
}