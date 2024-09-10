#ifndef __KUZNECHIK_H__
#define __KUZNECHIK_H__

#include <stdint.h>

typedef uint8_t byte;

extern void kuznechick_encrypt(const byte *blk, byte *out_blk);
extern void kuznechick_decrypt(const byte *blk, byte *out_blk);

#endif
