/**
 * @file stream_io_getline_write.cpp
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Demonstration of character array to be used for string input and the use of string.h
 * header file function strlen() for counting string length operation.
 *
 * @version 0.1
 * @date 22-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <string.h> // For strlen() function

using namespace std;

int main()
{
	int size = 0;

	while (true)
	{
		cout << "Enter the size of the string (Press Ctrl + c to exit) : ";
		cin >> size;
		cin.ignore();

		char String[size]; // Character array is used to store a string variable

		cout << "Enter a string: ";
		cin.getline(String, size); // Stream I/O string function

		int length = strlen(String); // Measures the number of characters in the string excluding '\0'

		cout << "\nEntered string is \"";
		cout.write(String, length); // Stream I/O string function
		cout << "\".\nLength of the string is " << length << ".\n\n";
	}
}