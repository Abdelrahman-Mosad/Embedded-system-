/*
 ============================================================================
 Name        : main.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdint.h>
//register address

#define RCC_BASE 0x40021000
#define portA_BASE 0x40010800

#define RCC_APB2ENR *(volatile uint32_t *) (RCC_BASE + 0x18)
#define GPIOA_CRH *(volatile uint32_t *) (portA_BASE + 0x04)
#define GPIOA_ODR *(volatile uint32_t *) (RCC_BASE + 0x0C)

int main(void){

 RCC_APB2ENR |= 1<<2;
 GPIOA_CRH &= 0xff0fffff;
 GPIOA_CRH |= 0x00200000;
 while (1)
 {
	 GPIOA_ODR |= 1<<13;
	 for (int i=0; i<500;i++);
	 GPIOA_ODR &= ~(1<<13);
	 for (int i=0; i<500;i++);

 }


	return 0;
}
