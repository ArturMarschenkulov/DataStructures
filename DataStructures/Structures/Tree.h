class BinarySearchTree {
public:
	struct Node {
		Node* m_left;
		Node* m_right;
		int m_data;
		Node();
		Node(int data);
	};
public:
	BinarySearchTree();
	void insert(int data);
//private:
	Node* m_head;
	int m_size;
};