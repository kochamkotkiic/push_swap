/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:21:57 by emurbane          #+#    #+#             */
/*   Updated: 2025/10/01 15:55:04 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*new_string(const char *s1, size_t start, size_t len)
{
	char	*res;
	size_t	i;

	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = s1[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

static int	is_in_set(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	if (len == 0)
		return (new_string("", 0, 0));
	start = 0;
	end = len - 1;
	while (start <= end && is_in_set(set, s1[start]))
		start++;
	while (end > start && is_in_set(set, s1[end]))
		end--;
	if (start > end)
		return (new_string("", 0, 0));
	return (new_string(s1, start, end - start + 1));
}
/* Test function to check for edge cases
void test_case(const char *s1, const char *set,
const char *expected, int test_num) {
    char *result = ft_strtrim(s1, set);

    printf("Test %d: ", test_num);
    if (result == NULL && expected == NULL) {
        printf("PASS (both NULL)\n");
    } else if (result == NULL || expected == NULL) {
        printf("FAIL - one is NULL, other is not\n");
        printf("  Input: s1='%s', set='%s'\n", s1 ? s1 : "NULL",
		set ? set : "NULL");
        printf("  Expected: %s\n", expected ? expected : "NULL");
        printf("  Got: %s\n", result ? result : "NULL");
    } else if (strcmp(result, expected) == 0) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
        printf("  Input: s1='%s', set='%s'\n", s1, set);
        printf("  Expected: '%s'\n", expected);
        printf("  Got: '%s'\n", result);
    }

    if (result)
        free(result);
}

int main(void) {
    printf("=== Testing ft_strtrim edge cases ===\n\n");

    // Basic tests
    test_case("hello world", "world", "hello ", 1);
    test_case("hello world", "hello", " world", 2);
    test_case("hello world", "", "hello world", 3);
    test_case("", "", "", 4);
    test_case("    hello world     ", " ", "hello world", 5);

    // Edge case: NULL inputs
    printf("\n--- NULL input tests ---\n");
    // These should not crash, but behavior depends on implementation
    // test_case(NULL, "abc", NULL, 6);  // Don't test - undefined behavior
    // test_case("hello", NULL, NULL, 7); // Don't test - undefined behavior

    // Edge case: Empty string after trimming
    printf("\n--- Empty result tests ---\n");
    test_case("abc", "abc", "", 8);
    test_case("aaa", "a", "", 9);
    test_case("   ", " ", "", 10);
    test_case("abcabc", "abc", "", 11);

    // Edge case: String is entirely trimmed
    printf("\n--- Entirely trimmed tests ---\n");
    test_case("abcdefg", "abcdefg", "", 12);
    test_case("aaaabbbb", "ab", "", 13);

    // Edge case: Nothing to trim
    printf("\n--- Nothing to trim tests ---\n");
    test_case("hello", "xyz", "hello", 14);
    test_case("middle", "ab", "middle", 15);

    // Edge case: Only beginning or end needs trimming
    printf("\n--- Partial trim tests ---\n");
    test_case("aaahello", "a", "hello", 16);
    test_case("helloaaa", "a", "hello", 17);
    test_case("aaahelloaaa", "a", "hello", 18);

    // Edge case: Single character strings
    printf("\n--- Single character tests ---\n");
    test_case("a", "a", "", 19);
    test_case("a", "b", "a", 20);
    test_case("a", "", "a", 21);

    // Edge case: Complex set
    printf("\n--- Complex set tests ---\n");
    test_case(" \t\n\rhello world\t\n\r ", " \t\n\r", "hello world", 22);
    test_case("abcdefghello worldzyxwvu", "abcdefgzyxwvu", "hello worl", 23);

    // Edge case: Set contains characters that appear in middle
    printf("\n--- Set contains middle characters ---\n");
    test_case("abchelloabcworldabc", "abc", "helloabcworld", 24);
    test_case("xyzhelLoxyzworLdxyz", "xyz", "helLoxyzworLd", 25);

    return 0;
}*/
