/**
 ******************************************************************************
 * @file    Templates/Src/main.c
 * @author  MCD Application Team
 * @version V1.0.3
 * @date    22-April-2016
 * @brief   STM32F7xx HAL API Template project
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; COPYRIGHT(c) 2016 STMicroelectronics</center></h2>
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *   1. Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright notice,
 *      this list of conditions and the following disclaimer in the documentation
 *      and/or other materials provided with the distribution.
 *   3. Neither the name of STMicroelectronics nor the names of its contributors
 *      may be used to endorse or promote products derived from this software
 *      without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************
 */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include <string.h>

/** @addtogroup STM32F7xx_HAL_Examples
 * @{
 */

/** @addtogroup Templates
 * @{
 */

/* Private typedef -----------------------------------------------------------*/
TIM_HandleTypeDef    Time_handle;           //the timer's config structure
TIM_HandleTypeDef Sensor_Time_handle;
TIM_OC_InitTypeDef sConfig;
TIM_OC_InitTypeDef Sensor_Config;
GPIO_InitTypeDef led;
GPIO_InitTypeDef tda0;
GPIO_InitTypeDef fan;
GPIO_InitTypeDef sensor;


/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
UART_HandleTypeDef uart_handle;


/* Private function prototypes -----------------------------------------------*/
void TIM3_IRQHandler();
void EXTI2_IRQHandler();
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);
void HAL_TIM_PulseFinishedCallback(TIM_HandleTypeDef *Sensor_Time_handle);


void LED_ini(GPIO_TypeDef *port, uint32_t pin_number) {

	led.Pin = pin_number;
	led.Mode = GPIO_MODE_OUTPUT_PP;
	led.Pull = GPIO_PULLUP;
	led.Speed = GPIO_SPEED_HIGH;

	HAL_GPIO_Init(port, &led);      // initialize the pin on GPIOA port with HAL
}

void Sensor_ini(GPIO_TypeDef *port, uint32_t pin_number) {
	sensor.Pin = pin_number;
	sensor.Mode = GPIO_MODE_AF_PP;
	sensor.Pull = GPIO_PULLUP;
	sensor.Speed = GPIO_SPEED_FAST;
	sensor.Alternate = GPIO_AF2_TIM3;

	HAL_GPIO_Init(port, &sensor);
}

void PWM_LED_ini(GPIO_TypeDef *port, uint32_t pin_number) {

	led.Pin = pin_number;
	led.Mode = GPIO_MODE_AF_PP;
	led.Pull = GPIO_NOPULL;
	led.Speed = GPIO_SPEED_HIGH;
	led.Alternate = GPIO_AF1_TIM2;

	HAL_GPIO_Init(port, &led);     // initialize the pin on GPIOA port with HAL
}

void PWM_FAN_ini(GPIO_TypeDef *port, uint32_t pin_number) {

	fan.Pin = pin_number;
	fan.Mode = GPIO_MODE_AF_PP;
	fan.Pull = GPIO_PULLUP;
	fan.Speed = GPIO_SPEED_HIGH;
	fan.Alternate = GPIO_AF1_TIM2;

	HAL_GPIO_Init(port, &fan);     // initialize the pin on GPIOA port with HAL
}

void Button1_ini(GPIO_TypeDef *port, uint32_t pin_number) {

		GPIO_InitTypeDef conf1;                // create the configuration struct
		conf1.Pin = pin_number;
		conf1.Pull = GPIO_PULLUP;
		conf1.Speed = GPIO_SPEED_FAST;         // port speed to fast
		conf1.Mode = GPIO_MODE_IT_RISING;

		HAL_GPIO_Init(port, &conf1);          // call the HAL init
}

void Button2_ini(GPIO_TypeDef *port, uint32_t pin_number) {

		GPIO_InitTypeDef conf2;                // create the configuration struct
		conf2.Pin = pin_number;
		conf2.Pull = GPIO_PULLUP;
		conf2.Speed = GPIO_SPEED_FAST;         // port speed to fast
		conf2.Mode = GPIO_MODE_IT_RISING;

		HAL_GPIO_Init(port, &conf2);          // call the HAL init
}



