#include <iostream>

using namespace std;


// Функция для вывода матрицы
void Show_matr(float** p, unsigned &n, unsigned &m) {
    cout << "\n\n";
    for (unsigned i = 0; i < n; i++) {
        cout << "\t" <<"|";
        for (unsigned j = 0; j < m; j++) {
            cout << p[i][j] << "\t" <<"|";
        }
        cout << endl;
    }
    cout << "\n\n";
}

// 1-ый шаг метода Жаргана-Гаусса
void step1(float** p) {

    const unsigned n = 5;
    float* fh[n];

    for (unsigned i = 0; i < n; i++) {
        if (p[i][i] == 0) {
            for (unsigned j = i + 1; j < n; j++) {
                if (p[j][i] != 0) {
                    fh[i] = p[i];
                    p[i] = p[j];
                    p[j] = fh[i];
                    break;
                }
            }
        }
        
    }
}

// Функция для нахождения множителя строки для 2-ого шага
void Find_mn(float* s1, float* s2, float &mn) {
    

}

// 2-ой шаг метода Жаргана-Гаусса
void step2(float** p, unsigned n, unsigned m) {

    float np_mn;
    float* mn = &np_mn;
    for (unsigned i = 0; i < n - 1; i++) {
        for (unsigned j = 0; j < m - 1; j++) {
            if (p[i][i] != 1) {

            }
        }
    }
}


// Метод Жордана-Гаусса в виде модуля, состоящего из множества функций (Шагов)
void Method(float** aop, unsigned n, unsigned m) {
    // Вывод изначальной матрицы
    cout << "Изначальная матрица:";
    Show_matr(aop, n, m);

    // Сообственно сам метод:
    step1(aop);
    step2(aop, n, m);

    
    // Вывод итоговой матрицы
    cout << "Итоговая матрица:";
    Show_matr(aop, n, m);
}


int main()
{
    setlocale(LC_ALL, "Russian");

// Мой массив
// ##############################################################
    const unsigned n = 5, m = 6;
    const unsigned * pn = &n, * pm = &m;

    float my_mat[n][m] = { {0.42, -0.72, 0.02, -0.28, 0.2, 0.66},
    {-0.67, 0.17, -0.86, 0.88, -0.88, 0.53},
    {0.14, -0.11, 0.86, -0.61, 0.61, 0.32},
    {0.83, -0.97, -0.29, -0.66, 0.7, -0.88},
    {0.91, -0.04, -0.41, -0.24, 0.09, 0.66} };

// Тестовый массив
// ##############################################################

    float tmat[n][m] = { {0.42, -0.72, 0.02, -0.28, 0.2, 0.66},
    {-0.67, 0.17, -0.86, 0.88, -0.88, 0.53},
    {0.14, -0.11, 0.86, -0.61, 0.61, 0.32},
    {0.83, -0.97, -0.29, -0.66, 0.7, -0.88},
    {0.91, -0.04, -0.41, -0.24, 0.09, 0.66} };

// ##############################################################

    // Не забудь поменять потом на свой массив
    float* aop[n];
    for (int i = 0; i < n; i++) {
        aop[i] = tmat[i];
    }


    // Тест 
    Method(aop, n, m);


    system("pause"); // Окончание программы
    return 0;
}