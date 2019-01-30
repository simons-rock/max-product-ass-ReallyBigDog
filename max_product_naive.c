#include "max_product.h"

int max(int x, int y) {
	if (x >= y) {
		return x;
	}
	else {
		return y;
	}
}

int max_pairwise_product_naive(int * arr, int size){
	int product = 0;

	for (int i = 0; i < size - 1; i = i + 1) {
		for (int j = i + 1; j < size; j = j + 1) {
			product = max(product, *(arr + i) * *(arr + j));
		}
	}

	return product;
}
