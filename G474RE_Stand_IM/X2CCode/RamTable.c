/* This file is part of X2C. http://x2c.lcm.at/                                                                       */

/* Date:  2025-12-10 13:39                                                                                            */

/* X2C-Version: 6.4.2961                                                                                              */
/* X2C-Edition: Educational                                                                                           */

#include "RamTable.h"

float32 RamTable_float32[1];

static const float32 RamTable_float32_init[1] = {0.0}; 

void initRamTables()
{
    uint16 i;

    for (i = 0; i < 1; i++)
    {
        RamTable_float32[i] = RamTable_float32_init[i];
    }
}
