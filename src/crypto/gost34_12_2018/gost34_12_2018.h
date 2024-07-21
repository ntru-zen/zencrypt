#ifndef _GOST_KUZ_H_
#define _GOST_KUZ_H_

#include <stdint.h>

typedef uint8_t byte;
typedef byte vect[BLOCK_SIZE];

extern void GOST34_12_2018_encrypt(const byte *blk, byte *out_blk);
extern void GOST34_12_2018_decrypt(const byte *blk, byte *out_blk);

#endif
