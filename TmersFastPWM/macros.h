/*
 * macros.h
 *
 * Created: 1/4/2019 10:54:40 AM
 *  Author: user
 */ 


#ifndef MACROS_H_
#define MACROS_H_


#define SET_BIT(reg,bit) (reg) |= (1<<(bit)) 
#define CLR_BIT(reg,bit) (reg) &= ~(1<<(bit))

#endif /* MACROS_H_ */