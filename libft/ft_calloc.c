/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 16:43:16 by emurbane          #+#    #+#             */
/*   Updated: 2025/09/29 12:09:01 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tmp;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	else if (size == 0 || nmemb == 0)
	{
		tmp = malloc (0);
		return (tmp);
	}
	tmp = malloc(nmemb * size);
	if (!tmp)
	{
		return (NULL);
	}
	ft_memset(tmp, 0, nmemb * size);
	return (tmp);
}
/*void test_case(const char *desc, size_t nmemb, size_t size)
{
    void *p = ft_calloc(nmemb, size);

    printf("%-30s: nmemb=%zu size=%zu -> %s\n",
           desc, nmemb, size, (p ? "OK (not NULL)" : "NULL"));

    free(p); // bezpieczne nawet gdy p==NULL
}

int main(void)
{
    // 🔹 1. Najprostszy przypadek
    test_case("Normal allocation", 5, sizeof(int));

    // 🔹 2. Jeden z wymiarów to 0
    test_case("Zero nmemb", 0, sizeof(int));
    test_case("Zero size", 10, 0);

    // 🔹 3. Bardzo duże wartości
    test_case("Huge nmemb * size overflow", SIZE_MAX, 2);
    test_case("Huge nmemb * size overflow 2", SIZE_MAX/2 + 2, 2);

    // 🔹 4. Granica bez overflow
    test_case("Boundary no overflow", SIZE_MAX/sizeof(int), sizeof(int));

    // 🔹 5. Alokacja 1 bajtu (najmniejsza niezerowa)
    test_case("One byte", 1, 1);

    test_case("64 KB allocation", 1024, 64);
    // 🔹 7. Sprawdzenie czy faktycznie jest wyzerowane
    int *arr = ft_calloc(5, sizeof(int));
    if (arr)
    {
        int ok = 1;
        for (int i = 0; i < 5; i++)
            if (arr[i] != 0) ok = 0;
        printf("Check zero-initialization    : %s\n", ok ? "OK" : "FAIL");
        free(arr);
    }
	int *arr1 = ft_calloc(0, sizeof(int));
	if (!arr1)
    	printf("Zero nmemb allocation returned NULL (OK)\n");
	else
    	printf("Zero nmemb allocation returned pointer OK,
        do not dereference\n");


    return 0;
}*/
