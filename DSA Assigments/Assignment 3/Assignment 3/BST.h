#ifndef BST_H
#define BST_H

#include<iostream>
#include<string>
using namespace std;

class Node
{
public:
	string key;
	string url;
	Node* parent;
	Node* right;
	Node* left;
	Node()
	{
		key = "";
		url = "";
		parent = NULL;
		left = NULL;
		right = NULL;
	}
};

class BST
{
public:
	Node* root;
	BST() {root = NULL;}
	void insert(Node* tempRoot, Node* newNode);
	Node* search(Node* tempRoot, string key);
	void inOrder(Node* tempRoot);
};

void BST::insert(Node* tempRoot, Node* newNode)
{
	if (root == NULL)
	{
		root = new Node;
		root = newNode;
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
				return;
			}
		}
	}
}

Node* BST::search(Node* tempRoot, string key)
{
	if(tempRoot==NULL)
		return tempRoot;
	else if (key > tempRoot->key)
		return search(tempRoot->right, key);
	else if (key < tempRoot->key)
		return search(tempRoot->left, key);
	else
		return tempRoot;
}

void BST::inOrder(Node* tempRoot)
{
	if (tempRoot == NULL)
		return;
	else
	{
		inOrder(tempRoot->left);
		cout << tempRoot->key << ": ";
		cout << tempRoot->url << "\n";
		inOrder(tempRoot->right);
	}
}

#endif // !BST_H