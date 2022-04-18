/*
 * SPI_LOCAL.h
 *
 *  Created on: Sep 4, 2021
 *      Author: Ibrahim
 */

#ifndef SPI_LOCAL_H_
#define SPI_LOCAL_H_

//133

#define SPDR *((volatile UINT8*)(0x2F))
#define SPSR *((volatile UINT8*)(0x2E))
#define SPCR *((volatile UINT8*)(0x2D))



#endif /* SPI_LOCAL_H_ */
