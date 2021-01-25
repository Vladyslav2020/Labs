#include <bits/stdc++.h>

using namespace std;

int** get_matrix(int);
void print_matrix(int**, int);
void delete_matrix(int**, int);

int main(){
    int N;
    cout << "Input size of matrix: ";
    cin >> N;
    int** matrix = get_matrix(N);
    print_matrix(matrix, N);
    cout << "The minimum value of the corner elements of the resulting matrix: " 
        << min(min(matrix[0][0], matrix[0][N - 1]), min(matrix[N - 1][0], matrix[N - 1][N - 1]));
    delete_matrix(matrix, N);
    return 0;
}

int** get_matrix(int N){
    int** matrix = new int* [N];
    for (int i = 0; i < N; i++)
        matrix[i] = new int[N];
    int current = 1;
    int dx[4] = {0, -1, 0, 1},
        dy[4] = {1, 0, -1, 0};
    for (int i = 0; i < N; i++)
        matrix[0][i] = current++;
    int dist = N - 1, x = N - 1, y = 0;
    for (int i = 0; i < 2 * N - 2; i++){
        for (int j = 0; j < dist; j++){
            x += dx[i % 4];
            y += dy[i % 4];
            matrix[y][x] = current++;
        }
        if (i % 2 != 0)
            dist--;
    }
    return matrix;
}

void print_matrix(int** matrix, int N){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++)
            cout << matrix[i][j] << '\t';
        cout << endl;
    }
}

void delete_matrix(int** matrix, int N){
    for (int i = 0; i < N; i++)
        delete[] matrix[i];
    delete[] matrix;
}