/**
 * @file char_array_as_string.cpp
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Demonstration of using return keyword or exit() function to exit the program body.
 *
 * @version 0.1
 * @date 26-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <string.h> // To use strlen() function

using namespace std;

int main()
{
	char String[100];

	cout << "Enter a string (max. 100 characters): ";
	cin.getline(String, 100);

	int length = strlen(String);

	for (int i = 0, j = length - 1; i < (length / 2); ++i, --j)

		if (String[i] != String[j])
		{
			cout << "\nThis string is not a palindrome!!!\n";

			exit(0); // Another alternative is using 'return' keyword with the exit code
		}

	cout << "\nThis string is a palindrome!!!\n";

	return 0; // Returns 0 on success to the process
}
