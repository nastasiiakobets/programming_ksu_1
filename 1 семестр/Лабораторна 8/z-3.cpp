#include <iostream>
#include <iterator>
using namespace std;

void bsort_u(int a[], size_t n) 
{
    bool   next;
    size_t j1, j2;
    do {
        next = false;
        for (size_t i = 0; i < n; i = j2) {
            j1 = i;
            while ((j1 < n) && (a[j1] <= 0))
                ++j1;

            j2 = j1 + 1;
            while ((j2 < n) && (a[j2] <= 0))
                ++j2;

            if ((j2 < n) && (a[j2] < a[j1])) {
                std::swap(a[j1], a[j2]);
                next = true;
            }
        }
    } while (next);
}

int main(void)
{
    system("color 03");

    int   a[] = { 11, -9, -8, 8, -6, 5, -4, 13, 2, -1 };
    size_t  n = sizeof(a) / sizeof(a[0]);

    cout << "original array: " << endl;
    std::copy(a, a + n, std::ostream_iterator<int>(std::cout, " \t"));
    std::cout << std::endl;

    bsort_u(a, n);
    cout << "array after sorting: " << endl;
    std::copy(a, a + n, std::ostream_iterator<int>(std::cout, " \t"));
    std::cout << std::endl;


    system("pause");
    return 0;
}