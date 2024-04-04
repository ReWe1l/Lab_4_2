#include <iostream>
using namespace std;

const int rows_A = 5;
const int cols_A = 10;
const int rows_B = 10;
const int cols_B = 4;

void findMinElement(const double A[rows_A][cols_A], const double B[rows_B][cols_B]) {
    double min_A = A[0][0];
    int min_row_A = 0, min_col_A = 0;

    double min_B = B[0][0];
    int min_row_B = 0, min_col_B = 0;

    for (int i = 0; i < rows_A; i++) {
        for (int j = 0; j < cols_A; j++) {
            if (A[i][j] < min_A) {
                min_A = A[i][j];
                min_row_A = i + 1;
                min_col_A = j + 1;
            }
        }
    }

    for (int i = 0; i < rows_B; i++) {
        for (int j = 0; j < cols_B; j++) {
            if (B[i][j] < min_B) {
                min_B = B[i][j];
                min_row_B = i + 1;
                min_col_B = j + 1;
            }
        }
    }

    std::cout << "Матрица A:" << std::endl;
    for (int i = 0; i < rows_A; i++) {
        for (int j = 0; j < cols_A; j++) {
            std::cout << A[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
        cout << std::endl;

    std::cout << "Матрица B:" << std::endl;
    for (int i = 0; i < rows_B; i++) {
        for (int j = 0; j < cols_B; j++) {
            std::cout << B[i][j] << " ";
        }
        std::cout << std::endl;
    }

    cout << std::endl;

    std::cout << "Минимальный элемент матрицы A: " << min_A << " в строке " << min_row_A << " и столбце " << min_col_A << std::endl;

    cout << std::endl;

    std::cout << "Минимальный элемент матрицы B: " << min_B << " в строке " << min_row_B << " и столбце " << min_col_B << std::endl;
}

int main() {

    locale::global(locale("Russian_Russia.1251"));

    double A[rows_A][cols_A] = {
        {51, 52, 53, 54, 55, 56, 57, 58, 59, 99},
        {20, 12, 13, 14, 15, 16, 17, 18, 19, 11},
        {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
        {41, 42, 43, 44, 45, 46, 47, 48, 49, 50}
    };

    double B[rows_B][cols_B] = {
        {41, 42, 43, 44},
        {45, 46, 47, 48},
        {49, 98, 99, 99},
        {13, 14, 15, 16},
        {17, 18, 19, 20},
        {21, 22, 23, 24},
        {25, 26, 27, 28},
        {29, 30, 31, 32},
        {33, 34, 35, 36},
        {37, 38, 39, 40}
    };

    findMinElement(A, B);

    return 0;
}