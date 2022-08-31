// DFS algorithm in C++
#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

class Graph {
  int numVertices;
  list<int> *adjLists;
  bool *visited;

   public:
  Graph(int V);
  void addEdge(int src, int dest);
  void DFS(int vertex,int &maxV);
};

// Initialize graph
Graph::Graph(int vertices) {
  numVertices = vertices;
  adjLists = new list<int>[vertices];
  visited = new bool[vertices];
}

// Add edges
void Graph::addEdge(int src, int dest) {
  adjLists[src].push_back(dest);
  adjLists[dest].push_back(src);
}

// DFS algorithm
void Graph::DFS(int vertex,int &maxV) {
  visited[vertex] = true;
  list<int> adjList = adjLists[vertex];

  maxV = max(maxV,vertex);
  // cout << vertex << " ";

  list<int>::iterator i;
  for (i = adjList.begin(); i != adjList.end(); ++i)
    if (!visited[*i])
      DFS(*i,maxV);
}

int main() {

fastio();
  tc {
    int N, M,maxV=0;
    cin >> N >> M;
    Graph g(N+1);
    
    int x, y;
    
    for (int i = 0; i < M; ++i) {
      cin >> x >> y;
      g.addEdge(x, y);
    }

    g.DFS(1,maxV);


    cout<<N-maxV<<endl; 
  }

  return 0;
}