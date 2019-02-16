//#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
//#include<iostream>
//#include<hash_map>
//#include<string>
//using namespace std;
//
//void input(hash_multimap<string, string> &map);
//string Hash(string word);
//void search(hash_multimap<string, string> &map);
//void displayWords(hash_multimap<string, string> &map);
//string seprate(string);
//void displayWordsPatterns(hash_multimap<string, string> &map);
//void displaySameType(hash_multimap<string, string> &map);
//bool compareType(string type, string str);
//void displayWordsIndex(hash_multimap<string, string> &map);
//void remove(hash_multimap<string, string> &map);
//void reverse(hash_multimap<string, string> map, hash_multimap<string, string> map1);
//
//int main()
//{
//	hash_multimap<string, string> map;
//	hash_multimap<string, string> map1;
//	
//	input(map);
//	search(map);
//	search(map);
//	displayWords(map);
//	displayWordsPatterns(map);
//	displaySameType(map);
//	displayWordsIndex(map);
//	remove(map);
//	reverse(map, map1);
//	input(map1);
//	map.swap(map1);
//	displayWords(map);
//	displayWords(map1);
//	return 0;
//
//}
//
//void reverse(hash_multimap<string, string> map, hash_multimap<string, string> map1)
//{
//	typedef pair<string, string> p;
//	hash_multimap<string, string>::iterator iter;
//	hash_multimap<string, string>::iterator iter1;
//	iter = map.end();
//	--iter;
//	for (int i = 0; i < map.size(); i++)
//	{
//		iter1 = map.begin();
//		map1.insert(p(iter->first, iter->second));
//	}
//}
//
//void remove(hash_multimap<string, string> &map)
//{
//	hash_multimap<string, string>::iterator iter;
//	iter = map.begin();
//	map.erase(iter);
//	iter = map.end();
//	--iter;
//	map.erase(iter);
//	iter = map.begin();
//	for (int i = 0; i < map.size(); i++, iter++)
//	{
//		if (iter->first == "int")
//		{
//			map.erase(iter);
//			iter = map.begin();
//		}
//	}
//	search(map);
//}
//
//void displayWordsIndex(hash_multimap<string, string> &map)
//{
//	cout << "Enter Pattern: ";
//	string pattern;
//	cin >> pattern;
//	pattern = Hash(pattern);
//	hash_multimap<string, string>::iterator iter;
//	iter = map.begin();
//	for (int i = 0; i < map.size(); i++, iter++)
//	{
//		if (iter->first == pattern)
//			cout << "\n" << iter->second << "\n";
//
//	}
//	cout << "\n\n";
//}
//
//void displaySameType(hash_multimap<string, string> &map)
//{
//	cout << "\nVerbs: ";
//	hash_multimap<string, string>::iterator iter;
//	iter = map.begin();
//	for (int i = 0; i < map.size(); i++, iter++)
//	{
//		bool isVerb = compareType("verb", iter->second);
//		if (isVerb)
//			cout << seprate(iter->second) << ',';
//	}
//	cout << "\nNouns: ";
//	iter = map.begin();
//	for (int i = 0; i < map.size(); i++, iter++)
//	{
//		bool isVerb = compareType("noun", iter->second);
//		if (isVerb)
//			cout << seprate(iter->second) << ',';
//	}
//	cout << "\nAdjectives: ";
//	iter = map.begin();
//	for (int i = 0; i < map.size(); i++, iter++)
//	{
//		bool isVerb = compareType("adjective", iter->second);
//		if (isVerb)
//			cout << seprate(iter->second) << ',';
//	}
//	cout << "\n\n";
//}
//
//bool compareType(string type, string str)
//{
//	int i;
//	for (i = 0; str[i] != ':'; i++);
//	i += 2;
//	int j = 0;
//	while (str[i] != NULL)
//	{
//		if (str[i] != type[j])
//			return false;
//		++j; ++i;
//	}
//	return true;
//}
//
//void displayWordsPatterns(hash_multimap<string, string> &map)
//{
//	cout << "Enter Pattern: ";
//	string pattern;
//	cin >> pattern;
//	pattern = Hash(pattern);
//	hash_multimap<string, string>::iterator iter;
//	iter = map.begin();
//	for (int i = 0; i < map.size(); i++, iter++)
//	{
//		if (iter->first == pattern)
//			cout << "\n" << iter->second << "\n";
//
//	}
//	cout << "\n\n";
//}
//
//void displayWords(hash_multimap<string, string> &map)
//{
//	cout << "Words: ";
//	hash_multimap<string, string>::iterator iter;
//	iter = map.begin();
//	for (int i = 0; i < map.size(); i++, iter++)
//		cout << seprate(iter->second) << ',';
//	cout << "\n\n";
//}
//
//string seprate(string str)
//{
//	char subStr[100];
//	int i;
//	for (i = 0; str[i]!=':'; i++)
//		subStr[i] = str[i];
//	subStr[i] = NULL;
//	return subStr;
//
//}
// 
//void search(hash_multimap<string, string> &map)
//{
//	string word;
//	cout << "Enter Word to search: ";
//	cin >> word;
//	string key = Hash(word);
//	hash_multimap<string, string>::iterator iter;
//	iter = map.begin();
//	for (int i = 0; i < map.size(); i++, ++iter)
//	{
//		if (key == iter->first)
//		{
//			cout << "\nWord : type ====> " << iter->second << endl;
//			return;
//		}
//	}
//	cout << "\nIt does not found in record.";
//	cout << "\nEnter its type to store this word : ";
//	string type;
//	cin >> type;
//	typedef pair<string, string> p;
//	map.insert(p(key, word + ":" + type));
//}
//
//void input(hash_multimap<string, string> &map)
//{
//	typedef pair<string, string> p;
//	string word, type;
//	int num;
//	cout << "How many words you want to enter: ";
//	cin >> num;
//	for (int i = 0; i < num; i++)
//	{
//		cout << "Enter word: ";
//		cin >> word;
//		cout << "Enter Type: ";
//		cin >> type;
//		map.insert(p(Hash(word), word + " : " + type));
//	}
//}
//
//string Hash(string word)
//{
//	if (word.length() < 3)
//		return word;
//	string key = word.substr(0, 3);
//	for (int i = 0; i < 3; i++)
//	{
//		if(key[i]>='A' && key[i]<='Z')
//			key[i] = key[i] + 32;
//	}
//	return key;
//}