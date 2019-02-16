//#include<iostream>
//#include"LinkedList.h"
//#include<queue>
//using namespace std;
//
//class Graph
//{
//	LinkedList* list;
//	int size;
//	bool* visited;
//public:
//
//	Graph(int n);							// Constructor for graph having N vertices [5]
//	bool isConnected(int u, int v);			// return there is an edge from U to V [5]
//	void addEdge(int u, int v);				// function to add an edge from U to V [5]
//	void BFS(int s);						// prints BFS traversal from a given source s [10]
//};
//
//int main()
//{
//	Graph g(5);
//	g.addEdge(0, 1);
//	g.addEdge(0, 3);
//	g.addEdge(1, 0);
//	g.addEdge(1, 2);
//	g.addEdge(1, 4);
//	g.addEdge(2, 1);
//	g.addEdge(2, 3);
//	g.addEdge(2, 4);
//	g.addEdge(3, 0);
//	g.addEdge(3, 2);
//	g.addEdge(3, 4);
//	g.BFS(0);
//	return 0;
//
//}
//
//Graph::Graph(int n)
//{
//	size = n;
//	list = new LinkedList[size];
//	visited = new bool[size];
//}
//
//void Graph::addEdge(int u, int v)
//{
//	if (u<0 || v<0 || u>size || v>size)
//		cout << "\nOut Of Bound.\n";
//	else
//	{
//		list[u].insertNode(v);
//	}
//}
//
//bool Graph::isConnected(int u,int v)
//{
//	if (u<0 || v<0 || u>size || v>size)
//		cout << "\nOut Of Bound.\n";
//	else
//	{
//		if (list[u].searchNode(v))
//			return true;
//	}
//	return false;
//}
//
//void Graph::BFS(int s)
//{
//	queue<int> q;
//	q.push(s);
//	visited[s] = true;
//	cout << "Data: ";
//	while (!q.empty())
//	{
//		int n = q.front();
//		q.pop();
//		for (int i = 0; i < size; i++)
//		{
//			if (list[n].searchNode(i) && visited[i] != true)
//			{
//				q.push(i);
//				visited[i] = true;
//			}
//		}
//		cout << n << ", ";
//	}
//	cout << endl;
//}