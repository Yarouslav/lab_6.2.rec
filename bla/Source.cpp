#include <iostream>
#include <locale>

using namespace std;

void SwapHalves(int* a, const int n, const int start = 0)
{
    if (n <= 1 || n <= start + 4) // Stop swapping if the remaining array size is less than or equal to 4
        return;
    int mid = n / 2;
    for (int i = 0; i < 4; i++) // Swap only the first 4 elements with the last 4
    {
        int temp = a[start + i];
        a[start + i] = a[start + mid + i];
        a[start + mid + i] = temp;
    }
    SwapHalves(a, mid, start);
    SwapHalves(a, n - mid, start + mid);
}

void create(int* a, const int n)
{
    for (int i = 0; i < 2 * n; i++)
    {
        a[i] = i + 1;
    }
}

void print(const int* a, const int n)
{
    for (int i = 0; i < 2 * n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    setlocale(LC_CTYPE, "ukr");
    const int n = 4;
    int a[2 * n];

    create(a, n);

    cout << "Оригiнальний масив:" << endl;
    print(a, n);

    SwapHalves(a, 2 * n);

    cout << "Масив пiсля перенесення:" << endl;
    print(a, n);

    return 0;
}