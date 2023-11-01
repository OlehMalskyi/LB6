#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

void create(int* arr, int SIZE, int MIN, int MAX)
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
    }
}

void print(int* arr, int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
}

int findMinNum(int* arr, int SIZE, int min)
{
    int minNum = min;
    for (int i = 0; i < SIZE; i++)
    {
        if (minNum > arr[i]) {
            minNum = arr[i];
        }
    }
    return minNum;
}

int findMaxNum(int* arr, int SIZE, int max)
{
    int maxNum = max;
    for (int i = 0; i < SIZE; i++)
    {
        if (maxNum < arr[i]) {
            maxNum = arr[i];
        }
    }
    return maxNum;
}

int main()
{
    srand((unsigned)time(NULL));

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int MIN, MAX, SIZE;

    cout << "Введіть розмір масиву (SIZE): "; cin >> SIZE;
    cout << "Введіть діапазон елементів масиву (MIN): "; cin >> MIN;
    cout << "Введіть діапазон елементів масиву (MAX): "; cin >> MAX;
    cout << endl;

    int* arr = new int[SIZE];
    create(arr, SIZE, MIN, MAX);


    print(arr, SIZE);
    cout << "\n\n";
    cout << "Мінімальне число = " << findMinNum(arr, SIZE, MAX) << endl;
    cout << "Максимальне число = " << findMaxNum(arr, SIZE, MIN) << endl;
    cout << endl;
    cout << "Сума мінімального та максимального числа: " << findMinNum(arr, SIZE, MAX) + findMaxNum(arr, SIZE, MIN) << endl;

    delete[] arr;

    return 0;
}
