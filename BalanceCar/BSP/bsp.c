/**
  ******************************************************************************
  * @file    bsp.c 
  * @author  Apexyuan
  * @version V1.0.0
  * @date    2019-12-10
  * @brief   �弶֧�ְ��������������HAL�㣨Ŀǰ�������Ǻ���һ���û�н�һ���ֿ���
  ******************************************************************************
  * @attention
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/ 
#include "bsp.h"
/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  ��ʼ���ײ�Ӳ������
  * @param  None
  * @retval None
  */
void bsp_init(void)
{
  // __disable_irq();
  NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //�����ж����ȼ�����
  systick_init();
  led_init();
  usart1_init(115200);
  usart3_init(9600);
  
  timer_init(999,71);
  motor_init();
  encoder_init();
  while(MPU_DMP_Init());
  led_off(LED0);
  // delay_ms(10);
  // MPU_DMP_Init();
  // while(1)
  // {
  // uint8_t res = MPU_DMP_Init();
  // if(res == 0)
  // {
  //     break;
  // }
  // else
  // {
  //     printf("res=%d",res);
  // }  
  // }
  // __enable_irq();
}




