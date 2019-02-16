//#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
//#include<map>
//#include<hash_map>
//#include<fstream>
//#include"BST.h"
//
//int main()
//{
//	map<string, int> words;
//	ifstream inFile;
//	inFile.open("search-history.txt");
//	if (!inFile)
//		cout << "\nError Opening File :( \n";
//	string name;
//	while (!inFile.eof())
//	{
//		inFile >> name;
//		++words[name];
//	}
//	inFile.close();
//	multimap<int,string> sortedWords;
//	typedef pair<int, string> p;
//
//	for (auto iter = words.begin(); iter != words.end(); ++iter)
//	{
//		sortedWords.insert(p(iter->second, iter->first));
//	}
//	for (auto it = sortedWords.begin(); it != sortedWords.end();++it)
//	{
//		cout << it->first << ':' << it->second << endl;
//	}
//	
//	string q, urls;
//	typedef pair<string, string> p1;
//	multimap<string, string> results;
//	multimap<string, string>::iterator iter;
//	inFile.open("search-results.txt");
//
//	while (!inFile.eof())
//	{
//		getline(inFile, q, ':');
//		getline(inFile, urls);
//		results.insert(p1(q, urls));
//	}
//
//	
//	BST tree;
//	auto iter = sortedWords.end();
//	auto iter1 = results.begin();
//	--iter;
//	for (int i = 0; i < 10000; i++,--iter)
//	{
//		Node* newNode = new Node;
//		newNode->key = iter->second;
//		iter1 =results.find(iter->second);
//		if (i > 1000)
//		{
//
//		}
//		newNode->url = iter1->second;
//		tree.insert(tree.root, newNode);
//	}
//	return 0;
//}
