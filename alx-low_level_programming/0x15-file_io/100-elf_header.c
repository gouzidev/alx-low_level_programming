#include <elf.h>
#include "main.h"
#define REV(n) ((n << 24) | (((n >> 16) << 24) >> 16) | \
(((n << 16) >> 24) << 16) | (n >> 24))
/**
 * first- first the file to check if is a ELF
 * @e_ident: the ELF struct
 * return: no return is a void func.
 */
void first(unsigned char *e_ident)
{
if (e_ident[0] == 0x7f && e_ident[1] == 'E' &&
e_ident[2] == 'L' && e_ident[3] == 'F')
{
printf("ELF Header:\n");
}
else
{
dprintf(STDERR_FILENO, "Error: this file not is a valid ELF\n");
exit(98);
}
}

/**
 * print_magic - print print_magic number
 * @e_ident: the ELF struct
 * return: no return is a void func.
 */
void print_magic(unsigned char *e_ident)
{
int counter; /* the index to count the print_magic bytes */
int limit;

limit = EI_NIDENT - 1;
printf("  Magic:   ");
counter = 0;
while (counter < limit)
{
printf("%02x ", e_ident[counter]);
counter++;
}
printf("%02x\n", e_ident[counter]);
}
/**
 * print_class - print the class of the ELF
 * @ed: the ELF struct
 * return: no return is a void func.
 */
void print_class(unsigned char *ed)
{
printf("  Class:                             ");
switch (ed[EI_CLASS]) {
case ELFCLASSNONE:
printf("This class is invalid\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", ed[EI_CLASS]);
break;
}
}
/**
 * print_data - print mthe type of data
 * @ed: the ELF struct
 * return: no return is a void func.
 */
void print_data(unsigned char *ed)
{
printf("  Data:                              ");
switch (ed[EI_DATA]) {
case ELFDATANONE:
printf("Unknown data format\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", ed[EI_DATA]);
break;
}
}
/**
 * print_version - print the version of the file
 * @ed: the ELF struct
 * return: no return is a void func.
 */
void print_version(unsigned char *ed)
{
printf("  Version:                           ");
if (ed[EI_VERSION] != EV_CURRENT)
printf("%i\n", ed[EI_VERSION]);
else
printf("%i (current)\n", EV_CURRENT);
}

/**
 * print_osabi - print the print_osabi
 * @ed: the ELF struct
 * return: no return is a void func.
 */

void print_osabi(unsigned char *ed)
{
printf("  OS/ABI:                            ");
switch (ed[EI_OSABI]) {
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
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown: %x>\n", ed[EI_OSABI]);
break;
}
}
/**
 * print_type - print the print_type
 * @et: the ELF struct
 * @ed: data to compare and print.
 * return: no return is a void func.
 */
void print_type(unsigned int et, unsigned char *ed)
{
if (ed[EI_DATA] == ELFDATA2MSB) {
et = et >> 8;
}
printf("  Type:                              ");
switch (et) {
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
printf("<unknown: %x>\n", et);
break;
}

}
/**
* print_helo - print the print_helo point
* @ed: the ELF struct
* @et: the data to print
* return: no return is a void func.
*/
void print_helo(unsigned int et, unsigned char *ed)
{
if (ed[EI_DATA] == ELFDATA2MSB)
et = REV(et);

printf("  Entry point address:               ");
printf("%#x\n", (unsigned int) et);
}

/**
* main - read a ELF file.
* @argc: the number of args
* @argv: the Args
* section header: the header of this function is holberton.h
* Return: 0 in success
*/
int main(int argc, char *argv[])
{
int file_desc, _read_flag, _close_flag;
Elf64_Ehdr *file;

if (argc != 2)
dprintf(STDERR_FILENO, "Usage: error in # of args\n"), exit(98);
file = malloc(sizeof(Elf64_Ehdr));
if (file == NULL)
dprintf(STDERR_FILENO, "error in allocate memory\n"), exit(98);
file_desc = open(argv[1], O_RDONLY);
if (file_desc == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
exit(98);
}
_read_flag = read(file_desc, file, sizeof(Elf64_Ehdr));
if (_read_flag == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
free(file);
exit(98);
}
first(file->e_ident);
print_magic(file->e_ident);
print_class(file->e_ident);
print_data(file->e_ident);
print_version(file->e_ident);
print_osabi(file->e_ident);
printf("  ABI Version:                       ");
printf("%i\n", file->e_ident[EI_ABIVERSION]);
print_type(file->e_type, file->e_ident);
print_helo(file->e_entry, file->e_ident);
free(file);
_close_flag = close(file_desc);
if (_close_flag)
{
dprintf(STDERR_FILENO, "Error: Can't close file_desc\n");
exit(98);
}
return (0);
}
