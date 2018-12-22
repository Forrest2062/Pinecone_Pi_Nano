/**
  ******************************************************************************
  * @file    system.h
  * @author  PineconePi
  * @version V1.0.0
  * @date    20-December-2018
  * @brief  This article will be used for the unified invocation of functions and system configuration. 
  * @License:GNU General Public License v3.0         
  ******************************************************************************
  * @attention
  *
  *
  *  
  * 
  * 
  * 
  * 
  *
  * 
  ******************************************************************************
	**/
#ifndef		__SYSTEM_H_
#define		__SYSTEM_H_


/*********************************************************/

  #define MAIN_Fosc		24000000L	//������ʱ��24Mhz
//#define MAIN_Fosc		22118400L	//������ʱ��
//#define MAIN_Fosc		12000000L	//������ʱ��
//#define MAIN_Fosc		11059200L	//������ʱ��
//#define MAIN_Fosc		 5529600L	//������ʱ��


/*********************************************************/

#include	"PineconePinano.h"//�⺯��������������д


/**************************************************************************/

#define Main_Fosc_KHZ	(MAIN_Fosc / 1000)

/***********************************************************/

#endif