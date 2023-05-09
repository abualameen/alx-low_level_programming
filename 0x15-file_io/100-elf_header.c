#include "main.h"
void print_error(char *error_msg);
void print_osabi(Elf64_Ehdr *elf_header);
void print_type(Elf64_Ehdr *elf_header);
void print_elf_info(char *file_name, Elf64_Ehdr *elf_header);
void handle_elf_file(char *filename);
/**
 * print_error - erros printing
 * @error_msg: error massage
 * Return: 0
 */
void print_error(char *error_msg)
{
	fprintf(stderr, "%s\n", error_msg);
	exit(98);
}
/**
 * print_osabi - prints osabi
 * @elf_header: header
 * Return: 0
 */
void print_osabi(Elf64_Ehdr *elf_header)
{
	printf("OS/ABI: ");
	switch (elf_header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM_AEABI:
			printf("ARM EABI\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: 0x%x>\n", elf_header->e_ident[EI_OSABI]);
			break;
	}
}
/**
 * print_type - print the type
 * @elf_header: header
 * Return: 0
 */
void print_type(Elf64_Ehdr *elf_header)
{
	printf("Type: ");
	switch (elf_header->e_type)
	{
		case ET_NONE:
			printf("NONE (Unknown type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: 0x%x>\n", elf_header->e_type);
			break;
	}
}
/**
 * print_elf_info - print elf information
 * @file_name: filename
 * @elf_header: header
 * Return: 0
 */
void print_elf_info(char *file_name, Elf64_Ehdr *elf_header)
{
	printf("Magic: ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header->e_ident[i]);
	}
	printf("\n");
	printf("Class: ");
	if (elf_header->e_ident[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
	}
	else
	{
		printf("ELF32\n");
	}
	printf("Data: ");
	if (elf_header->e_ident[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
	}
	else
	{
		printf("2's complement, big endian\n");
	}
	printf("Version: %d\n", elf_header->e_ident[EI_VERSION]);
	print_osabi(elf_header);
	printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);
	print_type(elf_header);
	printf("Entry point address: %p\n", (void *) elf_header->e_entry);
}


/**
 * handle_elf_file - handler
 * @filename: filename
 * Return: 0
 */
void handle_elf_file(char *filename)
{
	int fd = open(filename, O_RDONLY);
	Elf64_Ehdr elf_header;

	if (fd == -1)
	{
		print_error("Error: Could not open file");
	}
	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		print_error("Error: Could not read ELF header");
	}
	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		print_error("Error: File is not an ELF file");
	}
	print_elf_info(filename, &elf_header);
	if (close(fd) == -1)
	{
		print_error("Error: Could not close file");
	}
}
/**
 * main - entry point
 * @argc: argu
 * @argv: vector of argu
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		print_error("Usage: ./a.out <filename>");
	}
	handle_elf_file(argv[1]);
	return (0);
}
