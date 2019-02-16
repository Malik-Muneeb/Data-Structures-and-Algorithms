#ifndef BST_H
#define BST_H

#include<iostream>
using namespace std;

class Node
{
public:
	int key;
	Node* parent;
	Node* right;
	Node* left;
	Node()
	{
		key = 0;
		parent = NULL;
		left = NULL;
		right = NULL;
	}
};

class BST
{
	int noOfNodes;
	int* arr;
	int leaf;
	int* path;
	int* cost;
	int costIndex;
public:
	Node* root;
	BST() 
	{ 
		root = NULL; 
		noOfNodes = 0;
		leaf = 0;
		arr = new int[1000];
		path = new int[1000];
		cost = new int[leaf] {0};
		costIndex = 0;
	}
	void insert(Node* tempRoot, Node* newNode);
	bool search(Node* tempRoot, int key);
	void preOrder(Node* tempRoot);
	void inOrder(Node* tempRoot);
	void postOrder(Node* tempRoot);
	int minimum(Node* tempRoot);
	int maximum(Node* tempRoot);
	Node* findNode(Node* tempRoot, int key);
	int successor(Node* x, int key);
	int predecessor(Node* x, int key);
	bool deleteNode(Node* x, int key);
	int nodeCount() { return noOfNodes; }
	void displayLeaves(Node* tempRoot);
	void fifthMaximum(Node* tempRoot);
	int displayFifthMax() { return arr[noOfNodes - 5]; }
	int height(Node* tempRoot);
	void displayPath(int len);
	void findPath(Node* tempRoot, int len);
	int minimumCost();
};

void BST::insert(Node* tempRoot, Node* newNode)
{
	if (root == NULL)
	{
		root = new Node;
		root->parent = NULL;
		root->key = newNode->key;
		++noOfNodes;
		return;
	}
	else
	{
		if (newNode->key >= tempRoot->key)
		{
			if (tempRoot->right != NULL)
				insert(tempRoot->right, newNode);
			else
			{
				tempRoot->right = newNode;
				newNode->parent = tempRoot;
				++noOfNodes;
				return;
			}
		}
		else
		{
			if (tempRoot->left != NULL)
				insert(tempRoot->left, newNode);
			else
			{
				tempRoot->left = newNode;
				newNode->parent = tempRoot;
				++noOfNodes;
				return;
			}
		}
	}
}

bool BST::search(Node* tempRoot, int key)
{
	if (tempRoot == NULL)
		return false;
	else
	{
		if (key > tempRoot->key)
			return search(tempRoot->right, key);
		else if (key < tempRoot->key)
			return search(tempRoot->left, key);
		else
			return true;
	}
}

void BST::preOrder(Node* tempRoot)
{
	if (tempRoot == NULL)
		return;
	else
	{
		cout << tempRoot->key << ", ";
		preOrder(tempRoot->left);
		preOrder(tempRoot->right);
	}
}

void BST::inOrder(Node* tempRoot)
{
	if (tempRoot == NULL)
		return;
	else
	{
		inOrder(tempRoot->left);
		cout << tempRoot->key << ", ";
		inOrder(tempRoot->right);
	}
}

void BST::postOrder(Node* tempRoot)
{
	if (tempRoot == NULL)
		return;
	else
	{
		postOrder(tempRoot->left);
		postOrder(tempRoot->right);
		cout << tempRoot->key << ", ";
	}
}

int BST::minimum(Node* tempRoot)
{
	if (tempRoot->left == NULL)
		return tempRoot->key;
	else
		minimum(tempRoot->left);
}

int BST::maximum(Node* tempRoot)
{
	if (tempRoot->right == NULL)
		return tempRoot->key;
	else
		maximum(tempRoot->right);
}

Node* BST::findNode(Node* tempRoot, int key)
{
	if (tempRoot == NULL)
		return NULL;
	else
	{
		if (key > tempRoot->key)
			findNode(tempRoot->right, key);
		else if (key < tempRoot->key)
			findNode(tempRoot->left, key);
		else
			return tempRoot;
	}
}

int BST::successor(Node* x, int key)
{
	if (x->right != NULL)
		return minimum(x->right);
	else
	{
		if (x->parent == NULL)
			return 0;
		if (x->key < x->parent->key)
			return x->parent->key;
		else
		{
			x = x->parent;
			while (x->key < key && x->parent != NULL)
				x = x->parent;
			if (x->parent == NULL)
				return key;
			return x->key;
		}
	}
}

