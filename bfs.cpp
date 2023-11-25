#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Graph{
    public:
    int noVertex;
    vector<vector<int>> adj;

    Graph(int num){
        noVertex=num;
        adj.resize(num);
    }

    void addEdge(int vertex, int num){
        // adding num to vertex's list
        adj[vertex].push_back(num);
    }

    void bfs(int currVert){
        //create vector of boolean values called visited
        vector<bool> visited;
        //resize to match dimension of the graph
        visited.resize(noVertex, false);
        
        //create a queue list for BFS
        queue<int> bfsQ;
        visited[currVert]=true;
        bfsQ.push(currVert);

        while (!bfsQ.empty()){
            currVert = bfsQ.front();
            cout<< currVert << endl;
            bfsQ.pop();
            for (int adjVert:adj[currVert]){
                if (!visited[adjVert]){
                    visited[adjVert] = true;
                    bfsQ.push(adjVert);
                }
            }
        }


    }
};


int main()
{
    // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.bfs(2);
 
    return 0;
}