void Base_Timer() {

	Time_handle.Instance               = TIM1;
	Time_handle.Init.Period            = 4000;
	Time_handle.Init.Prescaler         = 54000;
	Time_handle.Init.ClockDivision     = TIM_CLOCKDIVISION_DIV1;
	Time_handle.Init.CounterMode       = TIM_COUNTERMODE_UP;

	HAL_TIM_Base_Init(&Time_handle);
	HAL_TIM_Base_Start_IT(&Time_handle);
}

void Sensor_Timer() {

	Sensor_Time_handle.Instance               = TIM3;
	Sensor_Time_handle.Init.Period            = 1000;
	Sensor_Time_handle.Init.Prescaler         = 50000;
	Sensor_Time_handle.Init.ClockDivision     = TIM_CLOCKDIVISION_DIV1;
	Sensor_Time_handle.Init.CounterMode       = TIM_COUNTERMODE_UP;

	//HAL_TIM_Base_Init(&Sensor_Time_handle);
	//HAL_TIM_Base_Start_IT(&Sensor_Time_handle);
	HAL_TIM_IC_Init(&Sensor_Time_handle);
	HAL_TIM_IC_ConfigChannel(&Sensor_Time_handle, &sConfig, TIM_CHANNEL_1);
	HAL_TIM_IC_Start_IT(&Sensor_Time_handle, TIM_CHANNEL_1);
}

void PWM_timer() {

	Time_handle.Instance               = TIM2;
	Time_handle.Init.Period            = 1000;
	Time_handle.Init.Prescaler         = 50000;
	Time_handle.Init.ClockDivision     = TIM_CLOCKDIVISION_DIV1;
	Time_handle.Init.CounterMode       = TIM_COUNTERMODE_DOWN;

	  sConfig.OCMode = TIM_OCMODE_PWM1;
	  sConfig.Pulse = 0;

	  HAL_TIM_PWM_Init(&Time_handle);
	  HAL_TIM_PWM_ConfigChannel(&Time_handle, &sConfig, TIM_CHANNEL_1);
	  HAL_TIM_PWM_Start(&Time_handle, TIM_CHANNEL_1);
}

#ifdef __GNUC__
/* With GCC/RAISONANCE, small printf (option LD Linker->Libraries->Small printf
 set to 'Yes') calls __io_putchar() */
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNUC__ */

static void SystemClock_Config(void);
static void Error_Handler(void);
static void MPU_Config(void);
static void CPU_CACHE_Enable(void);
int Pulse_counter = 0;
uint32_t Timer_start = 0;
uint32_t Timer_end = 0;

/* Private functions ---------------------------------------------------------*/

/**
 * @brief  Main program
 * @param  None
 * @retval None
 */
