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

int findMinNum(int* arr, int SIZE, int min, int i)
{
    if (i < SIZE)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        findMinNum(arr, SIZE, min, ++i);
    }
    else
        return min;
}

int findMaxNum(int* arr, int SIZE, int max, int i)
{
    if (i < SIZE)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        findMaxNum(arr, SIZE, max, ++i);
    }
    else
        return max;
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
    cout << "\n\n";
    cout << "Мінімальне значення = " << findMinNum(arr, SIZE, MAX, 0) << endl;
    cout << "Максимальне значення = " << findMaxNum(arr, SIZE, MIN, 0) << endl;
    cout << endl;
    cout << "Сума мінімального та максимального числа: " << findMinNum(arr, SIZE, MAX, 0) + findMaxNum(arr, SIZE, MIN, 0) << endl;

    delete[] arr;

    return 0;
}
