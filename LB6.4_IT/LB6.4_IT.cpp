#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

void create(int* arr, int SIZE, double MIN, double MAX)
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = (MAX - MIN) * rand() / RAND_MAX + MIN;
    }
}

void print(int* arr, int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
}

int count(int* arr, int SIZE, int C)
{
    int nCount = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > C)
            nCount++;
    }
    return nCount;
}

double mult(int* arr, int SIZE)
{
    int max = arr[0];
    int index = 0;
    double mul = 1;
    for (int i = 0; i < SIZE; i++)
    {
        if (abs(arr[i]) > max)
        {
            max = abs(arr[i]);
            index = i;
        }
    }
    for (int i = index + 1; i < SIZE; i++)
    {
        mul *= arr[i];
    }
    return mul;
}

void sort(int* arr, const int SIZE)
{
    for (int i = 0; i < SIZE - 1; i++)
    {
        int min = arr[i];
        int imin = i;
        for (int j = i + 1; j < SIZE; j++)
            if (min > arr[j])
            {
                min = arr[j];
                imin = j;
            }
        arr[imin] = arr[i];
        arr[i] = min;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double MIN, MAX, C;
    int SIZE;

    cout << "Введіть розмір масиву (SIZE): "; cin >> SIZE;
    cout << "Введіть діапазон елементів масиву (MIN): "; cin >> MIN;
    cout << "Введіть діапазон елементів масиву (MAX): "; cin >> MAX;
    cout << "С = "; cin >> C;
    cout << endl;

    int* arr = new int[SIZE];
    create(arr, SIZE, MIN, MAX);

    print(arr, SIZE);
    cout << endl;
    cout << "Кількість елементів більших за С: " << count(arr, SIZE, C) << endl;
    cout << "Добуток елементів масиву після макс.числа за модулем: " << mult(arr, SIZE) << endl;
    sort(arr, SIZE);
    cout << endl;
    print(arr, SIZE);

    delete[] arr;

    return 0;
}