int main(void) {
	/* This project template calls firstly two functions in order to configure MPU feature
	 and to enable the CPU Cache, respectively MPU_Config() and CPU_CACHE_Enable().
	 These functions are provided as template implementation that User may integrate
	 in his application, to enhance the performance in case of use of AXI interface
	 with several masters. */

	/* Configure the MPU attributes as Write Through */
	MPU_Config();

	/* Enable the CPU Cache */
	CPU_CACHE_Enable();

	/* STM32F7xx HAL library initialization:
	 - Configure the Flash ART accelerator on ITCM interface
	 - Configure the Systick to generate an interrupt each 1 msec
	 - Set NVIC Group Priority to 4
	 - Low Level Initialization
	 */
	HAL_Init();

	/* Configure the System clock to have a frequency of 216 MHz */
	SystemClock_Config();

	/* Add your application code here
	 */
	BSP_LED_Init(LED_GREEN);
	/**
		 * Configure UART
		 */

	uart_handle.Init.BaudRate = 115200;
	uart_handle.Init.WordLength = UART_WORDLENGTH_8B;
	uart_handle.Init.StopBits = UART_STOPBITS_1;
	uart_handle.Init.Parity = UART_PARITY_NONE;
	uart_handle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	uart_handle.Init.Mode = UART_MODE_TX_RX;

	BSP_COM_Init(COM1, &uart_handle);


	__HAL_RCC_GPIOF_CLK_ENABLE();
	__HAL_RCC_GPIOC_CLK_ENABLE();
	__HAL_RCC_GPIOA_CLK_ENABLE();
	__HAL_RCC_GPIOI_CLK_ENABLE();
	__HAL_RCC_GPIOB_CLK_ENABLE();
	__HAL_RCC_TIM2_CLK_ENABLE();
	__HAL_RCC_TIM3_CLK_ENABLE();


	PWM_FAN_ini(GPIOA, GPIO_PIN_15);
	PWM_timer();
	Sensor_Timer();
	Sensor_ini(GPIOB, GPIO_PIN_4);
	Button1_ini(GPIOI, GPIO_PIN_2);
	Button2_ini(GPIOI, GPIO_PIN_3);

	HAL_NVIC_SetPriority(EXTI2_IRQn, 0x0F, 0x00);
	HAL_NVIC_EnableIRQ(EXTI2_IRQn);

	HAL_NVIC_SetPriority(EXTI3_IRQn, 0x0F, 0x00);
	HAL_NVIC_EnableIRQ(EXTI3_IRQn);

	HAL_NVIC_SetPriority(TIM3_IRQn, 0x0F, 0x01);
	HAL_NVIC_EnableIRQ(TIM3_IRQn);

	printf("\n-----------------WELCOME-----------------\r\n");
	printf("**********in STATIC interrupts WS**********\r\n\n");

		while (1) {

		}
}

void TIM3_IRQHandler() {
	HAL_TIM_IRQHandler(&Sensor_Time_handle);
}

void EXTI2_IRQHandler() {
	HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_2);
}

void EXTI3_IRQHandler() {
	HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_3);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {
	if (GPIO_Pin == GPIO_PIN_2) {
		if (TIM2->CCR1 <= 995) {
			TIM2->CCR1 += 5;
			printf("%lu\n", TIM2->CCR1);
		}
	} else if (GPIO_Pin == GPIO_PIN_3) {
		if (TIM2->CCR1 >= 5) {
			TIM2->CCR1 -= 5;
			printf("%lu\n", TIM2->CCR1);
		}
	}

}

void HAL_TIM_PulseFinishedCallback (TIM_HandleTypeDef *Sensor_Time_handle) {
	Pulse_counter++;

	if (Pulse_counter == 1) {
		Timer_start = HAL_GetTick();
	}
	if (Pulse_counter == 4) {
			Timer_end = HAL_GetTick();
			printf("RPM: %lu\n", (Timer_end - Timer_start));
			Timer_start = 0;
			Timer_end = 0;
			Pulse_counter = 0;
	}
}




/**
 * @brief  Retargets the C library printf function to the USART.
 * @param  None
 * @retval None
 */
PUTCHAR_PROTOTYPE {
	/* Place your implementation of fputc here */
	/* e.g. write a character to the EVAL_COM1 and Loop until the end of transmission */
	HAL_UART_Transmit(&uart_handle, (uint8_t *) &ch, 1, 0xFFFF);

	return ch;
}

/**
 * @brief  System Clock Configuration
 *         The system Clock is configured as follow :
 *            System Clock source            = PLL (HSE)
 *            SYSCLK(Hz)                     = 216000000
 *            HCLK(Hz)                       = 216000000
 *            AHB Prescaler                  = 1
 *            APB1 Prescaler                 = 4
 *            APB2 Prescaler                 = 2
 *            HSE Frequency(Hz)              = 25000000
 *            PLL_M                          = 25
 *            PLL_N                          = 432
 *            PLL_P                          = 2
 *            PLL_Q                          = 9
 *            VDD(V)                         = 3.3
 *            Main regulator output voltage  = Scale1 mode
 *            Flash Latency(WS)              = 7
 * @param  None
 * @retval None
 */
