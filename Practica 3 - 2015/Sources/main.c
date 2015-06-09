#include <hidef.h> /* for EnableInterrupts macro */
#include "derivative.h" /* include peripheral declarations */

#ifdef __cplusplus
extern "C"
#endif
void MCU_init(void); /* Device initialization function declaration */

unsigned short sample;
int va ;
unsigned char valor[12];

void main(void) {
  MCU_init();	/* call Device Initialization */
  /* include your code here */
  SCIBD = 52;
    SCIC2_TE = 1;
    SCIC2_RE = 0;
    

    for(;;) {
  	  if(ADCSC1_COCO == 1)
  	  {
  		  sample = ADCR;
  		  valor[6]='0'+(sample/100);
  		  //sample=sample%100;
  		  valor[7]='0'+(sample/10);
  		  valor[8]='0'+(sample%10);
  		  va = map(sample,0,255,NCMIN,(int)NCMAX);
  		  ONDACUADRADA_change_NC(va);
  		//  SCI_send_string(valor);
  	  }
	  
    /* __RESET_WATCHDOG(); By default COP is disabled with device init. When enabling, also reset the watchdog. */
  } /* loop forever */
  /* please make sure that you never leave main */
}
