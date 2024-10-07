// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <unordered_map>
#include <algorithm>

struct Node
{
    int x, y;
    int g_cost;
    int h_cost;
    int f_cost() const { return g_cost + h_cost; }

    bool operator>(const Node &other) const
    {
        return f_cost() > other.f_cost();
    }
};

int heuristic(int x1, int y1, int x2, int y2)
{
    return abs(x1 - x2) + abs(y1 - y2);
}

std::vector<Node> a_star(const std::vector<std::vector<int>> &grid, Node start, Node end)
{
    std::priority_queue<Node, std::vector<Node>, std::greater<Node>> open_set;
    std::unordered_map<int, std::unordered_map<int, int>> g_costs;
    std::unordered_map<int, std::unordered_map<int, Node>> came_from;

    open_set.push(start);
    g_costs[start.x][start.y] = 0;

    while (!open_set.empty())
    {
        Node current = open_set.top();
        open_set.pop();

        if (current.x == end.x && current.y == end.y)
        {
            std::vector<Node> path;
            while (came_from.count(current.x) && came_from[current.x].count(current.y))
            {
                path.push_back(current);
                current = came_from[current.x][current.y];
            }
            path.push_back(start);
            std::reverse(path.begin(), path.end());
            return path;
        }

        std::vector<std::pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for (const auto &dir : directions)
        {
            int new_x = current.x + dir.first;
            int new_y = current.y + dir.second;

            if (new_x >= 0 && new_x < grid.size() && new_y >= 0 && new_y < grid[0].size() && grid[new_x][new_y] == 0)
            {
                int tentative_g_cost = current.g_cost + 1;

                if (g_costs[new_x][new_y] == 0 || tentative_g_cost < g_costs[new_x][new_y])
                {
                    g_costs[new_x][new_y] = tentative_g_cost;
                    Node neighbor = {new_x, new_y, tentative_g_cost, heuristic(new_x, new_y, end.x, end.y)};
                    open_set.push(neighbor);
                    came_from[new_x][new_y] = current;
                }
            }
        }
    }

    return {};
}

void print_grid(const std::vector<std::vector<int>> &grid, const std::vector<Node> &path)
{
    for (int i = 0; i < grid.size(); ++i)
    {
        for (int j = 0; j < grid[i].size(); ++j)
        {
            bool is_path = false;
            for (const Node &n : path)
            {
                if (n.x == i && n.y == j)
                {
                    is_path = true;
                    break;
                }
            }
            if (is_path)
            {
                std::cout << "* ";
            }
            else
            {
                std::cout << (grid[i][j] == 1 ? "# " : ". ");
            }
        }
        std::cout << std::endl;
    }
}

int main()
{
    int rows, cols;
    std::cout << "Masukkan jumlah baris (rows): ";
    std::cin >> rows;
    std::cout << "Masukkan jumlah kolom (cols): ";
    std::cin >> cols;

    std::vector<std::vector<int>> grid(rows, std::vector<int>(cols, 0));

    std::cout << "Masukkan posisi obstacle (format: x y), ketik '-1 -1' untuk selesai:" << std::endl;
    while (true)
    {
        int x, y;
        std::cin >> x >> y;
        if (x == -1 && y == -1)
            break;
        if (x >= 0 && x < rows && y >= 0 && y < cols)
        {
            grid[x][y] = 1;
        }
        else
        {
            std::cout << "Posisi tidak valid, coba lagi." << std::endl;
        }
    }

    int start_x, start_y, end_x, end_y;
    std::cout << "Masukkan posisi start (format: x y): ";
    std::cin >> start_x >> start_y;
    std::cout << "Masukkan posisi end (format: x y): ";
    std::cin >> end_x >> end_y;

    Node start = {start_x, start_y, 0, heuristic(start_x, start_y, end_x, end_y)};
    Node end = {end_x, end_y, 0, 0};

    std::vector<Node> path = a_star(grid, start, end);

    if (!path.empty())
    {
        std::cout << "Jalur ditemukan!" << std::endl;
        print_grid(grid, path);
    }
    else
    {
        std::cout << "Tidak ada jalur ditemukan!" << std::endl;
    }

    return 0;
}
