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
typedef std::vector<std::vector<long long>> Matrix;
int recordM[20] = {1};
void initialize () {
    for (int i = 1; i < 20; i++) {
        recordM[i] = recordM[i-1] * 2;
    }
}

Matrix matrixMultiplication (Matrix matrix1, Matrix matrix2, int M) {
    int row1{(int)matrix1.size()}, col1{(int)matrix1.at(0).size()};
    int col2{(int)matrix2.at(0).size()};
    Matrix matrix(row1);

    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col2; j++) {
            ll sum{0};
            for(int k = 0; k < col1; k++) {
                ll mul{1};
                for(int l = 0; l < 2; l++) {
                    if(l % 2)
                        mul = ((matrix2[k][j] % M) * (mul % M)) % M;                        
                    else
                        mul = ((matrix1[i][k] % M) * (mul % M)) % M;
                }
                sum = (mul + sum) % M;
            }
            matrix[i].push_back(sum);
        }
    }

    return matrix;
}

Matrix power(Matrix x, ull y, int M) {
    Matrix res(x[0].size());

    for (int i = 0; i < x[0].size(); i++) {
        for (int j = 0; j < x[0].size(); j++) {
            if(i != j)  res[i].push_back(0);
            else        res[i].push_back(1);
        }
    }
       
    while (y > 0) {
        if (y & 1)
          res = matrixMultiplication(res, x, M);
        y = y >> 1;
        x = matrixMultiplication(x, x, M);
    }
    return res;
}

ull solve (ull n, int M) {

    if(n == 0)  return 0;
    if(n <= 2)  return 1 % M;

    Matrix matrix{{1,1},{1,0}};
    matrix = power(matrix, n-2, M);
    return (matrix[0][0] + matrix[0][1]) % M;
}

int main() {
    FastIO;
    initialize();

    ull n{0};
    int m{0};
    while(std::cin >> n >> m) {
        std::cout << solve(n, recordM[m]) << std::endl;
    }
    
    return 0;
}
