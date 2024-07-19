#ifndef __GF256_operations_H__
#define __GF256_operations_H__

#include <stdint.h>

typedef uint8_t byte;

extern byte GF256_sum(byte a, byte b);
extern byte GF256_mul(byte a, byte b, byte modulo);

#endif
