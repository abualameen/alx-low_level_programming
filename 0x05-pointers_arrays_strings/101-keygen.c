#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * randomChar - Generate a random character from a given set
 * @set: The set of characters to choose from
 * @setSize: The size of the set
 *
 * Return: The randomly chosen character
 */
char randomChar(char set[], int setSize)
{
	return (set[rand() % setSize]);
}

/**
 * generatePassword - Generate a random password
 * @password: The buffer to store the generated password
 * @length: The length of the password to generate
 */
void generatePassword(char password[], int length)
{
	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char digits[] = "0123456789";

	int i;

	for (i = 0; i < length; i++)
	{
		int choice = rand() % 3;

		switch (choice)
		{
		case 0:
			password[i] = randomChar(lowercase, sizeof(lowercase) - 1);
			break;
		case 1:
			password[i] = randomChar(uppercase, sizeof(uppercase) - 1);
			break;
		case 2:
			password[i] = randomChar(digits, sizeof(digits) - 1);
			break;
		}
	}
	password[length] = '\0';
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	srand(time(NULL));

	char password[PASSWORD_LENGTH + 1];

	generatePassword(password, PASSWORD_LENGTH);

	printf("%s\n", password);

	return (0);
}
