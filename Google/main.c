// to answer google interview question generate rand7 from rand5
#include <stdio.h>
#define rand5 rand()%5

int rand7() {

   	return (rand5 + rand5 + rand5 + rand5 + rand5 + rand5 + rand5 + rand5 + rand5 + rand5 + rand5 + rand5 + rand5 + rand5) % 7; // 2 wont work, since the chances will not be close
	int a = rand5;
	int b = rand5;
	while (b == 0) b = rand5;
	if (b > 2) return a;
	else return a + b;
}

int main(void) {
	int stat[5] = { 0 }; //initializer list
	for (int i = 0; i < 1000000; i++) {
		int t = rand5;
		if (t == 0) stat[0]++;
		if (t == 1) stat[1]++;
		if (t == 2) stat[2]++;
		if (t == 3) stat[3]++;
		if (t == 4) stat[4]++;
	}
		//printf("%3d", rand5);
	printf("Rand5 results:\n");
	for (int i = 0; i < 5; i++) printf("%d: %d\n", i, stat[i]);
	printf("\n");
	
	int s7[7] = { 0 };
	for (int i = 0; i < 1000000; i++) {
		int t = rand7();
		s7[t]++;
	}

	printf("Rand7 results:\n");
	for (int i = 0; i < 7; i++) printf("%d: %d\n", i, s7[i]);
	printf("\n");
}