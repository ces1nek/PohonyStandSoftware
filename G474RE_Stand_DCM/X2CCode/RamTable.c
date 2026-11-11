/* This file is part of X2C. web: x2c.lcm.at                                                                          */

/* Date:  2026-11-04 16:53                                                                                            */

/* X2C-Version: 6.6.4297                                                                                              */
/* X2C-Edition: Educational                                                                                           */

/* RULECHECKER_comment("RamTable.c", check_local_object_scope, "see X2C MISRA Deviations, DEV0015", true_no_defect)   */

#include "RamTable.h"

float32 RamTable_float32[5];

static const float32 RamTable_float32_init[5] = {0.0f,0.0f,0.0f,0.0f,0.0f}; 

void initRamTables(void)
{
    uint16 i;

    for (i = 0; i < 5u; i++)
    {
        RamTable_float32[i] = RamTable_float32_init[i];
    }
}
