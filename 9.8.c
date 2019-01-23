// atoi()-za konverziju stringa u ceo broj

#include <stdio.h>
#include<stdlib.h>

main()
{
char tekst1[ ] = " 5";
char tekst2[ ] = "0010";
char tekst3[ ] = "20 i neki tekst";
char tekst4[ ] = "30.15";
char tekst5[ ] = "neki tekst 40";
printf("\nceo broj: %d", atoi(tekst1));
printf("\nceo broj: %d", atoi(tekst2));
printf("\nceo broj: %d", atoi(tekst3));
printf("\nceo broj: %d", atoi(tekst4));
printf("\nceo broj: %d", atoi(tekst5));
}
