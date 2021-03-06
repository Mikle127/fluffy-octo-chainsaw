/*
 * hal_init.c
 *
 *  Created on: 15.03.2018
 *      Author: Patrick
 */

#include "../tiva_headers.h"
#include "hal_gpio.h"
#include "hal_pwm.h"
#include "hal_usc.h"
#include "hal_us.h"
#include "hal_ssi1.h"
#include "hal_uart1.h"

void hal_init()
{
    halSysClkInit();
    halGpioInit();
    halPWMInit();
    halUsInit();
    halSsi1Int();
    halUart1Init();
    //while(!IntMasterEnable());  //wait until interrupts are enabled, global bit
}
