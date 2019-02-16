#include"BST.h"

int main()
{
	BST tree1;
	
	//1
	cout << "\n\n--------Task 1---------\n\n";
	int key;
	for (int i = 0; i < 8; i++)
	{
		cout << "\nEnter a key to insert: ";
		cin >> key;
		Node* newNode = new Node;
		newNode->key = key;
		tree1.insert(tree1.root, newNode);
	}

	//2
	cout << "\n\n--------Task 2---------\n\n";
	cout << "\nEnter a key to delete: ";
	cin >> key;
	if (tree1.deleteNode(tree1.findNode(tree1.root, key), key))
		cout << "\nDelete Node.\n";
	else
		cout << "\nDoes Not Delete.\n";


	//3
	cout << "\n\n--------Task 3---------\n\n";
	cout << "\n\nInorder Traversal\n";
	tree1.inOrder(tree1.root);

	//4
	cout << "\n\n--------Task 4---------\n\n";
	cout << "\n\nPreOrder traversal\n";
	tree1.preOrder(tree1.root);

	//5
	cout << "\n\n--------Task 5---------\n\n";
	cout << "\n\nPostOrder Travarsal\n";
	tree1.postOrder(tree1.root);

	//6
	cout << "\n\n--------Task 6---------\n\n";
	cout << "\n\nAll Leaves\n";
	tree1.displayLeaves(tree1.root);

	//7
	cout << "\n\n--------Task 7---------\n\n";
	cout << "\n\nPaths\n";
	tree1.findPath(tree1.root, 0);

	//8
	cout << "\n\n--------Task 8---------\n\n";
	cout << "\n\nMinimum Cost\n";
	cout << tree1.minimumCost();

	//9
	cout << "\n\n--------Task 9---------\n\n";
	cout << "\n\nNo. of Nodes: " << tree1.nodeCount() << "\n\n";

	//10
	cout << "\n\n--------Task 10---------\n\n";
	cout << "\n\nHeight: " << tree1.height(tree1.root);

	//11
	cout << "\n\n--------Task 11---------\n\n";
	cout << "\nEnter a key to Search: ";
	cin >> key;
	if (tree1.search(tree1.root, key))
		cout << "\found.\n";
	else
		cout << "\nDoes Not found.\n";

	//00
	cout << "\n\n--------Task 00---------\n\n";
	cout << "\nEnter a key to delete: ";
	cin >> key;
	Node* x = tree1.findNode(tree1.root, key);
	if (tree1.deleteNode(x, key))
		cout << "\nDelete Node.\n";
	else
		cout << "\nDoes Not Delete.\n";

	//12
	cout << "\n\n--------Task 12---------\n\n";
	cout << "\n\nMinimum value is: " << tree1.minimum(tree1.root) << "\n\n";

	//13
	cout << "\n\n--------Task 13---------\n\n";
	tree1.fifthMaximum(tree1.root);
	cout << "\n\nFifth Maximum: " << tree1.displayFifthMax() << "\n\n";
	return 0;
}