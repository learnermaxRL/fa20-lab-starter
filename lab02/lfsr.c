#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"
#include "bit_ops.c"


void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    // unsigned int val= get_bit(reg,0) ^ get_bit(reg,2) ;
    // val = val ^(get_bit(reg,3) ^ get_bit(reg,5));
    // *reg = *reg >> 1;
    // set_bit(reg,15,val);

    uint16_t bit = ((*reg) ^ (*reg >> 2) ^ (*reg >> 3) ^ (*reg >> 5)) & 1;
    *reg = *reg >> 1;
    *reg = *reg | (bit << 15);

}

