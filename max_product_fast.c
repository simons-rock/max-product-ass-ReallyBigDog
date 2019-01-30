#include "max_product.h"

int max_pairwise_product_fast(int *arr, int size){
	/*int index_1 = 0;
	for (int i = 1; i < size; i = i + 1) {
		if (*(arr + i) > *(arr + index_1)) {
			index_1 = i;
		}
	}

	int index_2 = 0;
	if (index_1 == 0) {
		index_2 = 1;
	}

	for (int i = 0; i < size; i = i + 1) {
		if ((*(arr + i) != *(arr + index_1)) && (*(arr + i) > *(arr + index_2)) ){
			index_2 = i;
		}
	}

	return *(arr + index_1) * *(arr + index_2);*/

	int index = 0;
	for (int i = 1; i < size; i = i + 1) {
		if (*(arr + i) > *(arr + index)) {
			index = i;
		}
	}

	int bigdog = *(arr + index);
	*(arr + index) = 1;

	index = 0;
	for (int i = 1; i < size; i = i + 1) {
		if (*(arr + i) > *(arr + index)) {
			index = i;
		}
	}

	return bigdog * *(arr + index);
}

