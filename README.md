# array_calculations

Assignment 5 Intro programming 1

Assignment 5
Emily Zastenchik

Problem:

    -create two arrays that hold  20 integers named array_one[20] and array_two[20]
		-store products of array_one and array_two in another array named array_three[20]
		-display arrays as three columns[include <iomanip> library and setw() to make columns]
		-also calculate and diplay the square root(include <cmath> library) of the sum of array_three[20] 
	
Analysis:
	
	
	OUTPUTS 
  
    *use initialization list for array1 and array2
			-data for array_one
			-data for array_two 
			-data for array_three (product of array_one and array_two)
			-sum of array_three elements
			-square root of array_three sum
		
	FUNCTIONS 
  
  	-void findSQsum(int s[], float sum)
		sum is a float because the sqrt function only accepts the float data type
	
	LOOPS 
  
		for(int i = 0, i < 20; i++) - used for arrays
		
	

Design:

	Declare array_one[20], array_two[20], array_three[20]
  
	Calculate array_three (product of array_one and array_two)
  
	Display array_one, array_two, array_three
  
	Use findSQsum function to calculate sum and square root of array_three
  
	Display sum and square root result
