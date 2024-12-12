# Data Structure HW 3
### by Levinson_1123542
---
### Question 1
<br>
Problem Statement:
Given an undirected graph with V nodes and E edges, create and return an adjacency list of the graph. 0-based indexing is followed everywhere.
<br>
Input:
<br>
V = 4, E = 4
edges = {{0, 1}, {0, 2}, {1, 3}, {2, 3}}
<br>
![5c5cf82d-6510-48e7-834e-311f933ce758_1685086928](https://github.com/user-attachments/assets/63f9a282-2ad9-4272-8cd8-b7076aba3f5f)
<br>
Output:
0: 1 2 
<br>
1: 0 3
<br>
2: 0 3
<br>
3: 1 2
<br>
Explanation:
<br>
Node 0 is connected to 1 and 2.
<br>
Node 1 is connected to 0 and 3.
<br>
Node 2 is connected to 0 and 3.
<br>
Node 3 is connected to 1 and 2.
<br>

---
### Question 2
<br>
Problem Statement:
Given a connected undirected graph represented by an adjacency list adj, which is a vector of vectors where each adj[i] represents the list of vertices connected to vertex i. Perform a Breadth First Traversal (BFS) starting from vertex 0, visiting vertices from left to right according to the adjacency list, and return a list containing the BFS traversal of the graph.
Note: Do traverse in the same order as they are in the adjacency list.
<br>
Input:
<br>
adj = {
<br>
    {1, 3},       // Neighbors of node 0
    <br>
    {0, 2, 4},    // Neighbors of node 1
    <br>
    {1, 5},       // Neighbors of node 2
    <br>
    {0},          // Neighbors of node 3
    <br>
    {1, 5},       // Neighbors of node 4
    <br>
    {2, 4}        // Neighbors of node 5
    <br>
};
<br>
![image](https://github.com/user-attachments/assets/dd252563-24f7-4c88-b42e-718f774cfe03)
<br>
Output:
<br>
0 1 3 2 4 5
<br>
Explanation: 
<br>
Starting from 0, the BFS traversal will follow these steps: 
<br>
Visit 0 → Output: 0, 1, 3
<br>
Visit 1  → Output: 0, 1, 3, 2, 4
<br>
Visit 3  → Output: 0, 1, 3, 2, 4
<br>
Visit 2  → Output: 0, 1, 3, 2, 4, 5
<br>
Visit 4  → Final Output: 0, 1, 3, 2, 4, 5
<br>
Visit 5  → Final Output: 0, 1, 3, 2, 4, 5
<br>

---
### Question 3
<br>
Given a connected undirected graph represented by an adjacency list adj, which is a vector of vectors where each adj[i] represents the list of vertices connected to vertex i. Perform a Depth First Traversal (DFS) starting from vertex 0, visiting vertices from left to right as per the adjacency list, and return a list containing the DFS traversal of the graph.
Note: Do traverse in the same order as they are in the adjacency list.
<br>
Input:
<br>
adj = {
<br>
        {1, 3},    // Neighbors of node 0
        <br>
        {0, 2, 4}, // Neighbors of node 1
        <br>
        {1, 5},    // Neighbors of node 2
        <br>
        {0},       // Neighbors of node 3
        <br>
        {1, 5},    // Neighbors of node 4
        <br>
        {2, 4}     // Neighbors of node 5
        <br>
    };
<br>
![image](https://github.com/user-attachments/assets/3dc221e1-9776-431e-a309-c2ad75d01943)
<br>
Output:
<br>
DFS Traversal: 0 1 2 5 4 3 
<br>
Explanation:
<br>
Start from 0 → Visit 0 → Output: 0
<br>
Visit 1 → Output: 0, 1
<br>
Visit 2 → Output: 0, 1, 2
<br>
Visit 5 → Output: 0, 1, 2, 5
<br>
Backtrack to 1 → Visit 4 → Output: 0, 1, 2, 5, 4
<br>
Backtrack to 0 → Visit 3 → Output: 0, 1, 2, 5, 4, 3
<br>

---
### Question 4
<br>
Given a weighted, undirected, and connected graph with V vertices and E edges, your task is to find the sum of the weights of the edges in the Minimum Spanning Tree (MST) of the graph. The graph is represented by an adjacency list, where each element adj[i] is a vector containing vector of integers. Each vector represents an edge, with the first integer denoting the endpoint of the edge and the second integer denoting the weight of the edge.
<br>
Input:
<br>
V = 4, E = 5
<br>
0 1 10
<br>
0 2 5
<br>
1 2 2
<br>
1 3 1
<br>
2 3 3
<br>
![image](https://github.com/user-attachments/assets/8eba3a4a-4476-4fc9-80c9-78356ddeaff0)
<br>
Output:
<br>
8
