#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * generatePassword - Generate a random password
 * @password: The buffer to store the generated password
 * @length: The length of the password to generate
 *
 * Description: This function generates a random password of specified length.
 */
void generatePassword(char password[], int length)
{
	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int charsetSize = sizeof(charset) - 1; /* excluding null terminator */
	int i;

	srand(time(NULL));

	for (i = 0; i < length; ++i)
	{
		int index = rand() % charsetSize;

		password[i] = charset[index];
	}

	password[length] = '\0'; /* Null-terminate the string */
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * Description: This function generates a random password and prints it.
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1]; /* +1 for null terminator */

	generatePassword(password, PASSWORD_LENGTH);
	printf("%s\n", password);

	return (0);
}
