What is Dijkstra Algorithm ?
It is an algorithm, which is used to find the shortest path from a source node to multiple desitnation nodes, 
in a graph.

In dijkstra algo, the main data structure that is used is priority queue

Algo: 
Insert every node in a list, and assign the distance of that node from the source node to be INF

```
const int INF = 1e9;
vector<int> distFromSourceNode(N, INF);
```

