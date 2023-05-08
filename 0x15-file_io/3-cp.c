#include "main.h"
/**
 * main - copy a file.
 * @argc: the number of args
 * @argv: the Args.
 * Description: copy a file
 * Return: 0 in success.
 */
int main(int argc, char *argv[])
{
int file_to_fd, file_from_fd, bytes_read, bytes_written;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
file_from_fd = open(argv[1], O_RDONLY);
if (file_from_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (file_to_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
buffer = malloc(sizeof(char) * 1024);
while ((bytes_read = read(file_from_fd, buffer, 1024)) > 0)
{
bytes_written = write(file_to_fd, buffer, bytes_read);
if (bytes_read != bytes_written)
return (-1);
}
if (close(file_from_fd) < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from_fd);
exit(100);
}
if (close(file_to_fd) < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to_fd);
exit(100);
}
free(buffer);
return (0);
}
