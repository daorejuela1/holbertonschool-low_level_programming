#include "holberton.h"
/**
 *print_spaces - print n spaces
 *@n: number of spaces
 *Return: Nothing
 */
void print_spaces(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf(" ");
	}
}
/**
 *first_print -prints from magic to version
 *@buf: Quantity of arguments
 *Return: 0 if success
 */
void first_print (char *buf)
{
	int i;

	dict_classes class1 [] = {{2, "ELF64"}, {1, "ELF32"},};
	dict_classes data1 [] = {{2, "2's complement, little endian"},
		{1, "2's complement, big endian"},};
	dict_classes version1 [] = {{0, "0 (invalid)"}, {1, "1 (current)"},};

	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
	{
		printf("%02x ", (unsigned char)*(buf + i));
	}
	printf("\n");
	printf("  Class:");
	print_spaces(29);
	for (i = 0; i < 2; i++)
	{
		if (class1[i].key == *(buf + 4))
			printf("%s\n", class1[i].value);
	}
	printf("  Data:");
	print_spaces(30);
	for (i = 0; i < 2; i++)
	{
		if (data1[i].key == *(buf + 5))
			printf("%s\n", data1[i].value);
	}
	printf("  Version:");
	print_spaces(27);
	for (i = 0; i < 2; i++)
	{
		if (version1[i].key == *(buf + 6))
			printf("%s\n", version1[i].value);
	}
}

/**
 *second_print -prints from magic to version
 *@buf: Quantity of arguments
 *Return: 0 if success
 */
void second_print (char *buf)
{
	int i;

	dict_classes abi1[] = {{0, "System V"},
	{1, "HP-UX"}, {2, "NetBSD"}, {3, "Linux"},
	{4, "GNU Hurd"}, {6, "Solaris"}, {7, "AIX"},
	{8, "IRIX"}, {9, "FreeBSD"}, {0xA, "Tru64"},
	{0xB, "Novell Modesto"}, {0xC, "OpenBSD"},
	{0xD, "OpenVMS"}, {0xE, "NonStop Kernel"},
	{0xF, "AROS"}, {0x10, "Fenix OS"},
	{0x11, "CloudABI"}, {0x12, "Stratus Technologies OpenVOS"},};

	dict_classes type1[] = {{0, "NONE"}, {1, "REL (Relocatable file)"},
	{2, "EXEC (Executable file)"}, {3, "DYN (Shared object file)"},
	{4, "CORE (Core file)"},};
	printf("  OS/ABI:");
	print_spaces(28);
	for (i = 0; i < 18; i++)
	{
		if (abi1[i].key == *(buf + 7))
			printf("UNIX - %s\n", abi1[i].value);
	}
	printf("  ABI Version:");
	print_spaces(23);
	printf("%d\n", *(buf + 7));
	printf("  Type:");
	print_spaces(30);
	for (i = 0; i < 4; i++)
	{
		if (type1[i].key == *(buf + 16))
			printf("%s\n", type1[i].value);
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
	int file_from;
	char buf[1024];

	if (argc - 1 != 1)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	read(file_from, buf, 1024);
	if (*buf == 0x7F)
	{
		if (*(buf + 1) == 'E' && *(buf + 2) == 'L' && *(buf + 3) == 'F')
		{
			printf("ELF Header:\n");
			first_print(buf);
			second_print(buf);
			printf("  Entry point address:");
			print_spaces(15);
			printf("0x%02x", (unsigned char)*(buf + 25));
			printf("%02x", (unsigned char)*(buf + 24));
			printf("\n");
			return (0);
		}
	}
	dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
	exit(98);
	return (0);
}
