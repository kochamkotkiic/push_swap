/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 13:18:03 by emurbane          #+#    #+#             */
/*   Updated: 2025/09/30 17:57:35 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	init(size_t *i, int *j, int *start)
{
	*i = 0;
	*j = 0;
	*start = -1;
}

static int	word_count(const char *str, char c)
{
	int	count;
	int	is_word;

	count = 0;
	is_word = 0;
	while (*str)
	{
		if (*str != c && is_word == 0)
		{
			is_word = 1;
			count++;
		}
		else if (*str == c)
			is_word = 0;
		str++;
	}
	return (count);
}

static void	*ft_free(char **str, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(str[i]);
		i ++;
	}
	free(str);
	return (NULL);
}

static char	*fill(const char *str, size_t start, size_t end, int end_plus)
{
	char	*word;
	size_t	i;

	i = 0;
	if (end_plus)
		end++;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	int		start;
	int		j;

	init(&i, &j, &start);
	array = ft_calloc(word_count(s, c) + 1, sizeof(char *));
	if (!array)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && start < 0)
			start = i;
		if ((s[i] == c || !s[i + 1]) && start >= 0)
		{
			array[j] = fill(s, start, i, s[i] != c);
			if (!array[j])
				return (ft_free(array, j));
			start = -1;
			j++;
		}
		i++;
	}
	return (array);
}

/*void	free_split(char **str)
{
	int	i;

	if (!str)
		return;
	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}
void test_split(const char *str, char sep, int test_num)
{
	printf("Test %d: \"%s\"\n", test_num, str);
	char **res = ft_split(str, sep);

	int i = 0;
	while (res && res[i])
	{
		printf("[%s]\n", res[i]);
		i++;
	}

	if (res && res[i] == NULL)
		printf("!\n");

	free_split(res);
	printf("\n");
}



int main(void)
{
	// 1. Normalny string
	test_split("kotek", ' ', 1);

	// 2. Separator na początku i końcu oraz podwójne separatory
	test_split("  kotek  i  pies ", ' ', 2);

	// 3. Pusty string
	test_split("", ' ', 3);

	// 4. String tylko z separatorami
	test_split("     ", ' ', 4);

	// 5. String z jednym słowem, bez separatora
	test_split("jeden", ' ', 5);

	// 6. Wielokrotne separatory w środku
	test_split("kotki,,myszy,,,ptaki", ',', 6);

	// 7. Separator to znak specjalny (\n)
	test_split("kotki\nmyszy\nptaki", '\n', 7);

	// 8. Separator na końcu słowa
	test_split("kotki ", ' ', 8);

	// 9. Separator na końcu słowa
	test_split("kotki, pies ", ' ', 9);

	return 0;
}*/
