#include "holberton.h"

/**
 *close_secure - securely close both files
 *@file_to: pid first file
 *@file_from: pid second file
 *Return: 0 if success
 */
void close_secure(int file_to, int file_from)
{
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
}

/**
 *check_null - securely close both files
 *@file_to: pid first file
 *@file_from: pid second file
 *Return: 0 if success
 */
void check_null(char *file_to, char *file_from)
{
	if (file_from == NULL)
	{
		exit(98);
	}
	if (file_to == NULL)
	{
		exit(99);
	}
}

/**
 *main - cp one file to other
 *@argc: Quantity of arguments
 *@argv: Value of the arguments
 *Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, rd_error = 1, result;
	char buf[1024];

	if (argc - 1 != 2)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	check_null(argv[1], argv[2]);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0666);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (rd_error != 0)
	{
		rd_error = read(file_from, buf, 1024);
		if (rd_error == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		result = write(file_to, buf, rd_error);
		if (result == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_secure(file_to, file_from);
	return (0);
}
