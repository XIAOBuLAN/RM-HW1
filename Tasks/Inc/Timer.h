#ifndef __TIMER_H
#define __TIMER_H

#include <stdint.h> 

void Timer_Init(void);

extern volatile uint32_t tick;


#endif /* __TIMER_H */