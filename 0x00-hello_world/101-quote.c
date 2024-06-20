#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Print a quote using the write function
 * write(int fd, const void *buf, size_t count)
 *
 * Return: 1 (failure)
 */
int main(void)
{
    char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(1, quo, sizeof(quo) - 1);
    return (1);
}
