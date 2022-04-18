/*
 * SPI.h
 *
 *  Created on: Sep 6, 2021
 *      Author: Ibrahim
 */

#ifndef SPI_H_
#define SPI_H_

void SPI_MasterInit(void);
void SPI_MasterTransmit(UINT8 cData);
void SPI_SlaveInit(void);
UINT8 SPI_SlaveReceive(void);


#endif /* SPI_H_ */
