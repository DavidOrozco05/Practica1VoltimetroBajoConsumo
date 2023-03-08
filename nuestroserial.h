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
#ifndef NUESTROSERIAL_H
#define	NUESTROSERIAL_H
    
#define TAMARREGLO 6
    
    struct Sr_Serial
    {
        unsigned char datosaenviar[TAMARREGLO];// enviamos 4 datos en decimal incluyendo el punto 9.21 y enter que es CR y LF)
        unsigned char contador;// en este contador vamos almacenando lo que vamos enviando (NO PUEDO ENVIAR TODO DE UNA))
        unsigned char Valor1;
        unsigned char Valor2;
        unsigned char Valor3;
    };
    typedef struct Sr_Serial Sr_Serial;
    void inicializar_nuestroserial(Sr_Serial* ser);
    char tengodatos_PorEnviar(Sr_Serial* ser);
    void enviarsiguiente_Dato(Sr_Serial* ser);
    void llenar_registros_del_Serial(Sr_Serial* ser, char Dig1, char Dig2, char Dig3);
  
    

#endif	/* XC_HEADER_TEMPLATE_H */

