/*
 * Acadnet 2016 - Problema DEMO
 * Cod Initial (debug needed)
 * Autor: Filip Ion-Dorinel
 */

#include <iostream>
#include <stdint.h>

#define MAXSIZE 1000

void read_matrix(uint32_t mat[MAXSIZE][MAXSIZE], size_t size)
{
	for(size_t i = 0; i < size; i++)
		for(size_t j = 1; j < size; j++)
			std::cin >> mat[i][j];
}

uint64_t compute_sum(uint32_t mat[MAXSIZE][MAXSIZE], size_t size)
{
	uint64_t sum = 0;
	for (size_t i = 0; i < size; i++)
		for (size_t j = 0; j < size; j++)
			sum += mat[i][j];

	return sum;
}

uint32_t get_special_value(uint32_t mat[MAXSIZE][MAXSIZE], size_t size)
{
	uint32_t rez = 0;

	for (size_t i = 0; i < size; i++)
		rez ^= mat[i][i];

	return rez;
}

int main (void)
{
	uint64_t sum;
	uint32_t mat[MAXSIZE][MAXSIZE];
	size_t size;

	std::cin >> size;
	read_matrix(mat, size);

	sum = compute_sum(mat, size);
	sum += get_special_value(mat, size);

	std::cout << sum << std::endl;

	return 0;
}