int BST::predecessor(Node* x, int key)
{
	if (x->left != NULL)
		return maximum(x->left);
	else
	{
		if (x->parent == NULL)
			return 0;
		if (x->key > x->parent->key)
			return x->parent->key;
		else
		{
			x = x->parent;
			while (x->key > key && x->parent != NULL)
				x = x->parent;
			if (x->parent == NULL)
				return key;
			return x->key;
		}
	}
}

bool BST::deleteNode(Node* x, int key)
{
	if (x == NULL)
		return false;
	if (x->left == NULL && x->right == NULL)
	{
		if (root->key == key)
			root = NULL;
		else if (x->key > x->parent->key)
			x->parent->right = NULL;
		else
			x->parent->left = NULL;
		delete x;
		--noOfNodes;
		return true;
	}
	else if (x->left == NULL || x->right == NULL)
	{
		if (x->left == NULL)
		{
			if (x->parent == NULL)
			{
				root = root->right;
				root->parent = NULL;
			}
			else if (x->parent->left != x->right->parent)
			{
				x->parent->right = x->right;
				x->right->parent = x->parent;
			}
			else
				x->parent->left = x->right;
			delete x;
			--noOfNodes;
			return true;
		}
		else if (x->right == NULL)
		{
			if (x->parent == NULL)
			{
				root = root->left;
				root->parent = NULL;
			}
			else if (x->parent->right != x->left->parent)
			{
				x->parent->left = x->left;
				x->left->parent = x->parent;
			}
			else
				x->parent->right = x->left;
			delete x;
			--noOfNodes;
			return true;
		}
	}
	else
	{
		int sucKey = successor(x, key);
		//successor key
		Node* sucNode = findNode(root, sucKey);	//successor Node
		if (x->parent == NULL)
		{
			root = sucNode;
			if (sucNode->key >= sucNode->parent->key)
			{
				if (sucNode->right != NULL)
					sucNode->parent->right = sucNode->right;
				else if (sucNode->left != NULL)
					sucNode->parent->right = sucNode->left;
				else
					sucNode->parent->right = NULL;
			}
			else
			{
				if (sucNode->right != NULL)
					sucNode->parent->left = sucNode->right;
				else if (sucNode->left != NULL)
					sucNode->parent->left = sucNode->left;
				else
					sucNode->parent->left = NULL;
			}
		}
		else if (x->key >= x->parent->key)
		{
			x->parent->right = sucNode;
			sucNode->parent->right = sucNode->right;
		}
		else
		{
			x->parent->left = sucNode;
			sucNode->parent->left = sucNode->left;
		}
		sucNode->parent = x->parent;
		sucNode->left = x->left;
		x->left->parent = sucNode;
		sucNode->right = x->right;
		x->right->parent = sucNode;
		--noOfNodes;
		return true;
	}
	return false;
}

void BST::displayLeaves(Node* tempRoot)
{
	if (tempRoot == NULL)
		return;
	if (tempRoot->left == NULL && tempRoot->right == NULL)
	{
		leaf++;
		cout << tempRoot->key << ",";
		return;
	}
	displayLeaves(tempRoot->left);
	displayLeaves(tempRoot->right);
}

void BST::fifthMaximum(Node* tempRoot)
{
	static int i = 0;
	if (tempRoot == NULL)
		return;
	else
	{
		fifthMaximum(tempRoot->left);
		arr[i] = tempRoot->key;
		i++;
		fifthMaximum(tempRoot->right);
	}
}

int BST::height(Node* tempRoot)
{
	if (tempRoot == NULL)
		return 0;

	int left = height(tempRoot->left);
	int right = height(tempRoot->right);

	if (left > right)
		return 1 + left;
	else
		return 1 + right;
}

void BST::findPath(Node* tempRoot, int len)
{
	if (tempRoot == NULL)
		return;

	path[len] = tempRoot->key;	
	len++;
	if (tempRoot->left == NULL && tempRoot->right == NULL)
		displayPath(len);
	else
	{
		findPath(tempRoot->left, len);
		findPath(tempRoot->right, len);
	}
}

void BST::displayPath(int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << path[i] << ",";
		cost[costIndex] = cost[costIndex] + path[i];
	}
	cout << "\n";
	costIndex++;
}

int BST::minimumCost()
{
	int min = cost[0];
	for (int i = 1; i < leaf; i++)
	{
		if (min > cost[i])
			min = cost[i];
	}
	return min;
}

#endif // !BST_H
