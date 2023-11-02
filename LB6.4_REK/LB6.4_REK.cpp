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

int count(int* arr, int SIZE, int nCount, int C, int i)
{
    if (i < SIZE)
    {
        if (arr[i] > C)
        {
            nCount++;
        }
        count(arr, SIZE, nCount, C, ++i);
    }
    else return nCount;
}

double mult(int* arr, int SIZE, int max, int index, double mul, int i)
{
    if (i < SIZE)
    {
        if (abs(arr[i]) > max)
        {
            max = abs(arr[i]);
            index = i;
        }
        mult(arr, SIZE, max, index, mul, ++i);
    }
    else {
        for (int i = index + 1; i < SIZE; i++)
        {
            mul *= arr[i];
        }
        return mul;
    }
}

void sort(int* arr, const int SIZE, int i)
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

    if (i < SIZE - 2)
        sort(arr, SIZE, i + 1);
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

    create(arr, SIZE, MIN, MAX, 0);

    print(arr, SIZE, 0);
    cout << endl;
    cout << "count = " << count(arr, SIZE, 0, C, 0) << endl;
    cout << "Добуток елементів масиву після макс.числа за модулем: " << mult(arr, SIZE, arr[0], 0, 1, 0) << endl;
    sort(arr, SIZE, 0);
    print(arr, SIZE, 0);

    delete[] arr;

    return 0;
}
