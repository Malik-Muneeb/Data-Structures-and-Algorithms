//#include<iostream>
//#include<queue>
//using namespace std;
//
//class Graph
//{
//	int** arr;
//	int row;
//	int col;
//	bool* visited;
//public:
//	Graph(int n);					 // Constructor for graph having N vertices
//	bool isConnected(int u, int v);	 // return there is an edge from U to V
//	void addEdge(int u, int v);		// function to add an edge from U to V
//	void BFS(int s);				// prints BFS traversal from a given source s
//};
//
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
//}
//
//
//Graph::Graph(int n)
//{
//	row = col = n;
//	arr = new int*[row]();
//	for (int i = 0; i < row; i++)
//		arr[i] = new int[col]();
//	visited = new bool[row];
//}
//
//void Graph::addEdge(int u,int v)
//{
//	if (u<0 || v<0 || u>row || v>col)
//		cout << "\nOut Of Bound.\n";
//	else
//		arr[u][v] = 1;
//		
//}
//
//bool Graph::isConnected(int u, int v)
//{
//	if (u<0 || v<0 || u>row || v>col)
//		cout << "\nOut Of Bound.\n";
//	else
//	{
//		if (arr[u][v] == 1)
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
//		for (int i = 0; i < col; i++)
//		{
//			if (arr[n][i] == 1 && visited[i] != true)
//			{
//				q.push(i);
//				visited[i] = true;
//			}
//		}
//		cout << n << ", ";
//	}
//	cout << endl;
//}
