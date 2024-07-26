# Adjacency Matrix - it is square Matrix (n X n) or we can say it is a 2D Array

# Adjacency List - Python Dictionary Implementation
# it is a Collection of unordered List used to represent a graph

# BASIC Graph
class BasicGraph:
    def __init__(self, graphDict = None):
        if graphDict is None:
            graphDict = {}
        self.graphDict = graphDict

    def addEdge(self, vertex, edge):
        self.graphDict[vertex].append(edge)    

# Complete Graph
class Graph:
    def __init__(self,graph):
        if graph is None:
            graph = {}
        self.graph = graph
    
    def addVertex(self, vertex):
        if vertex not in self.graph:
            self.graph[vertex] = []
            return True
        return False
    
    def printgraph(self):
        for vertex, edges in self.graph.items():
            print(vertex , " : " , edges)

    def addEdge(self, vertex1, vertex2):
        if vertex1 in self.graph and vertex2 in self.graph:
            self.graph[vertex1].append(vertex2)
            self.graph[vertex2].append(vertex1)
            return True
        return False
    
    def removeEdge(self, vertex1, vertex2):
        if vertex1 in self.graph and vertex2 in self.graph:
            try:
                self.graph[vertex1].remove(vertex2)
                self.graph[vertex2].remove(vertex1)
                return True
            except ValueError:        
                print(ValueError)
        return False
    
    def removeVertex(self,vertex):
        if vertex in self.graph:
            for vertices in self.graph[vertex]:
                self.graph[vertices].remove(vertex)
            del self.graph[vertex]
            return True
        return False
    
    def bfs(self, vertex):
        visited = set()
        visited.add(vertex)
        queue = [vertex]
        while queue:
            curr = queue.pop(0)
            print(curr)
            for vertices in self.graph[curr]:
                if vertices not in visited:
                    visited.add(vertices)
                    queue.append(vertices)
    
    def dfs(self, vertex):
        visited = set()
        stack = [vertex]
        while stack:
            curr = stack.pop()
            if curr is not visited:
                visited.add(curr)
                print(curr)
            for vertices in self.graph[curr]:
                if vertices not in visited:
                    stack.append(vertices)

graph = {
    'A' : ['B','C'],
    'B': ['D','A'],
    'D':['C','E'],
    'E':['D','C'],
    'C':['A','E']
}

new = Graph(graph)
print('BFS ----->')
new.bfs('A')
print('DFS ----->')
new.dfs('A')