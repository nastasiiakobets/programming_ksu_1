#include <iostream>
using namespace std;
int main()
{
    
        int64_t N;
        std::cin >> N;
        while (N != 0)
        {
            if (!(N % 10) % 2== 0)
            {
                std::cout << "true";
                return 0;
            }
            N /= 10;
        }
        std::cout << "false";
    
	return 0;
}


