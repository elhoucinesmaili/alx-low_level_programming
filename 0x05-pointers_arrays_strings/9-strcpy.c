/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	/* Calculate the length of the source string */
	int len = 0;

	while (src[len] != '\0')
		len++;

	/* Copy characters from src to dest */
	int i;

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	/* Append the null terminator to dest */
	dest[i] = '\0';

	/* Blank line after declarations */

	/* Return the pointer to dest */
	return (dest);
}
