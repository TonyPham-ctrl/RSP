//implementing dfs

#include <iostream>
#include<vector>
using namespace std;
class Graph{
    public:
    vector<vector<int>> adjList;
    bool *visited;
    int numVert;

    Graph(int num){
        numVert = num;
        adjList.resize(num);
        visited = new bool[num];
    }

    void addEdge(int from, int to){
        adjList[from].push_back(to);
        adjList[to].push_back(from);
    }

    void dfs(int currVert){
        visited[currVert]=true;
        vector<int>adjVert = adjList[currVert];
        cout << currVert;
        vector<int>::iterator iter;
        for (iter=adjVert.begin(); iter<adjVert.end();iter++){
            if(!visited[*iter]){
                dfs(*iter);
            }
        }
    }
};

int main() {
  Graph g(6);
  g.addEdge(1, 2);
  g.addEdge(1, 3);
  g.addEdge(2, 4);
  g.addEdge(2, 5);
  g.addEdge(1,5);

  g.dfs(1);

  return 0;
}