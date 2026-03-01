#include <iostream>
using namespace std;

const int MAX = 100;

int main() {
    int n;
    cout << "Masukkan ukuran matriks (n x n): ";
    cin >> n;

    int mat[MAX][MAX];

    cout << "Masukkan elemen matriks:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    // 1. Transpose
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }

    // 2. Reverse setiap baris
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n/2; j++) {
            swap(mat[i][j], mat[i][n-j-1]);
        }
    }

    cout << "\nMatriks setelah rotasi 90 derajat:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}