//----------------------Created by Anik Saha---------------------------//
#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false);    cin.tie(NULL)
#define Ignore cin.ignore()
#define PF push_front
#define PB push_back
#define MP make_pair
typedef unsigned char Byte;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> pairs;
//---------------------------Good luck---------------------------------//
const double C = 12.01;
const double H = 1.008;
const double O = 16.00;
const double N = 14.01;

int main() {
    FastIO;

    int test{0};   std::cin >> test;
    while(test--) {
        string s;   Ignore;
        std::cin >> s;
        int arr[4] = {0};
        int n{(int)s.length()};

        for (int i = 0; i < n; i++) {
            if (s[i] == 'C') {
                if(i+1 == n)
                    arr[0]++;
                else if(!(s[i+1] >= '0' && s[i+1] <= '9'))
                    arr[0]++;
            } else if (s[i] == 'H') {
                if(i+1 == n)
                    arr[1]++;
                else if(!(s[i+1] >= '0' && s[i+1] <= '9'))
                    arr[1]++;
            } else if (s[i] == 'O') {
                if(i+1 == n)
                    arr[2]++;
                else if(!(s[i+1] >= '0' && s[i+1] <= '9'))
                    arr[2]++;
            } else if (s[i] == 'N') {
                if(i+1 == n)
                    arr[3]++;
                else if(!(s[i+1] >= '0' && s[i+1] <= '9'))
                    arr[3]++;
            } else if (s[i] >= '0' && s[i] <= '9') {
                int index{5}, num{0};

                if(s[i-1] == 'C')   index = 0;
                else if(s[i-1] == 'H')  index = 1;
                else if(s[i-1] == 'O')  index = 2;
                else if(s[i-1] == 'N')  index = 3;

                for (int j = i; j < n; j++,i++) {
                    if(!(s[j] >= '0' && s[j] <= '9')) {
                        break;
                    } else {
                        num *= 10;
                        num += s[j] - '0';
                    }
                }   i--;
                arr[index] += num;
            } else {
                std::cout << "Invalid input" << std::endl;
            }
        }
        double ans = C * arr[0] + H * arr[1] + O * arr[2] + N * arr[3];
        printf("%.3lf\n", ans);
    }
    
    return 0;
}
