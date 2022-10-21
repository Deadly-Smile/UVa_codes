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

	string s;
	while(std::cin >> s && s != "#") {
		if(std::next_permutation(s.begin(), s.end())) {
			std::cout << s << std::endl;
		} else {
			std::cout << "No Successor" << std::endl;
		}
	}

	return 0;
}
