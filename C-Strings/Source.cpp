

#include <iostream>
using namespace std;

// Declare functions
int countLetters(char str[100]);
int countWords(char str[100]);
void reversePhrase(char arr[100]);

int main()
{
	/* Write a program to input your name in the keyboard, save it to an array and then iterates through the array to count the number of characters of the inputed

		char name[70];
		int i;
		int count = 0;

		cout << " Enter your name: ";
		cin.getline(name, 70);
		cout << " \nYou entered " << name << endl;

		// Use the NULL character to stop the execution of c-string when it reaches 3 character max
		//name[3] = '\0';
		cout << " \nYou entered " << name << endl;


		for (i = 0; name[i] != '\0'; i++)
			count++;

		cout << " \nYou name is " << count << " characters in length" << endl;
	*/


	/* Write a program that inputs the names of the students in the class and stores them in a 2-dimentional array and then outputs the class list to the console.

		char student[3][70];	//Allocating space for 2D-array with 3 rows and 70 cols
		int i;

		// Populate 2D-array
		for (i = 0; i < 3; i++)
		{
			cout << " Enter a student's name? ";
			cout << endl;
			cin.getline(student[i], 70);
		}
		// Now that array is filled, print it out 'till it reaches the max size, in this case is 3 students
		for (i = 0; i < 3; i++)
		{
			cout << student[i] << endl;
		}
	*/

	char phrase[100];
	cout << " \n Enter phrase here: ";
	cin.getline(phrase, 100);
	cout << " \n # of letters is: " << countLetters(phrase) << endl;
	cout << " \n # of words is: " << countWords(phrase) << endl;

	reversePhrase(phrase);
	cout << " reversed is: " << phrase << endl;

	cout << endl;
	system("pause");

}

/* Function that accepts a phrase (C-string) then counts the number of letter (non-space) and return that value */
int countLetters(char str[100])
{
	int j;
	int count = 0;

	for (j = 0; j < strlen(str); j++) //strlen() only include the string up to the length of the string character, without counting the space
	{
		if (str[j] != ' ')
		{
			count++;
		}
	}

	return count;
}

/* function that takes a phrase (C-string) then counts the number of words in the phrase and returns that value */
int countWords(char str[100])
{
	int j;
	int count = 0;
	bool inWord = false;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] != ' ')
		{
			if (inWord == false)
			{
				count++;
				inWord = true;
			}
		}
		else 
		{
			inWord = false;
		}
	}
	return count;
}

/* Function that accepts a phrase (C-string) and reverses the content of that phrase */
void reversePhrase(char arr[100])
{
	int j, k;
	char temp;
	
	k = strlen(arr) - 1;
	for (j = 0; j < k; j++, k--)
	{
		temp = arr[k];
		arr[k] = arr[j];
		arr[j] = temp;
	}
}

/* Write a function taht accepts a word, determines if it is a palindrome and returns true or false */