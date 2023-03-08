/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F1827
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set ADC aliases
#define ADC_TRIS                 TRISAbits.TRISA0
#define ADC_LAT                  LATAbits.LATA0
#define ADC_PORT                 PORTAbits.RA0
#define ADC_ANS                  ANSELAbits.ANSA0
#define ADC_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define ADC_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define ADC_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define ADC_GetValue()           PORTAbits.RA0
#define ADC_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define ADC_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define ADC_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define ADC_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set A aliases
#define A_TRIS                 TRISAbits.TRISA1
#define A_LAT                  LATAbits.LATA1
#define A_PORT                 PORTAbits.RA1
#define A_ANS                  ANSELAbits.ANSA1
#define A_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define A_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define A_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define A_GetValue()           PORTAbits.RA1
#define A_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define A_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define A_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define A_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set B aliases
#define B_TRIS                 TRISAbits.TRISA2
#define B_LAT                  LATAbits.LATA2
#define B_PORT                 PORTAbits.RA2
#define B_ANS                  ANSELAbits.ANSA2
#define B_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define B_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define B_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define B_GetValue()           PORTAbits.RA2
#define B_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define B_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define B_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define B_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set C aliases
#define C_TRIS                 TRISAbits.TRISA3
#define C_LAT                  LATAbits.LATA3
#define C_PORT                 PORTAbits.RA3
#define C_ANS                  ANSELAbits.ANSA3
#define C_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define C_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define C_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define C_GetValue()           PORTAbits.RA3
#define C_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define C_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define C_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define C_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set D aliases
#define D_TRIS                 TRISAbits.TRISA4
#define D_LAT                  LATAbits.LATA4
#define D_PORT                 PORTAbits.RA4
#define D_ANS                  ANSELAbits.ANSA4
#define D_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define D_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define D_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define D_GetValue()           PORTAbits.RA4
#define D_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define D_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define D_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define D_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set E aliases
#define E_TRIS                 TRISAbits.TRISA6
#define E_LAT                  LATAbits.LATA6
#define E_PORT                 PORTAbits.RA6
#define E_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define E_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define E_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define E_GetValue()           PORTAbits.RA6
#define E_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define E_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)

// get/set F aliases
#define F_TRIS                 TRISAbits.TRISA7
#define F_LAT                  LATAbits.LATA7
#define F_PORT                 PORTAbits.RA7
#define F_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define F_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define F_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define F_GetValue()           PORTAbits.RA7
#define F_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define F_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)

// get/set G aliases
#define G_TRIS                 TRISBbits.TRISB0
#define G_LAT                  LATBbits.LATB0
#define G_PORT                 PORTBbits.RB0
#define G_WPU                  WPUBbits.WPUB0
#define G_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define G_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define G_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define G_GetValue()           PORTBbits.RB0
#define G_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define G_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define G_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define G_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)

// get/set RB2 procedures
#define RB2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define RB2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define RB2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define RB2_GetValue()              PORTBbits.RB2
#define RB2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define RB2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define RB2_SetPullup()             do { WPUBbits.WPUB2 = 1; } while(0)
#define RB2_ResetPullup()           do { WPUBbits.WPUB2 = 0; } while(0)
#define RB2_SetAnalogMode()         do { ANSELBbits.ANSB2 = 1; } while(0)
#define RB2_SetDigitalMode()        do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set D1 aliases
#define D1_TRIS                 TRISBbits.TRISB3
#define D1_LAT                  LATBbits.LATB3
#define D1_PORT                 PORTBbits.RB3
#define D1_WPU                  WPUBbits.WPUB3
#define D1_ANS                  ANSELBbits.ANSB3
#define D1_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define D1_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define D1_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define D1_GetValue()           PORTBbits.RB3
#define D1_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define D1_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define D1_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define D1_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define D1_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define D1_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set D2 aliases
#define D2_TRIS                 TRISBbits.TRISB4
#define D2_LAT                  LATBbits.LATB4
#define D2_PORT                 PORTBbits.RB4
#define D2_WPU                  WPUBbits.WPUB4
#define D2_ANS                  ANSELBbits.ANSB4
#define D2_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define D2_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define D2_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define D2_GetValue()           PORTBbits.RB4
#define D2_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define D2_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define D2_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define D2_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define D2_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define D2_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set D3 aliases
#define D3_TRIS                 TRISBbits.TRISB5
#define D3_LAT                  LATBbits.LATB5
#define D3_PORT                 PORTBbits.RB5
#define D3_WPU                  WPUBbits.WPUB5
#define D3_ANS                  ANSELBbits.ANSB5
#define D3_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define D3_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define D3_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define D3_GetValue()           PORTBbits.RB5
#define D3_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define D3_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define D3_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define D3_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define D3_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define D3_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/