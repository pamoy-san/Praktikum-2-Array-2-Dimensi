#include <iostream>
using namespace std;

void rotate(int *mat, int n) {

    // Transpose
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            swap(*(mat + i*n + j), *(mat + j*n + i));
        }
    }

    // Reverse setiap baris
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n/2; j++) {
            swap(*(mat + i*n + j), *(mat + i*n + (n-j-1)));
        }
    }
}

int main() {

    const int n = 4;
    int mat[n][n] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    rotate(&mat[0][0], n);

    cout << "Matriks setelah rotasi 90 derajat:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}