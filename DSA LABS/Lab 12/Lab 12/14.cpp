//#include<iostream>
//#include<string>
//using namespace std;
//
//class Node
//{
//public:
//	string key;
//	Node* parent;
//	Node* right;
//	Node* left;
//	Node()
//	{
//		key = "";
//		parent = NULL;
//		left = NULL;
//		right = NULL;
//	}
//};
//
//class BST
//{
//public:
//	Node* root;
//	BST() { root = NULL; }
//	void insert(Node* tempRoot, Node* newNode);
//	void inOrder(Node* tempRoot);
//};
//
//void BST::insert(Node* tempRoot, Node* newNode)
//{
//	if (root == NULL)
//	{
//		root = new Node;
//		root = newNode;
//		return;
//	}
//	else
//	{
//		if (newNode->key >= tempRoot->key)
//		{
//			if (tempRoot->right != NULL)
//				insert(tempRoot->right, newNode);
//			else
//			{
//				tempRoot->right = newNode;
//				newNode->parent = tempRoot;
//				return;
//			}
//		}
//		else
//		{
//			if (tempRoot->left != NULL)
//				insert(tempRoot->left, newNode);
//			else
//			{
//				tempRoot->left = newNode;
//				newNode->parent = tempRoot;
//				return;
//			}
//		}
//	}
//}
//
//void BST::inOrder(Node* tempRoot)
//{
//	if (tempRoot == NULL)
//		return;
//	else
//	{
//		inOrder(tempRoot->left);
//		cout << tempRoot->key << ", ";
//		inOrder(tempRoot->right);
//	}
//}
//
//
//int main()
//{
//	BST tree1;
//	string months[12] = { "Jan","Feb","Mar","Apr","May","June","July","Aug","Sep","Oct","Nov","Dec" };
//	for (int i = 0; i < 12; i++)
//	{
//		Node* newNode = new Node;
//		newNode->key = months[i];
//		tree1.insert(tree1.root, newNode);
//	}
//	cout << "\nInOrder\n";
//	tree1.inOrder(tree1.root);
//	return 0;
//}