#include <stdio.h>

int main() {
	int num = 0, odd = 0 , even = 0;
	while (1) {
		scanf("%d", &num);
		
		if(num == 0)
			break;
			
		num%2 == 0? even++: odd++;
	}
	
	printf("odd : %d\neven : %d", odd, even);
	return 0;
}