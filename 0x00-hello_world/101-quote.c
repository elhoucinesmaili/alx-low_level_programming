#include <unistd.h>
#include <stdio.h>
/**
* main - Entry point
*
* Description: print a quote using the write function
* ssize_t write(int fd, const void *buf, size_t count);
*
* Return: 1 (error).
*/

int main(void)
{
fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
return (1);
}
