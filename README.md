# Data Structure HW 3
### by Levinson_1123542
---
### Question 1
<br>
Problem Statement:
Given an undirected graph with V nodes and E edges, create and return an adjacency list of the graph. 0-based indexing is followed everywhere.
<br>
Input:
V = 4, E = 4
edges = {{0, 1}, {0, 2}, {1, 3}, {2, 3}}
<br>
Output:
0: 1 2 
1: 0 3
2: 0 3
3: 1 2
<br>
Explanation:
Node 0 is connected to 1 and 2.
Node 1 is connected to 0 and 3.
Node 2 is connected to 0 and 3.
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
adj = [[2,3,1], [0], [0,4], [0], [2]]
<br>
Output:
<br>
[0, 2, 3, 1, 4]
<br>
Explanation: 
Starting from 0, the BFS traversal will follow these steps: 
Visit 0 → Output: 0 
Visit 2 (first neighbor of 0) → Output: 0, 2 
Visit 3 (next neighbor of 0) → Output: 0, 2, 3 
Visit 1 (next neighbor of 0) → Output: 0, 2, 3, 
Visit 4 (neighbor of 2) → Final Output: 0, 2, 3, 1, 4
<br>

---
### Question 3
<br>
Given a connected undirected graph represented by an adjacency list adj, which is a vector of vectors where each adj[i] represents the list of vertices connected to vertex i. Perform a Depth First Traversal (DFS) starting from vertex 0, visiting vertices from left to right as per the adjacency list, and return a list containing the DFS traversal of the graph.
Note: Do traverse in the same order as they are in the adjacency list.
<br>
Input:
adj = [[1, 2], [0, 2], [0, 1, 3, 4], [2], [2]]
<br>
Output:
[0, 1, 2, 3, 4]
<br>
Explanation: 
Starting from 0, the DFS traversal proceeds as follows: 
Visit 0 → Output: 0 
Visit 1 (the first neighbor of 0) → Output: 0, 1 
Visit 2 (the first neighbor of 1) → Output: 0, 1, 2 
Visit 3 (the first neighbor of 2) → Output: 0, 1, 2, 3 
Backtrack to 2 and visit 4 → Final Output: 0, 1, 2, 3, 4
<br>

---
### Question 4
<br>
Given a weighted, undirected, and connected graph with V vertices and E edges, your task is to find the sum of the weights of the edges in the Minimum Spanning Tree (MST) of the graph. The graph is represented by an adjacency list, where each element adj[i] is a vector containing vector of integers. Each vector represents an edge, with the first integer denoting the endpoint of the edge and the second integer denoting the weight of the edge.
<br>
Input:
V = 3, E = 3
<br>
0 1 5
<br>
1 2 3
<br>
0 2 1
<br>
Output:
4
<br>
Explanation:
The Spanning Tree resulting in a weight of 4 is shown above.
