#include "hal/hal.h"
#include <xc.h>

void hal_init(void)
{
    LATCbits.LATC1 = 0;
}