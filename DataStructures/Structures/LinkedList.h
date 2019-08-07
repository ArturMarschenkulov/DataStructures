class SinglyLinkedList {
public:
	struct Node {
		Node* m_next;
		int m_data;
		Node();
		Node(int data);
	};
public:
	SinglyLinkedList();

	void push_front(int data);
	void push_back(int data);
	void push_at(int pos, int data);
	void pop_front();
	void pop_back();
	//private:
	Node* m_head;
	Node* m_tail;
	int m_size = 0;
};

