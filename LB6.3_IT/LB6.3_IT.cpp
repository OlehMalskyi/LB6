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

int count(int* arr, int SIZE)
{
    int nCount = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] % 2 == 0 && arr[i] != 0)
        {
            nCount++;
        }
    }
    return nCount;
}

template <typename T>
T secondCount(T* arr, T SIZE)
{
    int nCount = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] % 2 == 0 && arr[i] != 0)
        {
            nCount++;
        }
    }
    return nCount;
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
    cout << endl;
    cout << "count = " << count(arr, SIZE) << endl;
    cout << "secondCount = " << secondCount(arr, SIZE) << endl;
    delete[] arr;

    return 0;
}
