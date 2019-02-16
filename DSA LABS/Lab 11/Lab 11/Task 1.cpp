//#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
//#include<iostream>
//#include<hash_map>
//#include<string>
//using namespace std;
//
//
//int main()
//{
//	hash_multimap<int, string> map;
//	typedef pair<int, string> p;
//	hash_multimap<int, string>::iterator iter;
//	
//	//1st & 2nd
//	cout << "\nFirst And Second\n";
//	int key;
//	string value;
//	for (int i = 0; i < 4; i++)
//	{
//		cout << "Enter Key: ";
//		cin >> key;
//		cout << "Enter Value: ";
//		cin >> value;
//		map.insert(p(key, value));
//	}
//	iter = map.begin();
//	cout << "\nContents of table\n";
//	for (int i = 0; i < 4; i++)
//	{
//		cout << "\nIndex# " << i + 1 << " :  " << iter->first << "\t" << iter->second << endl;
//		iter++;
//	}
//
//	//3rd
//	cout << "\nThird\n";
//	iter = map.begin();
//	cout << "\nFirst: " << iter->first << "\t" << iter->second << endl;
//	++iter; ++iter;
//	cout << "\nThird: " << iter->first << "\t" << iter->second << endl;
//	iter = map.end();
//	--iter;
//	cout << "\nLast: " << iter->first << "\t" << iter->second << endl;
//	iter = map.begin();
//	cout << "\nContents of table\n";
//	for (int i = 0; i < 4; i++)
//	{
//		cout<<"\nIndex# "<< i+1 <<" :  " << iter->first << "\t" << iter->second << endl;
//		iter++;
//	}
//
//	//4th
//	cout << "\nFourth\n";
//	int i = 1;
//	cout << "\nEnter id: ";
//	cin >> key;
//	iter = map.begin();
//	while (i <= map.size())
//	{
//		if(iter->first==key)
//			cout << iter->first << "\t" << iter->second << endl;
//		iter++;
//		i++;
//	}
//
//	//5th
//	cout << "\nFifth\n";
//	i = 1;
//	cout << "\nEnter Name: ";
//	cin >> value;
//	iter = map.begin();
//	while (i <= map.size())
//	{
//		if (iter->second == value)
//			cout << iter->first << "\t" << iter->second << endl;
//		iter++;
//		i++;
//	}
//
//
//	//6th
//	//cout << "\nSixth\n";
//	//int	i = 1;
//	//cout << "\nEnter Name: ";
//	//cin >> value;
//	//iter = map.begin();
//	//bool isDuplication = false;
//	//int dup = 0;
//	//while (i <= map.size()  && !isDuplication)
//	//{
//	//	if (iter->second == value)
//	//	{
//	//		++dup;
//	//		if (dup > 1)
//	//		{
//	//			cout << "\nDuplication Exists\n";
//	//			cout << iter->first << "\t" << iter->second << endl;
//	//			isDuplication = true;
//	//		}
//	//	}
//	//	iter++;
//	//	i++;
//	//}
//	//if (!isDuplication)
//	//	cout << "\nDuplication of this does not exist.\n";
//
//	////7th
//	//cout << "\nSeventh\n";
//	//hash_multimap<int, string>::iterator iter1;
//	//iter = map.begin();
//	//for (int i = 1; i <= map.size(); i++, ++iter)
//	//{
//	//	iter1 = map.begin();
//	//	for (int k = 1; k <= i; k++)
//	//		++iter1;
//	//	for (int j = i + 1; j < map.size(); j++ , ++iter1)
//	//	{
//	//		if (iter->first == iter1->first || iter->second == iter1->second)
//	//		{
//	//			cout << iter->first << "\t" << iter->second << endl;
//	//		}
//	//	}
//	//}
//
//	////8th
//	//cout << "\nEight\n";
//	//iter = map.begin();
//	//map.erase(iter);
//	//iter = map.begin();
//	//++iter;
//	//++iter;
//	//map.erase(iter);
//	//iter = map.end();
//	//--iter;
//	//map.erase(iter);
//	//iter = map.begin();
//	//cout << "\nContents of table\n";
//	//for (int i = 0; i < map.size(); i++)
//	//{
//	//	cout << "\nIndex# " << i + 1 << " :  " << iter->first << "\t" << iter->second << endl;
//	//	iter++;
//	//}
//
//	////9th
//	//cout << "\nNineth\n";
//	//iter = map.begin();
//	//cout << "\nEnter key: ";
//	//cin >> key;
//	//for (int i = 1; i <= map.size(); i++)
//	//{	
//	//	if (iter->first == key)
//	//	{
//	//		map.erase(iter);
//	//		iter = map.begin();
//	//		i = 1;
//	//	}		
//	//	++iter;
//	//}
//	//iter = map.begin();
//	//cout << "\nContents of table\n";
//	//for (int i = 0; i < map.size(); i++)
//	//{
//	//	cout << "\nIndex# " << i + 1 << " :  " << iter->first << "\t" << iter->second << endl;
//	//	iter++;
//	//}
//
//	////0
//	//cout << "\nZero\n";
//	//cout << "\nSize of hash Table: " << map.size() << endl;
//
//
//	////10
//	//cout << "\nTenth\n";
//	//iter = map.end();
//	//for (int i = 0; i < map.size(); i++)
//	//{
//	//	--iter;
//	//	cout << iter->first << "\t" << iter->second << endl;
//	//}
//
//	////11
//	//cout << "\\nEleventh\n";
//	//hash_multimap<int, string> map1;
//	//map1.insert(p(123, "Alice"));
//
//
//	////12
//	//map.swap(map1);
//	//iter = map.begin();
//	//cout << "\nContents of table 1\n";
//	//for (int i = 0; i < map.size(); i++)
//	//{
//	//	cout << "\nIndex# " << i + 1 << " :  " << iter->first << "\t" << iter->second << endl;
//	//	iter++;
//	//}
//	//iter = map1.begin();
//	//cout << "\nContents of table 2\n";
//	//for (int i = 0; i < map1.size(); i++)
//	//{
//	//	cout << "\nIndex# " << i + 1 << " :  " << iter->first << "\t" << iter->second << endl;
//	//	iter++;
//	//}
//	return 0;
//}