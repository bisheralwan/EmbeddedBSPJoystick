#include <stdint.h>
#include "msp.h"
#include "../inc/bsp.h"

int main() {
	
	WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;

	//positions for the quadrants
	uint16_t x = 0;
	uint16_t y = 0;
	uint8_t select = 1;

	//frequencies for each quadrant
	uint16_t q0 = (3000000/880) - 1;
	uint16_t q1 = (3000000/880) - 1;
	uint16_t q2 = (3000000/988) - 1;
	uint16_t q3 = (3000000/1109) - 1;
	uint16_t q4 = (3000000/1175) - 1;
	uint16_t q5 = (3000000/1319) - 1;
	uint16_t q6 = (3000000/1480) - 1;
	uint16_t q7 = (3000000/1661) - 1;
	uint16_t q8 = (3000000/1760) - 1;
	
	BSP_Joystick_Init(); //initializing joystick
	BSP_Buzzer_Init((uint16_t) 0); //initializing buzzer
	
	while (1) {
		BSP_Joystick_Input(&x, &y, &select);
		
		if (x <= 341) {
			if (y <= 341) {
				//Quadrant 6
				TA0CCR0 = q6;//frequency 1480
				BSP_Buzzer_Set(512);//Duty Cycle 50% of 1023
			}
			if ((y > 341) && (y <= 682)) {
				//Quadrant 4
				TA0CCR0 = q4;//frequency 1175
				BSP_Buzzer_Set(512);//Duty Cycle 50% of 1023

			}
			if ((y > 682) && (y <= 1023)) {
				//Quadrant 1
				TA0CCR0 = q1; //frequency 880
				BSP_Buzzer_Set(512);//Duty Cycle 50% of 1023

			}
		}
		
		
		
		if ((x > 341) && (x <= 682)) {
			if (y <= 341) {
				//Quadrant 7
				TA0CCR0 = q7; frequency 1661
				BSP_Buzzer_Set(512);//Duty Cycle 50% of 1023

			}
			if ((y > 341) && (y <= 682)) {
				//Quadrant 0
				TA0CCR0 = q0; frequency 880
				BSP_Buzzer_Set(0);//Duty Cycle 0% of 1023

			}
			if ((y > 682) && (y <= 1023)) {
				//Quadrant 2
TA0CCR0 = q2; frequency 988
				BSP_Buzzer_Set(512);//Duty Cycle 50% of 1023

			}
		}
		
		
		
		if ((x > 682) && (x <= 1023)) {
			if (y <= 341) {
				//Quadrant 8
				TA0CCR0 = q8; //frequency 1760
				BSP_Buzzer_Set(512);//Duty Cycle 50% of 1023

			}
			if ((y > 341) && (y <= 682)) {
				//Quadrant 5
				TA0CCR0 = q5; //frequency 1319
				BSP_Buzzer_Set(512);//Duty Cycle 50% of 1023

			}
			if ((y > 682) && (y <= 1023)) {
				//Quadrant 3
				TA0CCR0 = q3; //frequency 1109
				BSP_Buzzer_Set(512);//Duty Cycle 50% of 1023

			}
		}
		
		
		
	}

}
