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
const int N = 6;

int getMinMove (pairs start, pairs end) {
    std::queue<pairs> que;
    vector<vector<bool>> isVisited(N , vector<bool> (N, false));
    vector<vector<int>> level(N , vector<int> (N, -1));

    cout << start.first << " " << start.second << endl;
        cout << end.first << " " << end.second << endl;

    isVisited[start.first][start.second] = true;
    level[start.first][start.second] = 0;
    que.push(start);

    if(start == end) {
        return level[start.first][start.second];
    }

    while(!que.empty()) {
        pairs x = que.front();
        que.pop();

        pairs moves[N];
        moves[0] = {x.first+2, x.second+1};
        moves[1] = {x.first+1, x.second+2};
        moves[2] = {x.first-1, x.second+2};
        moves[3] = {x.first-2, x.second+1};

        moves[4] = {x.first+2, x.second-1};
        moves[5] = {x.first+1, x.second-2};
        moves[6] = {x.first-1, x.second-2};
        moves[7] = {x.first-2, x.second-1};

        for (auto &i : moves) {
            if(i.first >= N || i.first < 0 || i.second >= N || i.second < 0) {
                continue;
            }
            if(!isVisited[i.first][i.second]) {
                que.push(i);
                isVisited[i.first][i.second] = true;
                level[i.first][i.second] = level[x.first][x.second] + 1;
                if(i == end) {
                    return level[i.first][i.second];
                }
            }
        }
    }
    std::cout << "Something" << std::endl;
    return level[end.first][end.second];
}

int main() {
    FastIO;

    string s,t;
    while(cin >> s >> t) {
        pairs from,to;
        from.first = s[0] - 'a';
        from.second = s[1] - '1';
        to.first = t[0] - 'a';
        to.second = t[1] - '1';

        std::cout << "To get from " << s <<" to " << t <<" takes "<< getMinMove(from, to) << " knight moves." << std::endl;
    }

    return 0;
}
