#include <vector>
#include <iostream>
using namespace std;

class Graph{
    public:
    int noVertex;
    vector<int> *adjList;
    bool *visited;

    Graph(int num){
        noVertex=num;
        adjList = new vector<int>[num];
        visited = new bool[num];
    }
    void addEdge(int from, int to){
        adjList[from].push_back(to);
    }

    void dfs(int startNode){
        visited[startNode] = true;
        vector<int> adj = adjList[startNode];
        
        cout << startNode <<endl;

        vector<int>::iterator it;
        for (it = adj.begin(); it<adj.end();it++){
            if (!visited[*it]){
                dfs(*it);
            }
        }
    }
};


int main() {
  Graph g(5);
  g.addEdge(1, 2);
  g.addEdge(1, 3);
  g.addEdge(2, 4);
  g.addEdge(2, 45);
  g.addEdge(1,5);

  g.dfs(1);

  return 0;
}