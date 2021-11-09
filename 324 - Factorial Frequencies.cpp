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
const int N = 369;
vector<string> record;
void initialize() {
    record.push_back("1");

    char c{0};
    int rem{0};
    ll carry{0};
    string s{"1"};

    for (int i = 1; i < N; i++) {
        // multiplying number to a string *number
        for(int j = s.length()-1; j >= 0; j--) {
            carry += (s.at(j) - '0') * i;
            rem = carry % 10;
            carry/=10;
            s.at(j) = rem + '0';
        }
        while (carry!=0){
            c=(carry%10)+'0';
            s= c + s;
            carry/=10;
        }

        record.push_back(s);
    }
}

void countDigits(const string &s, int arr[]) {
    for (const auto &i : s) {
        arr[i - '0']++;
    }
}

int main() {
    FastIO;
    initialize();

    int n{0};
    while(std::cin >> n) {
        if(!n)  break;
        int arr[10] = {0};
        countDigits(record[n], arr);

        printf("%d! --\n", n);
        printf("   (0)%5d    (1)%5d    (2)%5d    (3)%5d    (4)%5d\n", 
                arr[0], arr[1], arr[2], arr[3], arr[4]);
        printf("   (5)%5d    (6)%5d    (7)%5d    (8)%5d    (9)%5d\n", 
                arr[5], arr[6], arr[7], arr[8], arr[9]);
    }
    return 0;
}
