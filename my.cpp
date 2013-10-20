#include "CppUTest/CommandLineTestRunner.h"
#include "CppUTest/TestPlugin.h"
#include "CppUTest/TestRegistry.h"
#include "ch.h"
#include "hal.h"
#include "test.h"

extern "C"{
void dummy_func(void){
  while (TRUE) {
    palSetPad(GPIOD, GPIOD_LED3);       /* Orange.  */
    palSetPad(GPIOD, GPIOD_LED5);       /* Orange.  */

    //
    // calling chThdSleepMilliseconds() will cause link error
    //
    chThdSleepMilliseconds(200);
    palClearPad(GPIOD, GPIOD_LED3);     /* Orange.  */
    palClearPad(GPIOD, GPIOD_LED5);     /* Orange.  */
//  chThdSleepMilliseconds(200);
  }
}
};
