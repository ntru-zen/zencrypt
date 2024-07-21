#include "GF256_operations.h"

byte GF256_mul(byte a, byte b, byte modulo) {
	byte c = 0; /* accumulator for the product of the multiplication */
	while (a != 0 && b != 0) {
        if (b & 1) /* if the polynomial for b has a constant term, add the corresponding a to p */
            c ^= a; /* addition in GF(2^m) is an XOR of the polynomial coefficients */

        if (a & 0x80) /* GF modulo: if a has a nonzero term x^7, then must be reduced when it becomes x^8 */
            a = (a << 1) ^ modulo; /* subtract (XOR) the primitive polynomial modulo */
        else
            a <<= 1; /* equivalent to a*x */
        b >>= 1;
	}
	return c;
}
