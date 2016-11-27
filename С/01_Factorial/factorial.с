#include <stdio.h>
/*
	Вычисление Факториала целого числа;
	
*/
int main(void) {
	
	// В цикле выводим факториал от 1 до 10
	for (unsigned int i=1;i<=10;i++){
		printf("f(%i)=%i\n",i,factorial(i));
	}
	return 0;
}

 /*
 	Функция вычисления факторила
 		Вход:
 			n - целое число
 		Выход
 			f - факториал числа n
 */	
 int factorial(unsigned int n){
	
	// Условие избавляет от лишних циклов
	if (n>2){
		unsigned int i,f=2;
		for (i=3;i<=n;i++){
			f=f*i;
		}
		return f;
	}else 
		return n;
	
}

