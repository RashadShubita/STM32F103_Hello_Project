/*******************************************************************************
 * @file    gpio.c
 * @author  Rashad Shubita
 * @email   shubitarashad@gmail.com
 * @date    15.01.2019
 *
 * @brief   Some examples on how to use STM32 GPIOs
 * @note
 *
@verbatim
Copyright (C) 2019, Rashad Shubita

This program is free software: you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation, either version 3 of the License, or any later version.

This program is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program.  If not, see <http://www.gnu.org/licenses/>.
@endverbatim
*******************************************************************************/


/* Includes */
#include "gpio.h"

/**
 * @brief   LED initialization function
 * @note    Yellow_LED -> PC13
 * @param   None
 * @retval  None
 */
void GPIO_OnBoard_Init_LED()
{
 /* Enable clock for GPIOC */
    RCC ->APB2ENR |= RCC_APB2ENR_IOPCEN;
 /* Configure PC.13 in output mode, max speed 2 MHz. */
    GPIOC ->CRH &= ~GPIO_CRH_MODE13;
    GPIOC ->CRH |=  GPIO_CRH_MODE13_1;
 /* Configure PC.13 as  general purpose output push-pull */
    GPIOC ->CRH  &= ~GPIO_CRH_CNF13;
}

