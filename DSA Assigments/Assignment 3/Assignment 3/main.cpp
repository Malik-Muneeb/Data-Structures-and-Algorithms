#include"BST.h"
#include"LinkedList.h"
#include<fstream>

void readSearchFile(LinkedList* list);
void readResultFile(LinkedList* list, BST* tree);
string getUrl(string k);

int main()
{
	LinkedList* list1 = new LinkedList;
	readSearchFile(list1);
	list1->sortList();
	list1->display();
	BST* tree1 = new BST;
	readResultFile(list1, tree1);
	cout << "\n\n\nInorder traversal \n";
	tree1->inOrder(tree1->root);
	char ch = 's';
	while (ch == 's' || ch == 'S')
	{
		cout << "\nPlease Enter Search Query: ";
		string key;
		cin >> key;
		Node* outNode = new Node;
		outNode = tree1->search(tree1->root, key);		//output Node
		cout << "\nOutput: ";
		if (outNode == NULL)
			cout << "\nDoes Not Exist that key in records :(";
		else
		{
			if (outNode->url != "#")
			{
				cout << outNode->url << endl;
				cout << "\nURLs Read From: memory\n";
			}
			else
			{
				string url = getUrl(key);
				cout << "Output: " << url << endl;
				cout << "\nURLs Read From: File\n";
			}
		}
		cout << "\n\nPress S to search again: ";
		cin >> ch;
	}
	return 0;
}


void readSearchFile(LinkedList* list)
{
	ifstream inFile;
	inFile.open("search-history.txt");
	if (!inFile)
		cout << "\nError Opening File :( \n";
	string name;
	while (!inFile.eof())
	{
		inFile >> name;
		if (!(list->countoccurences(name)))
			list->insertListNode(name);
	}
	inFile.close();
}

void readResultFile(LinkedList* list, BST* tree)
{
	string line;
	ListNode* temp = list->getHead();
	int countForBst = 0;    //BST must have 10000 Nodes;
	int count = 0;			//urls of first 1000 in memory and others remain in file
	while (temp != NULL)	//countForBst <= 10000)
	{
		ifstream inFile;
		inFile.open("search-results.txt");
		if (!inFile)
			cout << "\nError Opening File :( \n";
		string name = temp->name;
		bool isFound = false;
		while (!inFile.eof() && !isFound)
		{
			int i = 0;
			getline(inFile, line);
			for (; line[i] != ':'; i++);
			string key, url;
			key = line.substr(0, i);
			if (key == name)
			{
				url = line.substr(i + 1, line.size());
				Node* newNode = new Node;
				newNode->key = key;
				if (count <= 1000)
					newNode->url = url;
				else
					newNode->url = "#";
				tree->insert(tree->root, newNode);
				count++;
				countForBst++;
				isFound = true;
			}
		}
		inFile.close();
		temp = temp->next;
	}

}

string getUrl(string k)
{
	ifstream inFile;
	inFile.open("search-results.txt");
	if (!inFile)
		cout << "\nError Opening File :( \n";
	string line;
	int count = 0;		//it counts first 1000
	while (!inFile.eof())
	{
		int i = 0;
		getline(inFile, line);
		for (; line[i] != ':'; i++);
		string key, url;
		key = line.substr(0, i);
		if (key == k)
		{
			url = line.substr(i + 1, line.size());
			return url;
		}
	}
}