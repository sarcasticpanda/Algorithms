#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();  // Represents infinity

// Function to perform Dijkstra's algorithm
vector<int> dijkstra(int start, const unordered_map<int, vector<pair<int, int>>>& graph, int numNodes) {
    vector<int> distances(numNodes, INF);  // Stores shortest distances to each node, initialized to infinity
    distances[start] = 0;

    // Min-heap priority queue to store (distance, node)
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0, start});  // (distance, node)

    while (!pq.empty()) {
        int currentDistance = pq.top().first;
        int currentNode = pq.top().second;
        pq.pop();

        // If the distance in the queue is not the shortest known, skip it
        if (currentDistance > distances[currentNode])
            continue;

        // Update distances to neighboring nodes
        for (auto& neighbor : graph.at(currentNode)) {
            int nextNode = neighbor.first;
            int weight = neighbor.second;
            int distance = currentDistance + weight;

            // If a shorter path to the neighbor is found
            if (distance < distances[nextNode]) {
                distances[nextNode] = distance;
                pq.push({distance, nextNode});
            }
        }
    }

    return distances;
}

int main() {
    // Define the graph as an adjacency list
    // Each node has a list of (neighbor, weight) pairs
    unordered_map<int, vector<pair<int, int>>> graph;
    graph[0] = {{1, 5}, {2, 1}};
    graph[1] = {{0, 5}, {2, 2}, {3, 1}};
    graph[2] = {{0, 1}, {1, 2}, {3, 4}, {4, 8}};
    graph[3] = {{1, 1}, {2, 4}, {4, 3}};
    graph[4] = {{2, 8}, {3, 3}};

    int numNodes = 5;
    int startNode = 0;

    // Run Dijkstra's algorithm
    vector<int> shortestDistances = dijkstra(startNode, graph, numNodes);

    // Output the shortest distances from the start node
    cout << "Shortest distances from node " << startNode << ":\n";
    for (int i = 0; i < numNodes; ++i) {
        if (shortestDistances[i] == INF) {
            cout << "Distance to node " << i << ": INF" << endl;
        } else {
            cout << "Distance to node " << i << ": " << shortestDistances[i] << endl;
        }
    }

    return 0;
}
