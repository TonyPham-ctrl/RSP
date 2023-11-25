#include <iostream>
#include <vector>

using namespace std;
void addEdge(vector<int> adj[], int vertex, int x)
{
    adj[vertex].push_back(x);
    adj[x].push_back(vertex);
};

void printGraph(vector<int> adj[], int size)
{
    vector<int>::iterator iter;
    for (int i = 0; i < size; i++)
    {
        cout << "Adjacency list of vertex " << i << endl;
        cout << "Head";
        for (iter = adj[i].begin(); iter != adj[i].end(); iter++)
        {
            cout << " -> " << *iter;
        }
        cout << endl;
    }
}
int main()
{
    int size = 5;
    vector<int> adj[size];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    printGraph(adj, size);
    return 0;
}