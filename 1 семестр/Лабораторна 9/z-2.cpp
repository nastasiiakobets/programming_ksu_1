#include <iostream>
using namespace std;
int main()
{
    int** dArray, length_of_array;

    cout<< " enter length of array a[n][n]  n: ";
    cin >> length_of_array;

    dArray = new int* [length_of_array];

    for (int i = 0; i < length_of_array; i++)
        dArray[i] = new int[length_of_array];


    cout << " enter array "<<endl;
    for (int i = 0; i < length_of_array; i++)
        for (int j = 0; j < length_of_array; j++)
            cin >> dArray[i][j];
   
 int k, p,sum1=0,sum2=0;
    cout <<endl<< "      Find the sum of the elements " <<endl<<endl<<
        " enter number k - th column : ";
    cin >> k;
    cout<<" and p - th row : ";
    cin >> p;
    
    for (int i = 1; i <= length_of_array; i++)
    {
        for (int j = 1; j <= length_of_array; j++)
        {
            if (k == j )
                sum1=sum1+ dArray[i-1][j-1];
            if (p == i)
                sum2 = sum2 + dArray[i-1][j-1];
        }
    }

    cout<<endl << "      RESULT "<<endl;
    for (int i = 0; i < length_of_array; i++)
    {
        for (int j = 0; j < length_of_array; j++)
        {
            if (j >= i)
                dArray[i][j] = 0;
            cout << dArray[i][j] << '\t';
        }
        cout << endl;
    }
    cout << " sum "<<k<<" column = " << sum1<<endl;
    cout << " sum "<<p<<" row = " << sum2 << endl;

    system("pause");
    return 0;
}
