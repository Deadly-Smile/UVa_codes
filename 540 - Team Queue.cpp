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


int main() {
    FastIO;

    int test{1},groups{0};
    while(std::cin >> groups && groups) {
        std::map<int, int> teams;
        for (int i = 0; i < groups; i++) {
            int size{0};
            std::cin >> size;

            for (int j = 0; j < size; j++) {
                int temp{0};
                std::cin >> temp;
                teams.insert({temp, i});
            }
        }

        std::cout << "Scenario #" << test++ << std::endl;

        std::list<pair<int, queue<int>>> que;
        string s;
        while(std::cin >> s) {
            if(s[0] == 'S') {
                std::cout << std::endl;
                break;
            }
            if(s[0] == 'E') {   //  Enqueue
                int temp{0},teamOn{0};
                std::cin >> temp;
                teamOn = teams.at(temp);
                bool isOk{false};

                for (auto &i : que) {
                    if(i.first == teamOn) {
                        i.second.push(temp);
                        isOk = true;
                        break;
                    }
                }
                if(!isOk) {
                    std::queue<int> q;
                    q.push(temp);
                    que.push_back({teamOn, q});
                }
            } else {            //  Dequeue
                int temp = que.front().second.front();
                que.front().second.pop();
                if(que.front().second.empty()) {
                    que.pop_front();
                }
                std::cout << temp << std::endl;
            }
        }
    }

    
    return 0;
}
