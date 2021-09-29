#include <iostream>

using namespace std;


// Функция для вывода матрицы
void Cout_matr(float** aop, const unsigned n, const unsigned m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << aop[i][j] << "\t" <<"; ";
        }
        cout << endl;
    }
}


int main()
{

// Мой массив
// ##############################################################

    const unsigned n = 5, m = 6;

    float my_mat[n][m] = { {0.42, -0.72, 0.02, -0.28, 0.2, 0.66},
    {-0.67, 0.17, -0.86, 0.88, -0.88, 0.53},
    {0.14, -0.11, 0.86, -0.61, 0.61, 0.32},
    {0.83, -0.97, -0.29, -0.66, 0.7, -0.88},
    {0.91, -0.04, -0.41, -0.24, 0.09, 0.66} };

// ##############################################################

    float *aop[n];
    for (int i = 0; i < n; i++) {
        aop[i] = my_mat[i];
    }
    //float *pm = &my_mat[0][0];

    // Тестовый выод матрицы
    Cout_matr(aop, n, m);



    system("pause"); // Окончание программы
    return 0;
}