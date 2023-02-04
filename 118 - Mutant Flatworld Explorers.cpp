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
int X = 0, Y = 0;
std::set<pairs> scentList;

int getDirectionValue(char direction) {
    if(direction == 'N') {
        return 0;
    } else if(direction == 'E') {
        return 1;
    } else if(direction == 'S') {
        return 2;
    } else {
        return 3;
    }
}

int getDirectionChar(int direction) {
    if(direction%4 == 0) {
        return 'N';
    } else if(direction%4 == 1) {
        return 'E';
    } else if(direction%4 == 2) {
        return 'S';
    } else {
        return 'W';
    }
}

bool isInsideWorld(pairs coOrdinate) {
    if(coOrdinate.first > X || coOrdinate.first < 0 || coOrdinate.second > Y || coOrdinate.second < 0) {
        return false;
    }
    return true;
}

pair<pairs, pair<char, bool>> getLocation(pairs coOrdinate, string s, char direction) {
    int dic = getDirectionValue(direction) + 1000;
    bool isOk{true};
    for (auto &i : s) {
        if(!isOk) break;
        pairs backupCoOrdi = coOrdinate;
        int backupDic = dic;
        if(i == 'R') dic++;
        else if(i == 'L') dic--;
        else {
            if(dic%4 == 0) {
                coOrdinate.second++;
            } else if(dic%4 == 1) {
                coOrdinate.first++;
            } else if(dic%4 == 2) {
                coOrdinate.second--;
            } else {
                coOrdinate.first--;
            }
            if(!isInsideWorld(coOrdinate)) {
                // std::cout << coOrdinate.first << " " << coOrdinate.second << std::endl;
                if(scentList.count(backupCoOrdi)) {
                    // std::cout << "Got warning" << std::endl;
                    coOrdinate = backupCoOrdi;
                    dic = backupDic;
                    // isOk = false;
                } else {
                    coOrdinate = backupCoOrdi;
                    dic = backupDic;
                    scentList.insert(backupCoOrdi);
                    isOk = false;
                }
                // for (auto &j : scentList) {
                //     std::cout << j.first << " " << j.second << std::endl;
                // }
            }
        }
    }
    return {coOrdinate, {getDirectionChar(dic), isOk}};
}

int main() {
    FastIO;

    std::cin >> X >> Y;
    int x{0},y{0};
    while(std::cin >> x >> y) {
        Ignore;
        char c;
        std::cin >> c;

        Ignore;
        string s;
        std::cin >> s;
        auto ans = getLocation({x,y}, s, c);
        std::cout << ans.first.first << " " << ans.first.second << " " << ans.second.first;
        if(ans.second.second) {
            std::cout << std::endl;
        } else {
            std::cout << " LOST" << std::endl;
        }
    }
    
    return 0;
}