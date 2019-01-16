/* Prikazuje unos celog broja koristeci scanf("%d", &x) */
#include <stdio.h>

main()
{
	int x;
	printf("Unesi ceo broj : ");

	/* Obratiti paznju na znak & (operator uzimanja adrese)
	   pre imena promenjive u funkciji scanf */
	scanf("%d",&x);

	/* U funkciji printf nije potrebno stavljati &  */
	printf("Uneli ste broj %d\n", x);
}
