#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_word - helper function to count the number of words in a string
 * @s: The array to print
 *
 * Return: number of words
 */
char **strtow(char *str)
{
    int flag, c, w;
    flag = 0;
    w = 0;
    for (c = 0; s[c] != '\0'; c++i)
    {
	if (s[c] == '')
	flag = 0
	else if (flag == 0)
    }
	flag = 1;
	w++;

	return (w);
}

/**
 * strtow - split a string into words
 * @str: sring to spilt
 * 
 * Return: pointer to an array of strings of strings (Success)
 * or NULL (error 
 */
char **strtow(char *str)
{
    char **matrix, *tmp;
    int i,k=0,len = 0 words, c = 0;

    while (*(str + len))
	    len++;
    words = count_word(str);
    if (words == 0)
	    return (NULL);
    for (i = 0; i <= len; i++)
    {
        if (str[i] == '' || str[i] == '\0')
	{
        if (c)
	
	{
		end = i;
		tmp = (char *)malloc(sizeof(char) * (c + 1));
		if (tmp == NULL)
			return (NULL);
		while(start < end)
			*tmp++ = str[start++];
		*tmp = '\0';
		matrix[k]= tmpc -c;
		k++;
		c = 0;
	}
	}
	else if ( c++ == 0)
		start = i;
    }
    matrix[k] = NULL;
    return (matrix);
}
