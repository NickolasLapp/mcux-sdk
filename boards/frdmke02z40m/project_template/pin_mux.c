/*
 * Copyright 2018 NXP.
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v4.1
processor: MKE02Z64xxx4
package_id: MKE02Z64VLH4
mcu_data: ksdk2_0
processor_version: 4.0.0
board: FRDM-KE02Z40M
pin_labels:
- {pin_num: '5', pin_signal: PTE7/FTM2_CLK/FTM1_CH1, label: 'D4[3]/LEDRGB_BLUE', identifier: PTE7_BLUE}
- {pin_num: '6', pin_signal: PTH2/BUSOUT/FTM1_CH0, label: 'D4[4]/LEDRGB_GREEN', identifier: PTH2_GREEN}
- {pin_num: '14', pin_signal: PTH1/FTM2_CH1, label: 'D4[1]/LEDRGB_RED', identifier: PTH1_RED}
- {pin_num: '23', pin_signal: PTD6/KBI1_P6/UART2_RX, label: 'J1[7]/PTD6_TSI/PTD6_RXD2', identifier: PTD6_TSI}
- {pin_num: '22', pin_signal: PTD7/KBI1_P7/UART2_TX, label: 'J1[5]/PTD7_TSI/PTD7_TXD2', identifier: PTD7_TSI}
- {pin_num: '51', pin_signal: PTC7/UART1_TX, label: 'J1[1]/PTC7_TXD1', identifier: DEBUG_UART_TX}
- {pin_num: '52', pin_signal: PTC6/UART1_RX, label: 'J1[3]/PTC6_RXD1', identifier: DEBUG_UART_RX}
- {pin_num: '47', pin_signal: PTA3/KBI0_P3/UART0_TX/I2C0_SCL, label: 'J2[20]/U1[4]/PTA3_ACCEL_SCL/PTA3_D15', identifier: ACCEL_SCL}
- {pin_num: '48', pin_signal: PTA2/KBI0_P2/UART0_RX/I2C0_SDA, label: 'J2[18]/U1[6]/PTA2_ACCEL_SDA/PTA2_D14', identifier: ACCEL_SDA}
- {pin_num: '11', pin_signal: PTB7/I2C0_SCL/EXTAL, label: 'Y1[2]/EXTAL', identifier: EXTAL}
- {pin_num: '12', pin_signal: PTB6/I2C0_SDA/XTAL, label: 'Y1[1]/XTAL_Y', identifier: XTAL}
- {pin_num: '1', pin_signal: PTD1/KBI1_P1/FTM2_CH3/SPI1_MOSI, label: 'J1[12]/PTD1_D5_PWM3'}
- {pin_num: '2', pin_signal: PTD0/KBI1_P0/FTM2_CH2/SPI1_SCK, label: 'J1[8]/PTD0_D3_PWM2'}
- {pin_num: '3', pin_signal: PTH7, label: 'J10[9]/PTH7_GPIO9'}
- {pin_num: '4', pin_signal: PTH6, label: 'J10[11]/PTH6_GPIO10'}
- {pin_num: '7', pin_signal: VDD7, label: 'J3[2]/J7[1]/P3V3_KE02Z'}
- {pin_num: '8', pin_signal: VDDA/VREFH, label: 'J3[2]/J7[1]/P3V3_KE02Z'}
- {pin_num: '9', pin_signal: VREFL, label: GND}
- {pin_num: '10', pin_signal: VSSA/VSS, label: GND}
- {pin_num: '13', pin_signal: VSS13, label: GND}
- {pin_num: '15', pin_signal: PTH0/FTM2_CH0, label: 'J2[4]'}
- {pin_num: '16', pin_signal: PTE6, label: 'J1[13]'}
- {pin_num: '17', pin_signal: PTE5, label: 'J1[15]'}
- {pin_num: '18', pin_signal: PTB5/FTM2_CH5/SPI0_PCS0/ACMP1_OUT, label: 'J2[6]'}
- {pin_num: '19', pin_signal: PTB4/FTM2_CH4/SPI0_MISO/NMI/ACMP1_IN2, label: 'J1[14]/J2[10]'}
- {pin_num: '20', pin_signal: PTC3/FTM2_CH3/ADC0_SE11, label: 'J10[10]'}
- {pin_num: '21', pin_signal: PTC2/FTM2_CH2/ADC0_SE10, label: 'J10[8]'}
- {pin_num: '24', pin_signal: PTD5/KBI1_P5, label: 'J1[6]'}
- {pin_num: '25', pin_signal: PTC1/FTM2_CH1/ADC0_SE9, label: 'J2[3]/J10[6]/PTC1_A2_PWM1'}
- {pin_num: '26', pin_signal: PTC0/FTM2_CH0/ADC0_SE8, label: 'J10[4]'}
- {pin_num: '27', pin_signal: PTF7/ADC0_SE15, label: 'J2[9]/J10[2]/PTF7_A0_ANA0'}
- {pin_num: '28', pin_signal: PTF6/ADC0_SE14, label: 'J2[11]/J10[12]/PTF6_A5_ANA1'}
- {pin_num: '29', pin_signal: PTF5/ADC0_SE13, label: PTF5_THER}
- {pin_num: '30', pin_signal: PTF4/ADC0_SE12, label: PTF4_THER}
- {pin_num: '31', pin_signal: PTB3/KBI0_P7/SPI0_MOSI/FTM0_CH1/ADC0_SE7, label: 'J2[8]/J2[19]/PTB3_D11_ANB2'}
- {pin_num: '32', pin_signal: PTB2/KBI0_P6/SPI0_SCK/FTM0_CH0/ADC0_SE6, label: 'J2[1]/J2[12]'}
- {pin_num: '33', pin_signal: PTB1/KBI0_P5/UART0_TX/ADC0_SE5, label: 'J1[4]/PTB1_D1/PTB1_IRTX'}
- {pin_num: '34', pin_signal: PTB0/KBI0_P4/UART0_RX/ADC0_SE4, label: 'J1[2]'}
- {pin_num: '35', pin_signal: PTF3, label: 'J2[5]/PTF3_LED4'}
- {pin_num: '36', pin_signal: PTF2, label: 'J2[7]/PTF2_LED6'}
- {pin_num: '37', pin_signal: PTA7/FTM2_FLT2/ACMP1_IN1/ADC0_SE3, label: 'J1[16]/J2[17]/PTA7_D7_ANB1'}
- {pin_num: '38', pin_signal: PTA6/FTM2_FLT1/ACMP1_IN0/ADC0_SE2, label: 'J2[15]/PTA6_ANB0'}
- {pin_num: '39', pin_signal: PTE4, label: 'J1[9]'}
- {pin_num: '40', pin_signal: VSS40, label: GND}
- {pin_num: '41', pin_signal: VDD41, label: 'J3[2]/J7[1]/P3V3_KE02Z'}
- {pin_num: '42', pin_signal: PTF1, label: 'J9[11]'}
- {pin_num: '43', pin_signal: PTF0, label: 'J9[13]'}
- {pin_num: '44', pin_signal: PTD4/KBI1_P4, label: 'U1[11]/PTD4_ACCEL_INT1', identifier: ACCEL_INT1}
- {pin_num: '45', pin_signal: PTD3/KBI1_P3/SPI1_PCS0, label: 'U1[9]/PTD3_ACCEL_INT2', identifier: ACCEL_INT2}
- {pin_num: '46', pin_signal: PTD2/KBI1_P2/SPI1_MISO, label: 'J9[9]'}
- {pin_num: '49', pin_signal: PTA1/KBI0_P1/FTM0_CH1/ACMP0_IN1/ADC0_SE1, label: 'J1[10]/PTA1_D4_T1/PTA1_IRRX/PTA1_D4_T1'}
- {pin_num: '50', pin_signal: PTA0/KBI0_P0/FTM0_CH0/ACMP0_IN0/ADC0_SE0, label: 'J2[2]'}
- {pin_num: '53', pin_signal: PTE3/SPI0_PCS0, label: 'J9[7]'}
- {pin_num: '54', pin_signal: PTE2/SPI0_MISO, label: 'J9[5]'}
- {pin_num: '55', pin_signal: PTG3, label: 'J9[15]'}
- {pin_num: '56', pin_signal: PTG2, label: 'J10[3]'}
- {pin_num: '57', pin_signal: PTG1, label: 'J10[1]'}
- {pin_num: '58', pin_signal: PTG0, label: 'J10[5]'}
- {pin_num: '59', pin_signal: PTE1/SPI0_MOSI, label: 'J9[3]'}
- {pin_num: '60', pin_signal: PTE0/SPI0_SCK/FTM1_CLK, label: 'J9[1]'}
- {pin_num: '61', pin_signal: PTC5/FTM1_CH1/RTCO, label: 'J1[11]'}
- {pin_num: '62', pin_signal: PTC4/RTCO/FTM1_CH0/ACMP0_IN2/SWD_CLK, label: 'J10[7]'}
- {pin_num: '63', pin_signal: PTA5/IRQ/FTM0_CLK/RESET, label: 'J5[1]/J7[10]/J9[6]/RST_GTGMCU/SW1'}
- {pin_num: '64', pin_signal: PTA4/ACMP0_OUT/SWD_DIO, label: 'J7[2]/SWD_DIO_TGTMCU'}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_port.h"
#include "fsl_gpio.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
    BOARD_InitDEBUG_UARTPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void)
{
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitLEDsPins:
- options: {coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '5', peripheral: GPIOB, signal: 'GPIO, 7', pin_signal: PTE7/FTM2_CLK/FTM1_CH1, direction: OUTPUT, gpio_init_state: 'true'}
  - {pin_num: '6', peripheral: GPIOB, signal: 'GPIO, 26', pin_signal: PTH2/BUSOUT/FTM1_CH0, direction: OUTPUT, gpio_init_state: 'true'}
  - {pin_num: '14', peripheral: GPIOB, signal: 'GPIO, 25', pin_signal: PTH1/FTM2_CH1, direction: OUTPUT, gpio_init_state: 'true'}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitLEDsPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitLEDsPins(void)
{

    gpio_pin_config_t PTE7_BLUE_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PTB7 (pin 5) */
    GPIO_PinInit(BOARD_INITLEDSPINS_PTE7_BLUE_GPIO_PORT, BOARD_INITLEDSPINS_PTE7_BLUE_PIN, &PTE7_BLUE_config);

    gpio_pin_config_t PTH1_RED_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PTB25 (pin 14) */
    GPIO_PinInit(BOARD_INITLEDSPINS_PTH1_RED_GPIO_PORT, BOARD_INITLEDSPINS_PTH1_RED_PIN, &PTH1_RED_config);

    gpio_pin_config_t PTH2_GREEN_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PTB26 (pin 6) */
    GPIO_PinInit(BOARD_INITLEDSPINS_PTH2_GREEN_GPIO_PORT, BOARD_INITLEDSPINS_PTH2_GREEN_PIN, &PTH2_GREEN_config);
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitTOUCHPins:
- options: {coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '23', peripheral: GPIOA, signal: 'GPIO, 30', pin_signal: PTD6/KBI1_P6/UART2_RX, direction: INPUT}
  - {pin_num: '22', peripheral: GPIOA, signal: 'GPIO, 31', pin_signal: PTD7/KBI1_P7/UART2_TX, direction: INPUT}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitTOUCHPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitTOUCHPins(void)
{

    gpio_pin_config_t PTD6_TSI_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTA30 (pin 23) */
    GPIO_PinInit(BOARD_INITTOUCHPINS_PTD6_TSI_GPIO_PORT, BOARD_INITTOUCHPINS_PTD6_TSI_PIN, &PTD6_TSI_config);

    gpio_pin_config_t PTD7_TSI_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTA31 (pin 22) */
    GPIO_PinInit(BOARD_INITTOUCHPINS_PTD7_TSI_GPIO_PORT, BOARD_INITTOUCHPINS_PTD7_TSI_PIN, &PTD7_TSI_config);
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitDEBUG_UARTPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '52', peripheral: UART1, signal: RX, pin_signal: PTC6/UART1_RX}
  - {pin_num: '51', peripheral: UART1, signal: TX, pin_signal: PTC7/UART1_TX}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitDEBUG_UARTPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitDEBUG_UARTPins(void)
{
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitACCELPins:
- options: {coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '47', peripheral: I2C0, signal: SCL, pin_signal: PTA3/KBI0_P3/UART0_TX/I2C0_SCL}
  - {pin_num: '48', peripheral: I2C0, signal: SDA, pin_signal: PTA2/KBI0_P2/UART0_RX/I2C0_SDA}
  - {pin_num: '44', peripheral: GPIOA, signal: 'GPIO, 28', pin_signal: PTD4/KBI1_P4}
  - {pin_num: '45', peripheral: GPIOA, signal: 'GPIO, 27', pin_signal: PTD3/KBI1_P3/SPI1_PCS0}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitACCELPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitACCELPins(void)
{
    /* pin 47,48 is configured as I2C0_SCL, I2C0_SDA */
    PORT_SetPinSelect(kPORT_I2C0, kPORT_I2C0_SCLPTA3_SDAPTA2);
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitOSCPins:
- options: {coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '11', peripheral: OSC, signal: EXTAL, pin_signal: PTB7/I2C0_SCL/EXTAL}
  - {pin_num: '12', peripheral: OSC, signal: XTAL, pin_signal: PTB6/I2C0_SDA/XTAL}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitOSCPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitOSCPins(void)
{
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/