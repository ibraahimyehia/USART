#include "STD_TYPES.h"
#include "UTILES.h"
#include "GPIO_LOCAL.h"
#include "GPIO_CONFIG.h"
#include "GPIO.h"




void GPIO_INIT_PORT_DIRECTION(UINT8 PORT , UINT8 DIRECTION){
	switch (PORT)
		{
		case PORT_A:
		if(DIRECTION == OUTPUT)
		{
			SETPORT(DDRA);
		}
		else{
			CLRPORT(DDRA);
		}
        break;
		case PORT_B:
		if(DIRECTION == OUTPUT)
		{
			SETPORT(DDRB);
				}
		else{
			CLRPORT(DDRB);
				}
		break;

		case PORT_C:
		if(DIRECTION == OUTPUT)
		{
			SETPORT(DDRC);
				}
		else{
			CLRPORT(DDRC);
				}
		break;

		case PORT_D:
		if(DIRECTION == OUTPUT)
		{
			SETPORT(DDRD);
				}
		else{
			CLRPORT(DDRD);
				}
		break;
		  default:
			        	  break;
	}


}
void GPIO_WRITE_PORT_VALUE(UINT8 PORT , UINT8 VALUE){
	  switch(PORT)
	      {
	      case PORT_A:
	        ASSIGNPORT(PORTA ,VALUE);
	        break;

	      case PORT_B:
	        ASSIGNPORT(PORTB ,VALUE);

	          break;

	      case PORT_C:
	        ASSIGNPORT(PORTC ,VALUE);

	          break;

	      case PORT_D:
	        ASSIGNPORT(PORTD ,VALUE);

	          break;
	          default:
	        	  break;
	      }

}
UINT8 GPIO_READ_PORT_VALUE(UINT8 PORT){
	UINT8 VALUE;
	    switch(PORT)
	        {
	        case PORT_A:
	          VALUE=GETPORT(PINA);

	          break;

	        case PORT_B:
	          VALUE=GETPORT(PINB);

	            break;

	        case PORT_C:
	          VALUE=GETPORT(PINC);

	            break;

	        case PORT_D:
	          VALUE=GETPORT(PIND);
	            break;
	            default:
	            	break;

	           return VALUE;
	        }
}


void GPIO_INIT_PIN_DIRECTION(UINT8 PORT ,UINT8 PINno, UINT8 DIRECTION){

	switch (PORT)
	{
	case PORT_A:
	if(DIRECTION == OUTPUT)
	{
		SETBIT(DDRA , PINno );
	}
	else{
		CLRBIT(DDRA , PINno );
	}
	break;

	case PORT_B:
	if(DIRECTION == OUTPUT)
	{
		SETBIT(DDRB , PINno );
			}
	else{
		CLRBIT(DDRB , PINno );
	}
	break;

	case PORT_C:
	if(DIRECTION == OUTPUT)
	{
		SETBIT(DDRC , PINno );
			}
	else{
		CLRBIT(DDRC , PINno );

	}
	break;

	case PORT_D:
	if(DIRECTION == OUTPUT)
	{
		SETBIT(DDRD , PINno );
			}
	else{
		CLRBIT(DDRD , PINno );
			}
	break;
	default:
		break;
	}

	}



void GPIO_WRITE_PIN_VALUE(UINT8 PORT ,UINT8 PINno , UINT8 VALUE){
	 switch(PORT)
	    {
	    case PORT_A:
	      ASSIGNBIT(PORTA , PINno ,VALUE);
	      break;

	    case PORT_B:
	      ASSIGNBIT(PORTB , PINno ,VALUE);

	        break;

	    case PORT_C:
	      ASSIGNBIT(PORTC , PINno ,VALUE);

	        break;

	    case PORT_D:
	      ASSIGNBIT(PORTD , PINno ,VALUE);

	        break;
	    default:
	    	        	  break;
	    }
}


UINT8 GPIO_READ_PIN_VALUE(UINT8 PORT ,UINT8 PINno)
{
	UINT8 VALUE;
	  switch(PORT)
	      {
	      case PORT_A:
	        VALUE=GETBIT(PINA , PINno);

	        break;

	      case PORT_B:
	        VALUE=GETBIT(PINB , PINno);

	          break;

	      case PORT_C:
	        VALUE=GETBIT(PINC , PINno);

	          break;

	      case PORT_D:
	        VALUE=GETBIT(PIND , PINno);
	          break;
	      default:
	     	        	        	  break;




	      }


	  return VALUE;
}



