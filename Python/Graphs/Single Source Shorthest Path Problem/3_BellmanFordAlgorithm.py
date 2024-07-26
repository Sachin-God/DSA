class Graph:
    def __init__(self, vertices):
        self.V = vertices
        self.graph = []
        self.nodes = []

    def addEdge(self, source, destination, weight):
        self.graph.append([source, destination, weight])
    
    def addNode(self, node):
        self.nodes.append(node)
    
    def printSol(self, dict):
        print('Vertex distance from source is : ')
        for key, val in dict.items():
            print(key, " : ", val)
    
    def bellmanFord(self, src):
        dist = {i : float('inf') for i in self.nodes}
        dist[src] = 0
        for _ in range(self.V - 1):
            for s,d,w in self.graph:
                if dist[s] != float('inf') and dist[d] > dist[s] + w:
                    dist[d] = dist[s] + w

        for s,d,w in self.graph:
            if dist[s] != float('inf') and dist[d] > dist[s] + w:
                print('Neg Cycle')
                return
        
        self.printSol(dist)

graph = Graph(4)
graph.addEdge(0,1,3)
graph.addEdge(1,2,1)
graph.addEdge(1,3,4)
graph.addEdge(2,3,1)
for i in range(4):
    graph.addNode(i)

graph.bellmanFord(0)
        