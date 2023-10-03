#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j, flg;
	float sum, sumy, x, y;
	sum = 0.0; flg = 0;
	for (i=1; i<=100; i++) {
		sumy = 0.0;
		for (j=1; j<=100; j++) {
			x = funcx(); y = funcy();
			if (x < 0) {
				flg = 1;
				break;
			}
			if (y<0) {
				continue;
			} else {
				sumy = sumy + x*y;
			}
		}
		if (flg == 0) {
			sum = sum + sumy;
		} else {
			break;
		}
	}
//come back to this when you understand more
}
