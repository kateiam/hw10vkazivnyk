#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251>null");

    const int size = 10;
    int ar[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    cout << "Початковий масив: ";
    for (int i = 0; i < size; i++) {
        cout << *(ar + i) << " ";
    }

    int* ptrPochatok = ar;
    int* ptrKinezh = ar + size - 1;

    while (ptrPochatok < ptrKinezh) {
        int n = *ptrPochatok;
        *ptrPochatok = *ptrKinezh;
        *ptrKinezh = n;

        ptrPochatok++;
        ptrKinezh--;
    }

    cout << endl << "Масив в зворотньому порядку: ";
    for (int i = 0; i < size; i++) {
        cout << *(ar + i) << " ";
    }
}