/* Sumar dos variables de tipo entero, 
por medio de apuntadores y mostrar el resultado 
y la dirección de memoria de 
cada uno de los valores incluido el resultado.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int v1,v2, vsuma;//declaramos las variables tipo entero
	int *p_v1, *p_v2, *p_vsuma;//declaramos los punteros
	
	printf("ingrese un numero entero variable v1: \n");
	scanf("%d",&v1);
	
	printf("ingrese un numero entero variable v2: \n");
	scanf("%d",&v2);
	
	vsuma= v1+v2;
	
	printf("v1+v2=%d \n",vsuma);
	//se asigna el valor de los punteros.
	p_v1=&v1;
	p_v2=&v2;
	
	printf("*p_v1+*p_v2=%d\n",*p_v1+*p_v2);
	
	p_vsuma =&vsuma;
	
	printf("direccion de v1 es%p\n direccion de v2 es%p\n y de vsuma es%p\n\n",p_v1,p_v2,p_vsuma);
	
	
	
	
	
	
	return 0;
}
