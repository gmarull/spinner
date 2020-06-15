/**
 * @file
 *
 * DT definitions for STM32 ADC (F3XX series)
 *
 * Copyright (c) 2021 Teslabs Engineering S.L.
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _DTS_BINDINGS_INVERTER_STM32F3XX_H_
#define _DTS_BINDINGS_INVERTER_STM32F3XX_H_

/* Ref. RM0365, Rev. 8, Table 88. */

#define _STM32_ADC_JEXT_POS		2U

#define STM32_ADC_INJ_TRIG_TIM1_TRGO	(0U << _STM32_ADC_JEXT_POS)
#define STM32_ADC_INJ_TRIG_TIM1_CC4	(1U << _STM32_ADC_JEXT_POS)
#define STM32_ADC_INJ_TRIG_TIM2_TRGO	(2U << _STM32_ADC_JEXT_POS)
#define STM32_ADC_INJ_TRIG_TIM2_CC1	(3U << _STM32_ADC_JEXT_POS)
#define STM32_ADC_INJ_TRIG_TIM3_CC4	(4U << _STM32_ADC_JEXT_POS)
#define STM32_ADC_INJ_TRIG_TIM4_TRGO	(5U << _STM32_ADC_JEXT_POS)
#define STM32_ADC_INJ_TRIG_EXTI15	(6U << _STM32_ADC_JEXT_POS)
#define STM32_ADC_INJ_TRIG_TIM1_TRGO2	(8U << _STM32_ADC_JEXT_POS)
#define STM32_ADC_INJ_TRIG_TIM3_CC3	(11U << _STM32_ADC_JEXT_POS)
#define STM32_ADC_INJ_TRIG_TIM3_TRGO	(12U << _STM32_ADC_JEXT_POS)
#define STM32_ADC_INJ_TRIG_TIM3_CC1	(13U << _STM32_ADC_JEXT_POS)
#define STM32_ADC_INJ_TRIG_TIM6_TRGO	(14U << _STM32_ADC_JEXT_POS)
#define STM32_ADC_INJ_TRIG_TIM15_TRGO	(15U << _STM32_ADC_JEXT_POS)

#endif /* _DTS_BINDINGS_INVERTER_STM32F3XX_H_ */