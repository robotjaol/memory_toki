// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
#include <limits>

const int INF = std::numeric_limits<int>::max();

struct Edge
{
    int to;
    int weight;
};

void dijkstra(int start, const std::vector<std::vector<Edge>> &graph, std::vector<int> &distances)
{
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<>> minHeap;
    distances[start] = 0;
    minHeap.push({0, start});

    while (!minHeap.empty())
    {
        int currentDistance = minHeap.top().first;
        int currentNode = minHeap.top().second;
        minHeap.pop();

        if (currentDistance > distances[currentNode])
        {
            continue;
        }

        for (const Edge &edge : graph[currentNode])
        {
            int newDistance = currentDistance + edge.weight;

            if (newDistance < distances[edge.to])
            {
                distances[edge.to] = newDistance;
                minHeap.push({newDistance, edge.to});
            }
        }
    }
}

int main()
{
    int n, e;
    std::cout << "Masukkan jumlah node dan edge: ";
    std::cin >> n >> e;

    std::vector<std::vector<Edge>> graph(n);
    std::cout << "Masukkan edges (dari, ke, bobot):\n";
    for (int i = 0; i < e; ++i)
    {
        int from, to, weight;
        std::cin >> from >> to >> weight;
        graph[from].push_back({to, weight});
        graph[to].push_back({from, weight}); // Untuk graf tidak terarah
    }

    int start;
    std::cout << "Masukkan node awal: ";
    std::cin >> start;

    std::vector<int> distances(n, INF);
    dijkstra(start, graph, distances);

    std::cout << "Jarak terpendek dari node " << start << ":\n";
    for (int i = 0; i < n; ++i)
    {
        if (distances[i] == INF)
        {
            std::cout << "Node " << i << ": Tak Terjangkau\n";
        }
        else
        {
            std::cout << "Node " << i << ": " << distances[i] << "\n";
        }
    }

    return 0;
}
