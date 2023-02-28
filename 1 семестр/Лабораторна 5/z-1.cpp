/*Описати рекурсивну функцію Combin1 (N, K) цілого типу, 
яка знаходить C (N, K) - число поєднань з N елементів по K - за допомогою рекурентного співвідношення: 
C (N, 0) = C (N, N) = 1, 
C (N, K) = C (N - 1, K) + C (N - 1, K - 1) при 0 <K <N. 
Параметри функції - цілі числа; N> 0, 0 ≤ K ≤ N. Дано число N і п'ять різних значень K. 
Вивести числа C (N, K) разом з кількістю рекурсивних викликів функції Combin1, що необхідні для їх знаходження.
*/
#include <iostream>
#include <stdio.h>
using namespace std; 
int counter;
int Combin1(int n, int k)
{  
        if ((n == k) || (k == 0))
        {
            counter++;
            return 1;
        } 
        if (n>k>0) 
    {
        counter += 2;
        return Combin1(n - 1, k) + Combin1(n - 1, k - 1);
    }
    else cout << "error"<<endl;
}
int main()
{
    int n, k, c;

    cout << "enter N: ";
    cin >> n; 
    cout << endl << "and 5 K: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> k; counter = 0;
        c = Combin1(n, k);
        printf("C(%d,%d)=%d, counter=%d\n", n, k, c, counter);
    }
   
    system("pause");
    return 0;
}