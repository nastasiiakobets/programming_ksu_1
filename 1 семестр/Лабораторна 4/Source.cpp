#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
	int Year;
	int *pYear;

	//1
	pYear = &Year;
	*pYear = 2021;
    cout << "1 year=" <<Year<<endl;

	//2
	Year = 2021;
	pYear = &Year;
	printf("2 year=%d", *pYear);
	
	return 0;
}