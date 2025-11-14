// function definitions
int factorial(int n) {
	if (n == 0)return 1;
	else return n * factorial(n - 1);
}

int n_choose_k(int n, int k) {
	return factorial(n) / factorial(k) / factorial(n - k);
}
void pascal_triangle_by_shoulder_add(int* a, int rows, int current_row) {
	for (int i =0; i<=current_row; i++) {
		printf("%5d, a[]");
	}
	if (current_row == rows) return;
//create next row
	int b[100] ={1};
	for (int i =0; i<=current_row; i++) {
		b[i] = a[i-1] + a[i];
	}
    b[current_row + 1] = 1;
	printf("\n");
//recursive call
pascal_triangle_by_shoulder_add(b, rows, current_row +1);
}


