 #include "STD_TYPES.h"
 #include "UTILES.h"
 #include "GPIO.h"
 #include "SPI.h"
 #include "GPIO_CONFIG.h"
 #include "SPI_LOCAL.h"
 //#include "avr/delay.h"



UINT8 ZEROF=0, ONEF=0;
  int main(void)
 {
 	GPIO_INIT_PIN_DIRECTION(PORT_A,0,INPUT);
 	GPIO_INIT_PIN_DIRECTION(PORT_A,1,INPUT);

 	GPIO_INIT_PIN_DIRECTION(PORT_B,0,OUTPUT);
 	GPIO_INIT_PIN_DIRECTION(PORT_B,1,OUTPUT);

 	// SET SPI SELECTIVE TO BE LOW AND INPUT TO ENABLE MASTER MODE
 	GPIO_WRITE_PIN_VALUE(PORT_B,0,HIGH);
 	GPIO_WRITE_PIN_VALUE(PORT_B,1,HIGH);


 SPI_MasterInit();

 GPIO_INIT_PIN_DIRECTION(PORT_B,4,INPUT);
 GPIO_INIT_PIN_DIRECTION(PORT_B,5,OUTPUT);
 GPIO_INIT_PIN_DIRECTION(PORT_B,6,INPUT);
 GPIO_INIT_PIN_DIRECTION(PORT_B,7,OUTPUT);




 	 	 	 	 	 //	GPIO_WRITE_PIN_VALUE(PORT_B,6,GPIO_READ_PIN_VALUE(PORT_A,PIN1));//

 	while(1)
 	{
 		if(GPIO_READ_PIN_VALUE(PORT_A,0)==1){

 			ZEROF=1;

 		}
 		if(GPIO_READ_PIN_VALUE(PORT_A,1)==1){

 			ONEF=1;

 		}
 		if(ZEROF)
 		{
 		 	GPIO_WRITE_PIN_VALUE(PORT_B,0,LOW);
 			SPI_MasterTransmit(1);
 			GPIO_WRITE_PIN_VALUE(PORT_B,0,HIGH);
 			ZEROF=0;
 		}
		if(ONEF)
 		{
 		 	GPIO_WRITE_PIN_VALUE(PORT_B,1,LOW);
 			SPI_MasterTransmit(1);
 			GPIO_WRITE_PIN_VALUE(PORT_B,1,HIGH);
 			ONEF=0;
 		}


 	}

 return 0;

 }



