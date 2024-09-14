void getdata(char** ip)
{
	*ip = getenv("QUERY_STRING");
	if(*ip == NULL)
	{
		printf("Content-type:Text\html\n\n");
		printf("Erreur!");
	}
} 
void affichage(char* ip,int x,int y,int z,int w)
{
    printf("Content-type:Text/html \n\n");
    printf("<HTML>");
    printf("<HEAD><TITLE>ip</TITLE></HEAD>");
    printf("<BODY>");
    if(sscanf(ip,"ip=%d.%d.%d.%d",&x,&y,&z,&w) != 4)
    {
    	printf("<p> IP invalid !</p>");
    }
    else if(x > 255 || y > 255 || z > 255 || w > 255 || x < 0 || y < 0 || z < 0 || w < 0)
    {
        printf("<p>l'adresse ip invalide</p>");
    }
    else
    {
      if(x >= 0 && x <= 126)
      {
          printf("<p>Adresse est de classe A</p>");
      }
      if(x >= 128 && x <= 191)
      {
         printf("<p>Adresse est de classe B</p>");
      }
      if(x >= 192 && x <= 223)
      {
      	 printf("<p>Adresse est de classe C</p>");
      }
    }
    printf("</BODY>");
    printf("</HTML>");
    return 0;
}
