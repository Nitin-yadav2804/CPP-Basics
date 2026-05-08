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

// BFS Traversal
void bfs(int source) { // O(V + E)
    vector<bool> visited(v, false);
    queue<int> q;

    q.push(source);
    visited[source] = true;

    while(!q.empty()) {
        int node = q.front();
        cout << node << " ";
        q.pop();

        for(auto nbr : graph[node]) {
            if(!visited[nbr]) {
                q.push(nbr);
                visited[nbr] = true;
            }
        }
    }

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
    bfs(0);

    return 0;
}