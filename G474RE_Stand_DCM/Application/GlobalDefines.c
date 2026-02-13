/*
 * $LastChangedRevision: 2505 $
 * $LastChangedDate:: 2022-03-03 18:05:57 +0100#$
 *
 * This file is part of X2C. http://x2c.lcm.at/
 *
 * ===== CONFIDENTIAL =====
 * The content of this file is confidential according to the X2C Licence Terms and Conditions.
 *
 * Copyright (c) 2022, Linz Center of Mechatronics GmbH (LCM) http://www.lcm.at/
 * All rights reserved.
 */
#include "GlobalDefines.h"

/* TableStruct pointer is defined in Bootloader -> must not be zero-initialized */
//volatile tTableStruct __attribute__ ((section (".tablestruct"))) *TableStruct;

/* X2C maintenance structure */
volatile tTableStruct TheTableStruct;
volatile tTableStruct* TableStruct = &TheTableStruct;
