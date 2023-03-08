/*
 * File:   nuestrodisplay.c
 * Author: usuario
 *
 * Created on 15 de febrero de 2023, 05:12 PM
 */
#include "mcc_generated_files/mcc.h"
#include "nuestrodisplays.h"

void inicializar_nuestro_Display(Ds_Display *dis){
    dis->Digito1=0;
    dis-> Digito2=0;
    dis-> Digito3=0;
    dis-> estado=DISPLAY1;
    
    D1_SetLow();
    D2_SetLow();
    D3_SetLow();
    
    A_SetLow();
    B_SetLow();
    C_SetLow();
    D_SetLow();
    E_SetLow();
    F_SetLow();
    G_SetLow();
}


void ADC2Display(Ds_Display* dis, uint16_t adcVal){
    char aux;
    float voltios = ((float)adcVal*10.0f)/1023.0f;
    dis->Digito1 = (char)voltios;
    dis->Digito2 = (char)((voltios-(dis->Digito1))*10.0f);
    aux = dis->Digito2;
    dis->Digito3 = (char)(((voltios-(float)(dis->Digito1)-((float)aux/10.0f)))*100.0f);
    if(dis->Digito1>9||dis->Digito2>9||dis->Digito3>9){
        dis->Digito1=9;
        dis->Digito2=9;
        dis->Digito3=9;
    }
}

void Prender_seg(unsigned int caracter){
    
    switch(caracter){
        case 0:
        A_SetHigh();
        B_SetHigh();
        C_SetHigh();
        D_SetHigh();
        E_SetHigh();
        F_SetHigh();
        G_SetLow();
        break;
        case 1:
            
        A_SetLow();
        B_SetHigh();
        C_SetHigh();
        D_SetLow();
        E_SetLow();
        F_SetLow();
        G_SetLow();
        break;
    
        case 2:
            
        A_SetHigh();
        B_SetHigh();
        C_SetLow();
        D_SetHigh();
        E_SetHigh();
        F_SetLow();
        G_SetHigh();
        break;
    
        case 3:
            
        A_SetHigh();
        B_SetHigh();
        C_SetHigh();
        D_SetHigh();
        E_SetLow();
        F_SetLow();
        G_SetHigh();           
        break;
        
        case 4:
            
        A_SetLow();
        B_SetHigh();
        C_SetHigh();
        D_SetLow();
        E_SetLow();
        F_SetHigh();
        G_SetHigh();
        break;
    
        case 5:
            
        A_SetHigh();
        B_SetLow();
        C_SetHigh();
        D_SetHigh();
        E_SetLow();
        F_SetHigh();
        G_SetHigh();
        break;
    
        case 6:
            
        A_SetHigh();
        B_SetLow();
        C_SetHigh();
        D_SetHigh();
        E_SetHigh();
        F_SetHigh();
        G_SetHigh();    
        break;
        
        case 7:
        
        A_SetHigh();
        B_SetHigh();
        C_SetHigh();
        D_SetLow();
        E_SetLow();
        F_SetLow();
        G_SetLow();     
        break;
    
        case 8:
            
        A_SetHigh();
        B_SetHigh();
        C_SetHigh();
        D_SetHigh();
        E_SetHigh();
        F_SetHigh();
        G_SetHigh();         
        break;
    
        case 9:
            
        A_SetHigh();
        B_SetHigh();
        C_SetHigh();
        D_SetHigh();
        E_SetLow();
        F_SetHigh();
        G_SetHigh();    
      
        break;
    }
    
}

void mostrar_Display(Ds_Display* dis, unsigned int caracter){
  
    switch(dis->estado){
        
        case DISPLAY1:
        D1_SetHigh();
        D2_SetLow();
        D3_SetLow();
        caracter=dis->Digito1;
        Prender_seg(caracter);
        dis->estado = DISPLAY2;
           
        break;
        case DISPLAY2:
        D1_SetLow();
        D2_SetHigh();
        D3_SetLow();
        caracter=dis->Digito2;
        Prender_seg(caracter);
        dis->estado = DISPLAY3;  
        
        break;
        case DISPLAY3:
        D1_SetLow();
        D2_SetLow();
        D3_SetHigh();
        caracter=dis->Digito3;
        Prender_seg(caracter);
        dis->estado = DISPLAY1; 
        break;
        
        default:
        dis->estado = DISPLAY1;  
    }       
}