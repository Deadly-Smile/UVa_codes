//----------------------Created by Anik Saha---------------------------//
#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false);    cin.tie(NULL)
#define Ignore cin.ignore()
typedef unsigned char Byte;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> pairs;
typedef std::vector<int> VI;
typedef std::vector<pairs> VII;
//---------------------------Good luck---------------------------------//
template<typename T>
void inputArray(T arr[], int n) {
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

std::vector<int> BFS(const std::vector<int> graph[], int size, int root) {
    std::vector<int> v;
    std::queue<int> que;
    bool isVisited[size+1] = {false};

    // isVisited[root] = true;
    que.push(root);
    // v.push_back(root);

    while(!que.empty()) {
        int x = que.front();
        que.pop();

        for(auto i : graph[x]) {
            if(!isVisited[i]) {
                que.push(i);
                v.push_back(i);
                isVisited[i] = true;
            }
        }
    }
    return v;
}

std::vector<int> getLeftout(const std::vector<int> graph[], int size, int root) {
    int arr[size+1] = {0};
    auto reachableNodes = BFS(graph, size, root);
    for (auto &i : reachableNodes) {
        arr[i] = 1;
    }

    vector<int> leftouts;
    for (int i = 1; i < size+1; i++) {
        if(arr[i] == 0) {
            leftouts.push_back(i);
        }
    }
    return leftouts;
}

int main() {
    FastIO;

    int n{0};
    while(std::cin >> n && n) {
        vector<int> adj[n+1];
        int start{0};
        while(std::cin >> start && start) {
            int conNodes{0};
            while(std::cin >> conNodes && conNodes) {
                adj[start].push_back(conNodes);
            }
        }
        int rootNum{0};
        std::cin >> rootNum;
        int rootList[rootNum];
        inputArray(rootList, rootNum);
        
        for (auto &i : rootList) {
            auto ans = getLeftout(adj, n, i);
            std::cout << ans.size();
            for (auto &j : ans) {
                std::cout << " " << j;
            }
            std::cout << std::endl;
        }
    }
    
    return 0;
}
