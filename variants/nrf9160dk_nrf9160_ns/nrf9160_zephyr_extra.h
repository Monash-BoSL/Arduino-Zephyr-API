/*
 * Copyright (c) 2023 Dejan Deletic
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef INCLUDE_NRF1960_ZEPHYR_EXTRA_H
#define INCLUDE_NRF1960_ZEPHYR_EXTRA_H

#include <zephyr/kernel.h>

#ifdef CONFIG_ADC
    void analogReadResolution (uint8_t bits);
#endif

#endif
