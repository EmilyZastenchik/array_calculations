#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;
/*
Assignment 5
Emily Zastenchik

Problem:-create two arrays that hold  20 integers named array_one[20] and array_two[20]
		-store products of array_one and array_two in another array named array_three[20]
		-display arrays as three columns[include <iomanip> library and setw() to make columns]
		-also calculate and diplay the square root(include <cmath> library) of the sum of array_three[20] 
	
Analysis:
	
	
	OUTPUTS *use initialization list for array1 and array2
			-data for array_one
			-data for array_two 
			-data for array_three (product of array_one and array_two)
			-sum of array_three elements
			-square root of array_three sum
		
	FUNCTIONS -void findSQsum(int s[], float sum)
				(sum is a float because the sqrt function only accepts the float data type)
	
	LOOPS 
		for(int i = 0, i < 20; i++) - used for arrays
		
	

Design:
	Declare array_one[20], array_two[20], array_three[20]
	Calculate array_three (product of array_one and array_two)
	Display array_one, array_two, array_three
	Use findSQsum function to calculate sum and square root of array_three
	Display sum and square root result

*/
void findSQsum(int[], float);
int main() 
{
	float sum = 0;
	int array_three[20];	
	
	int array_one[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	int array_two[20] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 40, 42};
	cout << "array_one"<< '\t' << "array_two" << '\t' << "array_three" << endl;
	for(int i = 0; i < 20; i++)
	{
		array_three[i] = array_one[i] * array_two[i];
		cout << array_one[i] << '\t' << setw(10) << array_two[i] << '\t' << setw(10) << array_three[i] << endl;
	}
	
	findSQsum(array_three, sum);
	
	return 0;
}
void findSQsum(int s[], float sum)
{
	for(int i = 0; i < 6; i++)
		sum += s[i];
	cout << "Sum of array_three: " << sum << endl;
	cout << "Square root of sum: " << sqrt(sum);
		
}

