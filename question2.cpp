// Name: Levinson
// Student ID: 1123542
// Date of Submission: 12/8/2024
#include <iostream>
#include <vector>
#include <queue> // For using queue in BFS
using namespace std;

vector<int> bfsOfGraph(int V, vector<vector<int>> &adj)
{
    vector<int> bfsResult;          // To store the BFS traversal
    vector<bool> visited(V, false); // To track visited nodes
    queue<int> q;                   // Queue for BFS

    // Start BFS from vertex 0
    visited[0] = true;
    q.push(0);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        bfsResult.push_back(node);

        // Traverse all the neighbors of the current node
        for (int neighbor : adj[node])
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    return bfsResult;
}

int main()
{
    // Example adjacency list
    vector<vector<int>> adj = {
        {1, 3},    // Neighbors of node 0
        {0, 2, 4}, // Neighbors of node 1
        {1, 5},    // Neighbors of node 2
        {0},       // Neighbors of node 3
        {1, 5},    // Neighbors of node 4
        {2, 4}     // Neighbors of node 5
    };

    // Perform BFS
    vector<int> bfsTraversal = bfsOfGraph(6, adj);

    // Output the BFS traversal
    for (int node : bfsTraversal)
    {
        cout << node << " ";
    }

    return 0;
}
