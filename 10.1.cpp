#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251>null");

    const int size = 10;
    int ar1[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int ar2[size];

    int* ptr1 = ar1;
    int* ptr2 = ar2;

    for (int i = 0; i < size; i++) {
        *(ptr2 + i) = *(ptr1 + i);
    }

    cout << "Перший масив: ";
    for (int i = 0; i < size; i++) {
        cout << *(ptr1 + i) << " ";
    }

    cout << endl << "Другий масив, в який ми скопіювали елементи з першого: ";
    for (int i = 0; i < size; i++) {
        cout << *(ptr2 + i) << " ";
    }
}
