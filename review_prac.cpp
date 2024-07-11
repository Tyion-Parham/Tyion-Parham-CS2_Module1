// Tyion Parham
// Comp Sci 2 
// 7-9-2024

#include <iostream>
using namespace std;

void practiceArrays();
//void practicePointers();
//void practiceStructs();
int getCount();
int* getNumbers(int* ptr, int size);

int main()
{
	practiceArrays();


}

void practiceArrays()
{
	int count = getCount();
	int* ptr = nullptr;

	ptr = getNumbers(ptr, count);

	cout << endl << endl;
	for (int i=0; i < count; i++)
		cout << *(ptr + i) << endl;

	int sum = 0, max = *ptr, min = *ptr;
	double average = 0.0;

	for (int i = 0; i < count; i++) // Calculates the sum and finds the min & max
	{
		sum += *(ptr + i);
		if (max < *(ptr + i))
			max = *(ptr + i);
		if (min > *(ptr + i))
			min = *(ptr + i);
	}

	average = static_cast<double>(sum) / count; // static_cast changes the element to the choice of the user 

	cout << "Sum: " << sum << endl
		<< "Average: " << average << endl
		<< "Max: " << max << endl
		<< "Min: " << min << endl;

	delete[] ptr;
	ptr = nullptr;
}

int getCount()
{
	int count = 0;
	cout << "Please enter the amount of integers wanted: ";
	cin >> count;
	cout << endl;
	return count;
}

int* getNumbers(int* ptr, int size)
{
	ptr = new int[size];

	for (int i = 0; i < size; i++)
	{
		cout << "Please enter a integer: ";
		cin >> ptr[i];
		cout << endl;
	}

	return ptr;
}