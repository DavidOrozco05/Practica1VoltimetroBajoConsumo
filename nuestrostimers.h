
#if !defined(TIEMPO_H)
#define TIEMPO_H
#include <stddef.h>
typedef struct Tm_Periodico Tm_Periodico;
#define TM_PER_B_ACTIVO		0x01U
#define TM_PER_B_TC			0x02U
#define TM_Out_B_TC			0x04U
struct Tm_Periodico
{
	unsigned int	contador,// van los conteos temporales por timer multiplo
	periodo;//hasta donde quiero contar
	unsigned int	timeout;//acá va un timeout
	unsigned char banderas; //el primer bit me dice si está activo este timer el segundo me dice si se da periodo
};

//funciones para  procesar tiempo
void Tm_Procese_tiempo (Tm_Periodico *ctp);


//funciones de tiempos periodicos para timers
void Tm_Inicie_periodico (Tm_Periodico *ctp,unsigned int periodo);
char Tm_Hubo_periodico (Tm_Periodico *ctp);
void Tm_Baje_periodico (Tm_Periodico *ctp);
void Tm_Termine_periodico (Tm_Periodico *ctp);

//funciones de timeout
void Tm_Inicie_timeout (Tm_Periodico *ctp,unsigned int tiempo);
char Tm_Hubo_timeout (Tm_Periodico *ctp);
void Tm_Baje_timeout (Tm_Periodico *ctp);

#endif