#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

void create(int* arr, int SIZE, int MIN, int MAX, int i)
{
    if (i < SIZE)
    {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
        create(arr, SIZE, MIN, MAX, ++i);
    }
}

void print(int* arr, int SIZE, int i)
{
    if (i < SIZE)
    {
        cout << arr[i] << ' ';
        print(arr, SIZE, ++i);
    }
}

int count(int* arr, int SIZE, int nCount, int i)
{
    if (i < SIZE)
    {
        if (arr[i] % 2 == 0 && arr[i] != 0)
        {
            nCount++;
        }
        count(arr, SIZE, nCount, ++i);
    }
    else return nCount;
}

template <typename T>
T secondCount(T* arr, T SIZE, T nCount, T i)
{
    if (i < SIZE)
    {
        if (arr[i] % 2 == 0 && arr[i] != 0)
        {
            nCount++;
        }
        secondCount(arr, SIZE, nCount, ++i);
    }
    else return nCount;
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

    create(arr, SIZE, MIN, MAX, 0);

    print(arr, SIZE, 0);
    cout << endl;
    cout << "count = " << count(arr, SIZE, 0, 0) << endl;
    cout << "secondCount = " << secondCount(arr, SIZE, 0, 0) << endl;


    delete[] arr;

    return 0;
}
