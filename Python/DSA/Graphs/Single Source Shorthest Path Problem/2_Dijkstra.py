import heapq

class Graph:
    def __init__(self):
        self.vertices = {}

    def add_edge(self, from_vertex, to_vertex, weight):
        if from_vertex not in self.vertices:
            self.vertices[from_vertex] = {}
        if to_vertex not in self.vertices:
            self.vertices[to_vertex] = {}
        self.vertices[from_vertex][to_vertex] = weight

    def dijkstra(self, start):
        priority_queue = [(0, start)]
        distances = {vertex: float('infinity') for vertex in self.vertices}
        distances[start] = 0
        visited = set()

        while priority_queue:
            current_distance, current_vertex = heapq.heappop(priority_queue)

            if current_vertex in visited:
                continue

            visited.add(current_vertex)

            for neighbor, weight in self.vertices[current_vertex].items():
                distance = current_distance + weight
                if distance < distances[neighbor]:
                    distances[neighbor] = distance
                    heapq.heappush(priority_queue, (distance, neighbor))

        return distances

# Example usage:
graph = Graph()
graph.add_edge('A', 'B', 1)
graph.add_edge('A', 'C', 4)
graph.add_edge('B', 'C', 2)
graph.add_edge('B', 'D', 5)
graph.add_edge('C', 'D', 1)

start_vertex = 'A'
distances = graph.dijkstra(start_vertex)
print(f"Shortest distances from {start_vertex}: {distances}")
