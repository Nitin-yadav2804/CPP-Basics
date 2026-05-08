#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

vector<list<int> > graph;
int v; // no of vertices
void add_edge(int src, int dest, bool bi_dir = true) {
    graph[src].push_back(dest);
    if(bi_dir) {
        graph[dest].push_back(src);
    }

}

void display() {
    for(int i = 0; i < graph.size(); i++) {
        cout<<i<<" -> ";
        for(auto el : graph[i]) {
            cout<<el<<" , ";
        }
        cout<<"\n";
    }
}

// DFS Traversal
void dfsHelper(int node, vector<bool> &visited) {
    cout << node << " ";
    visited[node] = true;

    for(auto nbr : graph[node]) {
        if(!visited[nbr]) {
            dfsHelper(nbr, visited);
        }
    }
}
void dfs(int source) { // O(V + E)
    vector<bool> visited(v, false);
    dfsHelper(source, visited);
    cout << endl;
}


int main() {

    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;
    while(e--) {
        int s, d;
        cin>>s>>d;
        add_edge(s, d, false);
    }
    dfs(0);

    return 0;
}