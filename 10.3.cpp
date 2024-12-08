#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251>null");

    const int size = 10;
    int ar1[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int ar2[size];

    cout << "Перший масив: ";
    for (int i = 0; i < size; i++) {
        cout << *(ar1 + i) << " ";
    }

    int* ptrPochatok1 = ar1;
    int* ptrKinezh1 = ar1 + size - 1;

    while (ptrPochatok1 < ptrKinezh1) {
        int n = *ptrPochatok1;
        *ptrPochatok1 = *ptrKinezh1;
        *ptrKinezh1 = n;

        ptrPochatok1++;
        ptrKinezh1--;
    }

    int* ptr1 = ar1;
    int* ptr2 = ar2;

    for (int i = 0; i < size; i++) {
        *(ptr2 + i) = *(ptr1 + i);
    }

    cout << endl << "Другий масив, в який ми скопіювали елементи з першого в зворотньому порядку: ";
    for (int i = 0; i < size; i++) {
        cout << *(ptr2 + i) << " ";
    }
}

