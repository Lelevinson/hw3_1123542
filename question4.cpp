// Name: Levinson
// Student ID: 1123542
// Date of Submission: 12/8/2024
#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

// Structure to represent an edge
struct Edge
{
    int vertex, weight;
    Edge(int v, int w) : vertex(v), weight(w) {}
};

// Function to perform Prim's Algorithm
int primMST(int V, vector<vector<Edge>> &adj)
{
    // Min-heap priority queue to select the edge with the minimum weight
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    // Initialize all distances to infinity and visited array
    vector<int> minWeight(V, INT_MAX);
    vector<bool> visited(V, false);

    // Start from vertex 0
    minWeight[0] = 0;
    pq.push({0, 0}); // (weight, vertex)

    int mstWeight = 0; // To store the total weight of the MST

    while (!pq.empty())
    {
        int u = pq.top().second; // Get the vertex with the smallest edge weight
        pq.pop();

        // If the vertex is already visited, skip it
        if (visited[u])
            continue;

        // Mark the vertex as visited
        visited[u] = true;
        mstWeight += minWeight[u]; // Add the weight of the selected edge

        // Explore the neighbors of the current vertex
        for (const Edge &edge : adj[u])
        {
            int v = edge.vertex;      // Neighbor vertex
            int weight = edge.weight; // Weight of the edge

            // If the neighbor has not been visited and the edge weight is smaller than the current weight, update
            if (!visited[v] && weight < minWeight[v])
            {
                minWeight[v] = weight;
                pq.push({minWeight[v], v});
            }
        }
    }

    return mstWeight;
}

int main()
{
    // Number of vertices and edges
    int V = 4, E = 5;

    // Adjacency list representation of the graph
    vector<vector<Edge>> adj(V);

    // Adding edges to the graph (undirected graph)
    adj[0].push_back(Edge(1, 10));
    adj[1].push_back(Edge(0, 10));

    adj[0].push_back(Edge(2, 5));
    adj[2].push_back(Edge(0, 5));

    adj[1].push_back(Edge(2, 2));
    adj[2].push_back(Edge(1, 2));

    adj[1].push_back(Edge(3, 1));
    adj[3].push_back(Edge(1, 1));

    adj[2].push_back(Edge(3, 3));
    adj[3].push_back(Edge(2, 3));

    // Call the Prim's MST function
    int result = primMST(V, adj);

    // Output the sum of the weights in the MST
    cout << "Weight of the MST: " << result << endl;

    return 0;
}
