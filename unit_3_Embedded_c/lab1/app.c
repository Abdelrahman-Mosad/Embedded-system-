#include "uart.h"
unsigned char string_buffer[20] = "Abdelrahman" ;
void main(void)
{
	Uart_send_string(string_buffer);
}	
