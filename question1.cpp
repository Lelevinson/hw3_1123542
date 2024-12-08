// Name: Levinson
// Student ID: 1123542
// Date of Submission: 12/8/2024
#include <iostream>
#include <vector>
#include <algorithm> // For sort function
using namespace std;

vector<vector<int>> createAdjList(int V, vector<vector<int>> &edges)
{
    // Create an adjacency list with V empty lists
    vector<vector<int>> adjList(V);

    // Loop through each edge and add connections
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0];     // First node in the edge
        int v = edges[i][1];     // Second node in the edge
        adjList[u].push_back(v); // Add v to u's list
        adjList[v].push_back(u); // Add u to v's list (undirected graph)
    }

    // Sort the adjacency list for each node
    for (int i = 0; i < V; i++)
    {
        sort(adjList[i].begin(), adjList[i].end());
    }

    return adjList;
}

int main()
{
    int V = 4; // Number of nodes
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 3}, {2, 3}};

    // Get the adjacency list
    vector<vector<int>> adjList = createAdjList(V, edges);

    // Print the adjacency list
    for (int i = 0; i < V; i++)
    {
        cout << i << ": ";
        for (int j = 0; j < adjList[i].size(); j++)
        {
            cout << adjList[i][j] << " "; // Print each neighbor
        }
        cout << endl;
    }

    return 0;
}
