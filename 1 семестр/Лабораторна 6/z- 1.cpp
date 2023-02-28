#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class A
{
public:

    A()
    {
    }
    ~A()
    {
    }

    bool check_pos(int inPos, int inLen)
    {
        if (0 > inPos || inPos >= inLen)
        {
            cout << "Error: Invalid position" << endl;
            return false;
        }

        return true;
    }

    vector<string> create_array(int inLen)
    {
        vector<string> res;

        cout << "Enter " << inLen << " elements: " << endl;

        for (int i = 0; i < inLen; ++i)
        {
            string x;
            cin >> x;
            res.push_back(x);
        }

        return res;
    }

    void change_element(int inPos, vector<string>& inArr, string inValue)
    {
        if (check_pos(inPos, inArr.size()))
            inArr[inPos] = inValue;
    }

    vector<string> sum_arrays(vector<string> inArr1, vector<string> inArr2)
    {
        int minLen = min(inArr1.size(), inArr2.size());
        int maxLen = max(inArr1.size(), inArr2.size());

        vector<string> newArray;

        for (int i = 0; i < minLen; ++i)
            newArray.push_back(inArr1[i] + inArr2[i]);

        if (minLen != maxLen)
        {
            if (inArr1.size() > inArr2.size())
                for (int i = minLen; i < maxLen; ++i)
                    newArray.push_back(inArr1[i]);
            else
                for (int i = minLen; i < maxLen; ++i)
                    newArray.push_back(inArr2[i]);
        }

        return newArray;
    }

    vector<string> no_equival_sum(vector<string> inArr1, vector<string> inArr2)
    {
        vector<string> newArray;

        for (int i = 0; i < inArr1.size(); ++i)
            newArray.push_back(inArr1[i]);

        for (int i = 0; i < inArr2.size(); ++i)
        {
            bool flag = true;

            for (int j = 0; j < newArray.size(); ++j)
            {
                if (inArr2[i] == newArray[j])
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
                newArray.push_back(inArr2[i]);
        }

        return newArray;
    }

    void print_element(int inPos, vector<string> inArr)
    {
        if (check_pos(inPos, inArr.size()))
            cout << "Element #" << inPos << " -> " << inArr[inPos] << endl;
    }

    void print_array(vector<string> inArr)
    {
        for (int i = 0; i < inArr.size(); ++i)
            cout << inArr[i] << ' ';
        cout << endl;
    }
};


void print_help()
{
    cout << "Commands:" << endl
        << "0- Exit program" << endl
        << "1- Create array" << endl
        << "2- Change element by index" << endl
        << "3- Print element by index" << endl
        << "4- Print array" << endl
        << "5- Past together 2 arrays" << endl
        << "6- Sum 2 arrays without equivals" << endl
        << "7- Clear last array" << endl;
}

int main()
{
    cout << "If you want to use 5, 6 commands, you need" << endl
        << "to create second array firstly." << endl
        << "For this use command 1 and create array" << endl << endl;

    print_help();

    A worker;

    int command;
    int countOfArrays = 0;

    vector<string> Arr1;
    vector<string> Arr2;

    while (true)
    {
        cout << endl << "Enter command: ";
        cin >> command;

        if (command == 0)
        {
            break;
        }

        else if (command == 1)
        {
            if (countOfArrays == 0)
            {
                int len = 0;
                cout << "Enter length: "; cin >> len;

                if (len <= 0)
                    cout << "Error: length < 0" << endl;
                else
                {
                    Arr1 = worker.create_array(len);
                    ++countOfArrays;
                }
            }
            else if (countOfArrays == 1)
            {
                int len = 0;
                cout << "Enter length: "; cin >> len;

                if (len <= 0)
                    cout << "Error: length < 0" << endl;
                else
                {
                    Arr2 = worker.create_array(len);
                    ++countOfArrays;
                }
            }
            else
            {
                cout << "You create 2 of 2 available arrays." << endl << "Delete last. For this use 7 command";
            }
        }

        else if (1 < command && command < 5)
        {
            if (countOfArrays == 0)
            {
                cout << "Error: Firstly use command 1 and create array" << endl;
            }

            else if (countOfArrays == 1)
            {
                int pos;
                string value;

                switch (command) {
                case 2:
                    cout << "Enter position of element: "; cin >> pos;
                    cout << "Enter new value: "; cin >> value;
                    worker.change_element(pos, Arr1, value);

                    break;

                case 3:
                    cout << "Enter position of element: "; cin >> pos;
                    worker.print_element(pos, Arr1);

                    break;

                case 4:
                    worker.print_array(Arr1);

                    break;
                }
            }

            else if (countOfArrays == 2)
            {
                int pos;
                string value;
                int num;

                switch (command) {
                case 2:
                    cout << "Enter position of element: "; cin >> pos;
                    cout << "Enter new value: "; cin >> value;

                    cout << "Which array? 1/2: ";
                    cin >> num;

                    if (num == 1)
                        worker.change_element(pos, Arr1, value);
                    else if (num == 2)
                        worker.change_element(pos, Arr2, value);
                    else
                        cout << "Error: Incorect number";

                    break;

                case 3:
                    cout << "Enter position of element: "; cin >> pos;

                    cout << "Which array? 1/2: ";
                    cin >> num;

                    if (num == 1)
                        worker.print_element(pos, Arr1);
                    else if (num == 2)
                        worker.print_element(pos, Arr2);
                    else
                        cout << "Error: Incorect number";

                    break;

                case 4:
                    cout << "Which array? 1/2: ";
                    cin >> num;

                    if (num == 1)
                        worker.print_array(Arr1);
                    else if (num == 2)
                        worker.print_array(Arr2);
                    else
                        cout << "Error: Incorect number";

                    break;
                }
            }
        }

        else if (command == 5 || command == 6)
        {
            if (countOfArrays != 2)
            {
                cout << "Error: Firstly use command 1 and create 2 array" << endl;
            }

            else if (countOfArrays == 2)
            {
                if (command == 5)
                {
                    vector<string> res = worker.sum_arrays(Arr1, Arr2);
                    char response;
                    cout << "Do you want to see result? Y/n: ";
                    while (true)
                    {
                        cin >> response;
                        if (response == 'Y' || response == 'y')
                        {
                            worker.print_array(res);
                            break;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
                else if (command == 6)
                {
                    vector<string> res = worker.no_equival_sum(Arr1, Arr2);
                    char response;
                    cout << "Do you want to see result? Y/n: ";
                    while (true)
                    {
                        cin >> response;
                        if (response == 'Y' || response == 'y')
                        {
                            worker.print_array(res);
                            break;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }
        }

        else if (command == 7)
        {
            if (countOfArrays == 2)
            {
                Arr2.clear();
                --countOfArrays;
                cout << "Cleared array #2" << endl;
            }
            else if (countOfArrays == 1)
            {
                Arr1.clear();
                --countOfArrays;
                cout << "Cleared array #1" << endl;
            }
            else
            {
                cout << "Error: All arrays cleared" << endl;
            }
        }
        else
        {
            cout << "Error: Invalid command" << endl;
        }

    }

    system("pause");
    return 0;
}
