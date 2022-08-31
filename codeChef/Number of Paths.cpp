#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

class Graph{
	int V; // number of vertices.
	list<int> *adj;

public:

	// constructor : init the number of vertices.
	Graph(int v){
		V = v;
		adj = new list<int>[V];
	}

	// addEdge : adding the edge to the list.
	void addEdge(int u,int v){
		adj[u].push_back(v);
	}


	// countPath : visiting the paths and return the number of paths.
	int countPath(int s,int d){

		// creating a visited array and init it with false.
		bool *visited = new bool[V];
		memset(visited,false,sizeof(visited));
	
		// init the number of paths by '0'
		int numPaths = 0;

		// calling the function to visit all the paths 
		// passing Start, Destination, Visited Array, Number of paths
		countUntil(s,d,visited,numPaths);

		return numPaths;
	}


	// countUntil : visiting the path between start and end.
	void countUntil(int u,int d,bool visited[],int &numPaths){

		visited[u] = true;

		if(u==d)	
			numPaths++;

		else{
			// iterate thru the all nodes connected to 'u'
			for(auto i = adj[u].begin(); i!=adj[u].end(); i++ ){
				// check if it is visited or not,
				// if not then recurr the function.
				if(!visited[*i])
					countUntil(*i,d,visited,numPaths);
			}
		}

		visited[u] = false;

	}

};

int solve (int d,vector<vector<int>> &a) {
	// calculate the number of vertices.
	int n = a.size();
	set<int> s;
	for(int i=0;i<n;i++){
		s.insert(a[i][0]);
		s.insert(a[i][1]);
	}

	int V = s.size();

	// create the graph and perform operations.

	Graph g(V);

	for(int i=0;i<n;i++){
		g.addEdge(a[i][0],a[i][1]);
	}

	return g.countPath(1,d);

}

int main() {
	fastio();
	int d,n,u,v;
	cin>>d;

	cin>>n;
	vector<vector<int>> a(n);

	for(int i=0;i<n;i++){
		cin>>u>>v;
		a[i] = {u,v};
	}

	int numPaths = solve(d,a);

	cout<<numPaths;

	return 0;


}