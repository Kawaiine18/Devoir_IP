#include <stdio.h>
#include <stdlib.h>
int main()
{
    int nbr_1;
    int nbr_2;
    int nbr_3;
    int nbr_4;
    char* ip = getenv("QUERY_STRING");
    printf("Content-type:Text/html \n\n");
    printf("<HTML>");
    printf("<HEAD><TITLE>ip</TITLE></HEAD>");
    printf("<BODY>");
    sscanf(ip,"ip=%d.%d.%d.%d",&nbr_1,&nbr_2,&nbr_3,&nbr_4);
    printf("<p>hello</p>");
    if(nbr_1 > 255 || nbr_2 > 255 || nbr_3 > 255 || nbr_4 > 255)
    {
        printf("<p>l'adresse ip invalide</p>");
    }
    else if(nbr_1 < 0 || nbr_2 < 0 || nbr_3 < 0 || nbr_4 < 0)
    {
        printf("<p>l'adresse ip invalide</p>");
    }
    if(nbr_1 > 0 && nbr_1 < 256 && nbr_2 > 0 && nbr_2 < 256 && nbr_3 > 0 && nbr_3 < 256 && nbr_4 > 0 && nbr_4 < 256)
    {
        if(nbr_1 > 0 && nbr_1 < 127 && nbr_2 < 256 && nbr_3 < 256 && nbr_4 < 256)
    {
        printf("<p>Adresse est de classe A</p>");
    }
    if(nbr_1 > 127 && nbr_1 < 191 && nbr_2 < 256 && nbr_3 < 256 && nbr_4 < 256)
    {
        printf("<p>Adresse est de classe B</p>");
    }
    if(nbr_1 > 191 && nbr_1 < 223 && nbr_2 < 256 && nbr_3 < 256 && nbr_4 < 256)
    {
        printf("<p>Adresse est de classe C</p>");
    }
    }
    printf("</BODY>");
    printf("</HTML>");
    return 0;
}