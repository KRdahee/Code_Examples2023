#include <stdio.h>
main() {
	int i, a[5], cnt = 0;
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < 5; i++) {
		if (a[i] % 2 != 0)
			cnt = cnt + 1;
	}
	printf("홀수의 개수 : %d개", cnt);
	scan.close();
}