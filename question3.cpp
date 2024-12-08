// Name: Levinson
// Student ID: 1123542
// Date of Submission: 12/8/2024
#include <iostream>
#include <vector>
using namespace std;

// Function to perform DFS traversal
void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited, vector<int> &result)
{
    visited[node] = true;   // Mark the current node as visited
    result.push_back(node); // Add the node to the DFS result

    // Visit all unvisited neighbors of the current node
    for (int neighbor : adj[node])
    {
        if (!visited[neighbor])
        {
            dfs(neighbor, adj, visited, result); // Recursive DFS call
        }
    }
}

// Main function to return DFS traversal of the graph
vector<int> dfsOfGraph(int V, vector<vector<int>> &adj)
{
    vector<int> result;             // Stores the DFS traversal result
    vector<bool> visited(V, false); // To keep track of visited nodes

    // Start DFS from vertex 0
    dfs(0, adj, visited, result);

    return result;
}

int main()
{
    // Input graph represented as adjacency list
    vector<vector<int>> adj = {
        {1, 3},    // Neighbors of node 0
        {0, 2, 4}, // Neighbors of node 1
        {1, 5},    // Neighbors of node 2
        {0},       // Neighbors of node 3
        {1, 5},    // Neighbors of node 4
        {2, 4}     // Neighbors of node 5
    };
    // Perform DFS traversal
    vector<int> dfsTraversal = dfsOfGraph(6, adj);

    // Output the DFS traversal result
    cout << "DFS Traversal: ";
    for (int node : dfsTraversal)
    {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
