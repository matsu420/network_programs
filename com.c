#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t x;
    uint16_t carry;

    scanf("%x", &x);

    carry = x >> 16;

    printf("carry: %x\n", carry);

    x = ~((x & 0xffff) + carry);

    printf("%4x\n", x);

    return 0;
}
