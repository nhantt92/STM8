#include "stm8s.h"

int main() {
	int d, i;
	// Configure pins
	PD_DDR = 0xff;
	PD_CR1 = 0xff;
	// Loop
	do {
		PD_ODR ^= 0xff;
		for(d = 0; d < 10000; d++) { 
			for (i=0; i<5;i++);
		}
	} while(1);
}
