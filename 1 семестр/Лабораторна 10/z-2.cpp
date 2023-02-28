#include<iostream>
#include <string>
using namespace std;
int main()
{
        int pos1;
      
        string name[10] = { "Valeria", "Anastasiia", "Mila", "Anna", "Daria", "Maria","Alina", "Sonya", "Yulia", "Ekaterina" };
      cout  << " names: " << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << name[i] << " ";
        }
        cout << endl<< endl;
        

        unsigned int shortc = name[0].length(); 
        int max = name[0].length();
        for (int i = 0; i < 10; i++)
        {
            if (shortc < name[i].length()) 
            {
                shortc = name[i].length();
                pos1 = i;
 
            } 
            if (name[i].length() > max)
            {
                max = name[i].length();
            }
        }
               
        cout << " the longest name - " << name[pos1] << endl<<" the number of letters in the longest name: " << max << endl;


        system("pause");
        return 0;
    }