#include "mcc_generated_files/mcc.h"
#include "nuestrostimers.h"
// struct Tm_Periodico
// {
// unsigned int	contador,
// periodo;

//unsigned int	timeout;
// unsigned char banderas;
// };
void Tm_Inicie_periodico (Tm_Periodico *ctp,unsigned int periodo)
{
	ctp->banderas |= TM_PER_B_ACTIVO; //activo el timer
	ctp->banderas &= ~TM_PER_B_TC; //bajo la bandera a 0
	ctp->contador = ctp->periodo = periodo;//tanto el contador y el periodo inician en el mismo valor el contator decrece y el periodo se usa para reset
}
void Tm_Procese_tiempo (Tm_Periodico *ctp)
{
//	Timeout *tp;
//	size_t n;
	if (ctp->banderas & TM_PER_B_ACTIVO)//si el timer está activo
	{
		--(ctp->contador);//decremente en uno
		if ( !(ctp->contador) )//si llegó a cero
		{
			ctp->banderas |= TM_PER_B_TC;//subo la bandera
			ctp->contador = ctp->periodo;// lo reseteo
		}
	}
	if (ctp->banderas & TM_Out_B_TC)//si ya es cero, no entra
	ctp->timeout=ctp->timeout-1;//decremente también el timeout
}
char Tm_Hubo_periodico (Tm_Periodico *ctp) //le ingreso la estructura
{
	return (ctp->banderas & TM_PER_B_TC);//activo la bandera cuando hubo periodo
}
void Tm_Baje_periodico (Tm_Periodico *ctp)  //envio la estructura
{
	ctp->banderas &= ~TM_PER_B_TC; //atiendo la bandera una vez hubo periodo
}
void Tm_Termine_periodico (Tm_Periodico *ctp)  //envio la estructura
{
	ctp->banderas &= ~TM_PER_B_ACTIVO; //desactivo el timer una vez no lo necesito
}
char Tm_Hubo_timeout (Tm_Periodico *ctp)  //revise si hubo timeout 
{
	if(ctp->timeout == 0) //compararlo con 0 
	{
	ctp->banderas &= ~TM_Out_B_TC;  //bajo la bandera de timeout
	return 1; //si es 0 retorne 1
	}
	else
	{
	return 0;	//si no retorne 0 
	}
}
void Tm_Inicie_timeout (Tm_Periodico *ctp,unsigned int tiempo)
{
	////la mascara de la bandera se crea en el tiempo.h
	//puede tomar el mismo valor de la mascara de periodicos
	ctp->banderas &= ~TM_Out_B_TC;  //bajo la bandera de timeout
	ctp->timeout = tiempo; //inicio el contador en el numero de conteos deseado
}
void Tm_Baje_timeout (Tm_Periodico *ctp)  //envio la estructura
{
	ctp->banderas &= ~TM_Out_B_TC; //atiendo la bandera una vez hubo periodo
}