static void SystemClock_Config(void) {
	RCC_ClkInitTypeDef RCC_ClkInitStruct;
	RCC_OscInitTypeDef RCC_OscInitStruct;

	/* Enable HSE Oscillator and activate PLL with HSE as source */
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
	RCC_OscInitStruct.HSEState = RCC_HSE_ON;
	RCC_OscInitStruct.HSIState = RCC_HSI_OFF;
	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
	RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
	RCC_OscInitStruct.PLL.PLLM = 25;
	RCC_OscInitStruct.PLL.PLLN = 432;
	RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
	RCC_OscInitStruct.PLL.PLLQ = 9;
	if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
		Error_Handler();
	}

	/* activate the OverDrive to reach the 216 Mhz Frequency */
	if (HAL_PWREx_EnableOverDrive() != HAL_OK) {
		Error_Handler();
	}

	/* Select PLL as system clock source and configure the HCLK, PCLK1 and PCLK2
	 clocks dividers */
	RCC_ClkInitStruct.ClockType = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK
			| RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2);
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;
	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK) {
		Error_Handler();
	}
}

/**
 * @brief  This function is executed in case of error occurrence.
 * @param  None
 * @retval None
 */
static void Error_Handler(void) {
	/* User may add here some code to deal with this error */
	while (1) {
	}
}

/**
 * @brief  Configure the MPU attributes as Write Through for SRAM1/2.
 * @note   The Base Address is 0x20010000 since this memory interface is the AXI.
 *         The Region Size is 256KB, it is related to SRAM1 and SRAM2  memory size.
 * @param  None
 * @retval None
 */
static void MPU_Config(void) {
	MPU_Region_InitTypeDef MPU_InitStruct;

	/* Disable the MPU */
	HAL_MPU_Disable();

	/* Configure the MPU attributes as WT for SRAM */
	MPU_InitStruct.Enable = MPU_REGION_ENABLE;
	MPU_InitStruct.BaseAddress = 0x20010000;
	MPU_InitStruct.Size = MPU_REGION_SIZE_256KB;
	MPU_InitStruct.AccessPermission = MPU_REGION_FULL_ACCESS;
	MPU_InitStruct.IsBufferable = MPU_ACCESS_NOT_BUFFERABLE;
	MPU_InitStruct.IsCacheable = MPU_ACCESS_CACHEABLE;
	MPU_InitStruct.IsShareable = MPU_ACCESS_SHAREABLE;
	MPU_InitStruct.Number = MPU_REGION_NUMBER0;
	MPU_InitStruct.TypeExtField = MPU_TEX_LEVEL0;
	MPU_InitStruct.SubRegionDisable = 0x00;
	MPU_InitStruct.DisableExec = MPU_INSTRUCTION_ACCESS_ENABLE;

	HAL_MPU_ConfigRegion(&MPU_InitStruct);

	/* Enable the MPU */
	HAL_MPU_Enable(MPU_PRIVILEGED_DEFAULT);
}

/**
 * @brief  CPU L1-Cache enable.
 * @param  None
 * @retval None
 */
static void CPU_CACHE_Enable(void) {
	/* Enable I-Cache */
	SCB_EnableICache();

	/* Enable D-Cache */
	SCB_EnableDCache();
}

#ifdef  USE_FULL_ASSERT

/**
 * @brief  Reports the name of the source file and the source line number
 *         where the assert_param error has occurred.
 * @param  file: pointer to the source file name
 * @param  line: assert_param error line source number
 * @retval None
 */
void assert_failed(uint8_t* file, uint32_t line)
{
	/* User can add his own implementation to report the file name and line number,
	 ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

	/* Infinite loop */
	while (1)
	{
	}
}
#endif

/**
 * @}
 */

/**
 * @}
 */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
