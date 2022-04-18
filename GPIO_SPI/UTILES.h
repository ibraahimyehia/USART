/*
 * UTILES.h
 *
 *  Created on: Aug 27, 2021
 *      Author: ibrah
 */

#ifndef UTILES_H_
#define UTILES_H_

#define SETBIT(REG , BITno)              REG |= (1 << BITno)
#define CLRBIT(REG , BITno)              REG &= ~(1 << BITno)
#define GETBIT(REG , BITno)              (REG >> BITno) & (1)
#define ASSIGNBIT(REG , BITno , VALUE)   REG = (REG & ~(1 << BITno))|(VALUE << BITno)
#define TOGGLEBIT(REG , BITno)           REG ^= (1 << BITno)

#define SETPORT(REG)                     REG |= 0xFF
#define CLRPORT(REG)                     REG &= 0x00
#define GETPORT(REG)                     REG & 0xFF
#define ASSIGNPORT(REG , VALUE)          REG = ((REG & 0x00)|VALUE)
#define TOGGLEPORT(REG)                  REG ^= 0xFF

#define rotate_left(reg , rotate_number , size)   ((reg << rotate_number) | reg >> (size+(-rotate_number)))
#define rotate_right(reg , rotate_number , size)   ((reg >> rotate_number) | reg << (size+(-rotate_number)))

#endif /* UTILES_H_ */
