#include <stdio.h>
/*
	8. Корни из натуральных чисел
	
*/

int main(void) {
	
	int x = 2552525;		// Исходноые число
	int m = 5;				// Корень m - степени
	
	printf("root(%i,%i)=%i",x,m,rooti(x,m));

	return 0;
}

int rooti(int x, int m){
	int a,b,			// Интервал
	ab,					// Одна из границ нового интервала
	xx,k;
	a=1; b=x+1; 		// Исходный интервал
	while (b-a>1){
		ab= (a+b)/2;	// Интервал делится пополам
		
		xx=x;
		for (k=1;k<=m-1;k++){
			xx=xx/ab;
		}
		if (xx>=ab)
			a=ab;
		else
			b=ab;
	}
	return a;
	
}
