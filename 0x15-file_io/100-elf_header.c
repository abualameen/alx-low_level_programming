#include "main.h"
#include <elf.h>
void print_error(const char *msg) 
{
	fprintf(stderr, "Error: %s\n", msg);
}

void print_elf_header_info(Elf64_Ehdr *header) 
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++) 
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX System V ABI" : "Other");
	printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:                              ");
	switch (header->e_type) 
	{
		case ET_NONE:
	    		printf("NONE (No file type)\n");
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
	    		printf("Unknown\n");
	    		break;
	}
	printf("Entry point address:               0x%lx\n", header->e_entry);
	printf("\n");
}

int main(int argc, char **argv) 
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2) 
	{
		print_error("Usage: elf_header elf_filename");
		return 98;
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1) 
	{
		print_error("Can't open file");
		return 98;
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header)) 
	{
		print_error("Can't read file header");
		close(fd);
		return 98;
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 || 
	header.e_ident[EI_MAG1] != ELFMAG1 ||
	header.e_ident[EI_MAG2] != ELFMAG2 ||
	header.e_ident[EI_MAG3] != ELFMAG3) 
	{
		print_error("Not an ELF file");
		close(fd);
		return 98;
	}
	print_elf_header_info(&header);
	if (close(fd) == -1) 
	{
		print_error("Can't close file");
		return 98;
	}
	return 0;
}
