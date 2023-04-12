#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * count_words - helper function to count the number of words in a string
 * is_whitespace - helper function to determine whether character
 * is a white space or not
 * @s: string to evaluate
 *
 * Return: number of words
 */

int is_whitespace (char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int count_words (char *str)
{
	int count;
	int in_word;

	count = 0;
	in_word = 0;

	while (*str != '\0')
	{
		if (is_whitespace(*str))
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

char **strtow (char *str)
{
	int num_words;
	char **words;
	int in_word;
	char *start;
	int word_index;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	num_words = count_words(str);
	words = malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}

	in_word = 0;
	start = str;
	word_index = 0;

	while (*str != '\0')
	{
		if (is_whitespace(*str))
		{
			if (in_word)
			{
				int word_len;
				char *word;
				word_len = str - start;
				word = malloc((word_len + 1) * sizeof(char));

				if (word == NULL)
				{
					int i;

					for (i = 0; i < word_index; i++)
					{
						free(words[i]);
					}
					free(words);
					return (NULL);
				}
				strncpy(word, start, word_len);
				word[word_len] = '\0';
				words[word_index] = word;
				word_index++;
				in_word = 0;
			}
		}
		else if (!in_word)
		{
			start = str;
			in_word = 1;
		}
		str++;
	}
	if (in_word)
	{
		int word_len;
		char *word;

		word_len = str - start;
		word = malloc((word_len + 1) * sizeof(char));

		if (word == NULL)
		{
			int i;
			for (i = 0; i < word_index; i++)
			{
				free(words[i]);
			}
			free(words);
			return (NULL);
		}
		strncpy(word, start, word_len);
		word[word_len] = '\0';
		words[word_index] = word;
		word_index++;
	}
	words[word_index] = NULL;
	return (words);
}

