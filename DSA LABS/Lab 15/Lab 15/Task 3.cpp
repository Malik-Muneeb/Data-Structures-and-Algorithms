//#include<iostream>
//#include<queue>
//using namespace std;
//
//#define inf 9999
//
//class Graph
//{
//	int** arr;
//	int** dist;		//contain shortest path
//	int row;
//	int col;
//	bool* visited;
//public:
//	Graph(int n);									// Constructor for graph having N vertices		
//	void addEdge(int u, int v, int cost);			// function to add an edge from U to V with cost C.
//	void showNeighbours(int u);						// display neighbours or adjacent node for U
//	bool isPath(int u, int v);						// return is there exist a path from source to destination.
//	void shortestpath(int u, int v);				// find the shortest path from source to destination.
//	void calcShortestpath();
//};
//
//
//Graph::Graph(int n)
//{
//	row = col = n;
//	arr = new int*[row];
//	for (int i = 0; i < row; i++)
//		arr[i] = new int[col];
//
//	dist = new int*[row];
//	for (int i = 0; i < row; i++)
//		dist[i] = new int[col];
//
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			if (i == j)
//				arr[i][j] = 0;
//			else
//				arr[i][j] = inf;
//		}
//	}
//	visited = new bool[row];
//}
//
//void Graph::addEdge(int u, int v, int cost)
//{
//	if (u<0 || v<0 || u>row || v>col)
//		cout << "\nCan't add edge...Out Of Bound.\n";
//	else
//		arr[u][v] = cost;
//}
//
//void Graph::showNeighbours(int u)
//{
//	if (u<0 || u>row)
//		cout << "\nCan't showNeighbours...Out Of Bound.\n";
//	else
//	{
//		cout << "\nNeighbours: ";
//		bool noNeighbour = true;
//		for (int i = 0; i < col; i++)
//		{
//			if (arr[u][i]>0 && arr[u][i]!=inf)
//			{
//				cout << i << ", ";
//				noNeighbour = false;
//			}
//		}
//		if (noNeighbour)
//			cout << u << " has no Neighbours.";
//		cout << "\n\n";
//	}
//}
//
//bool Graph::isPath(int u, int v)
//{
//	if (u<0 || v<0 || u>row || v>col)
//		cout << "\nCan't check Path...Out Of Bound.\n";
//	else 
//	{
//		if (arr[u][v] > 0 && arr[u][v]!=inf)
//			return true;
//	}
//	return false;
//}
//
//void Graph::calcShortestpath()
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			dist[i][j] = arr[i][j];
//		}
//	}
//
//	for (int k = 0; k < row; k++)
//	{
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < row; j++)
//			{
//				if (dist[i][j] > dist[i][k] + dist[k][j])
//					dist[i][j] = dist[i][k] + dist[k][j];
//			}
//		}
//	}
//}
//
//void Graph::shortestpath(int u,int v)
//{
//	cout << "\nShortest Path from " << u << " to " << v << " is " << dist[u][v] << "\n";
//}
//
//int main()
//{
//	Graph g(5);
//	g.addEdge(0, 1, 15);
//	g.addEdge(0, 2, 5);
//	g.addEdge(1, 2, 10);
//	g.addEdge(2, 3, 5);
//	g.addEdge(2, 4, 10);
//	g.addEdge(3, 4, 10);
//
//	g.showNeighbours(2);
//	if (g.isPath(2, 0))
//		cout << "\nPath exist.\n";
//	else
//		cout << "\nPath does not exist.\n";
//
//	g.calcShortestpath();
//	g.shortestpath(0, 4);
//	g.shortestpath(0, 3);
//	g.shortestpath(1, 3);
//	g.shortestpath(1, 4);
//	return 0;
//}