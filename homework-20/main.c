#include <stdio.h>  
#include <stdlib.h> 

struct phone 

{

   char brand[16],type[10];

   int year,price;

}; 

int main(void)

{

    int i;

	printf("-------------------------------------------------\n");

	printf("                 phone������c��                 \n");

	printf("-------------------------------------------------\n"); 

    struct phone p[5]={  

	"APPLE", "X", 2017, 35000, 

    "Samsung", "S9", 2018, 30000, 

    "Huawei", "P20 Pro", 2018, 32000, 

    "OPPO", "R15", 2018, 9000, 

    "ASUS", "Zenfone 5", 2018, 12000

	};

    

    for (i=0; i<5; i++) 

    {

        printf("%s %s %4d %5d\n", p[i].brand, p[i].type, p[i].year, p[i].price);

    }

    system("pause"); 

    return 0;

}
