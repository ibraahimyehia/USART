#include "STD_TYPES.h"
#include "UTILES.h"
#include "GPIO_LOCAL.h"
#include "SPI_LOCAL.h"
#include "SPI.h"



void SPI_MasterInit(void)
{
												  //Set SS PB4 MOSI FOR PB5, MISO FPR PB6 and SCK PB7
//* Set MOSI and SCK output, all others input */
//SETBIT(DDRB,4);
SETBIT(DDRB,5);
//SETBIT(DDRB,6);
SETBIT(DDRB,7);
//SETBIT(SPCR,3);


/* Enable SPI, Master, set clock rate fck/16 */
SETBIT(SPCR,6); // SPI Enable
SETBIT(SPCR,4); //  Master/Slave Select
SETBIT(SPCR,1);  // SPI Clock Rate fck/16
SETBIT(SPCR,0);

}


void SPI_MasterTransmit(UINT8 cData)
{
/* Start transmission */
SPDR = cData;
/* Wait for transmission complete */
	while (!(GETBIT(SPSR,7)));
}



void SPI_SlaveInit(void)
{
/* Set MISO output, all others input */
	//SETBIT(DDRB,4);
	//SETBIT(DDRB,5);
	SETBIT(DDRB,6);
	//SETBIT(DDRB,7);

	SETBIT(SPCR,6); //SPI Enable

}

UINT8 SPI_SlaveReceive(void)
{
/* Wait for reception complete */
	while (!(GETBIT(SPSR,7)));

/* Return data register */
return SPDR;
}
