#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void task_array_1() {
    int arr[5] = { 3, 7, 1, 9, 4 };
    cout << "Задание 1: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void task_array_2() {
    int arr[10] = { 5, 2, 8, 1, 9, 3, 7, 4, 6, 10 };
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += arr[i];
    }
    cout << "Задание 2. Сумма элементов: " << sum << endl;
}
void task_array_3() {
    srand(time(0));
    int arr[8];
    int max_val = 0;
    
    cout << "Задание 3. Массив: ";
    for (int i = 0; i < 8; i++) {
        arr[i] = rand() % 100 + 1;
        cout << arr[i] << " ";
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    cout << "\nМаксимальное значение: " << max_val << endl;
}
void task_array_4() {
    int arr[12] = { 12, 5, 8, 1, 9, 3, 14, 7, 2, 11, 6, 10 };
    
    cout << "Задание 4. Исходный массив: ";
    for (int i = 0; i < 12; i++) cout << arr[i] << " ";
    cout << endl;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12 - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Отсортированный массив: ";
    for (int i = 0; i < 12; i++) cout << arr[i] << " ";
    cout << endl;
}
void task_array_5() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "Задание 5. Результат транспонирования:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}
int add(int a, int b) {
    return a + b;
}
bool isEven(int num) {
    if (num % 2 == 0) return true;
    else return false;
}
double power(double base, int exponent = 2) {
    double result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}
double average(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size;
}
int main() {
    setlocale(LC_ALL, "Russian");
    
    cout << "--- МАССИВЫ ---" << endl;
    task_array_1();
    task_array_2();
    task_array_3();
    task_array_4();
    task_array_5();
    
    cout << "\n--- ФУНКЦИИ ---" << endl;
    cout << "add(5, 3) = " << add(5, 3) << endl;
    cout << "isEven(4) = " << isEven(4) << " (1 - true, 0 - false)" << endl;
    cout << "power(5) = " << power(5) << endl;
    cout << "power(2, 3) = " << power(2, 3) << endl;
    cout << "factorial(5) = " << factorial(5) << endl;
    
    int my_arr[7] = { 10, 20, 30, 40, 50, 60, 70 };
    cout << "average(my_arr) = " << average(my_arr, 7) << endl;

    system("pause");
    return 0;
}