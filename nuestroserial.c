/*
 * File:   nuestroserial.c
 * Author: usuario
 *
 * Created on 15 de febrero de 2023, 12:20 PM
 */
#include "mcc_generated_files/mcc.h"
#include "nuestroserial.h"

void inicializar_nuestroserial(Sr_Serial* ser){
    for (ser->contador=0;ser->contador<6;ser->contador++){
        ser->datosaenviar[ser->contador]=48;
    }// al finalizar el bucle ser->contador queda en uno más que el tamaño del arreglo
}


char tengodatos_PorEnviar(Sr_Serial* ser){
    return ser->contador < TAMARREGLO;
}

void llenar_registros_del_Serial(Sr_Serial* ser, char Dig1, char Dig2, char Dig3){
    /* si ustedes quieren enviar por ejemplo 9.14\r\n */
    ser->Valor1 = Dig1;
    ser->Valor2 = Dig2;
    ser->Valor3 = Dig3;
    
    ser->datosaenviar[0]= ser->Valor1 + 48;
    ser->datosaenviar[1]= 46;
    ser->datosaenviar[2]= ser->Valor2 + 48;
    ser->datosaenviar[3]= ser->Valor3 + 48;
    ser->datosaenviar[4]= 13;
    ser->datosaenviar[5]= 10;
    ser->contador=0;
}

void enviarsiguiente_Dato(Sr_Serial* ser){
    EUSART_Write(ser->datosaenviar[ser->contador]);
    ser->contador++;
}