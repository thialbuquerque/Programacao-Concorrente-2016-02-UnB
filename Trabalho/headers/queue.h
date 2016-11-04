/*STRUCTURES*/
typedef struct clients	/*QUEUE FOR THE CLIENTS*/
{
	int id;				
	struct clients * next;	
} CLI_QUEUE;					

typedef struct queue	/*QUEUE FOR THE CLIENTS*/
{
	CLI_QUEUE * start;	/*STORES THE BEGINNING OF THE QUEUE*/
	CLI_QUEUE * end;	/*STORES THE ENDING OF THE QUEUE*/
} QUEUE;					

QUEUE ** cashierQueue = NULL;

/*PROTOTYPES*/
QUEUE * create_queue (void);	/*QUEUE NEW ELEMENTS*/
int queue (QUEUE **, int );	/*QUEUE NEW ELEMENTS*/
int dequeue (QUEUE **);	/*DEQUEUE ELEMENTS*/
int isEmpty (QUEUE **);
int consultQueue (QUEUE *);	/*CONSULT ELEMENTS OF THE QUEUE*/

#include "../functions/queue.c"