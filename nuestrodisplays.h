/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef NUESTRODISPLAYS_H
#define	NUESTRODISPLAYS_H


#define DISPLAY1	0
#define DISPLAY2	1
#define DISPLAY3	2
    
    
    typedef struct Ds_Display Ds_Display;
    struct Ds_Display
    {
        /*Declaracion por digitos para los displays*/
        char Digito1;
        char Digito2;
        char Digito3;
        unsigned int estado;// en este contador va cambiando para ir refrescando los Sseg.
    };
    
    void inicializar_nuestro_Display(Ds_Display *dis);//Ds_Display* dis);
    void ADC2Display(Ds_Display* dis, uint16_t adcVal);//,  uint8_t Valor1, uint8_t Valor2, uint8_t Valor3);    
    void mostrar_Display(Ds_Display* dis, unsigned int caracter);
    void Prender_seg(unsigned int caracter);



#endif	/* XC_HEADER_TEMPLATE_H */

