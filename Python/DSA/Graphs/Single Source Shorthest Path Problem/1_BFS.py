from collections import defaultdict, deque

class Graph:
    def __init__(self, graph):
        self.graph = graph if graph else defaultdict(list)
    
    def addEdges(self, vertex1, vertex2):
        self.graph[vertex1].append(vertex2)
        self.graph[vertex2].append(vertex1)
    
    def bfs(self, src):
        visited = set()
        q = deque()
        q.append(src)
        visited.add(src)
        while q:
            r = q.popleft()
            print(r)
            for x in self.graph[r]:
                if x not in visited:
                    visited.add(x)
                    q.append(x)

a = graph = {
    'A' : ['B','C'],
    'B': ['D','A'],
    'D':['C','E'],
    'E':['D','C'],
    'C':['A','E']
}
graph = Graph(a)

graph.bfs('A')
