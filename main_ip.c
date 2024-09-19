#include "class_ip.h"
int main() 
{
	int x = 0;
	int y = 0;
	int z = 0;
	int w = 0;
	char* ip = NULL;
	getdata(&ip);
	if(ip!=NULL) 
	{
		affichage(ip,x,y,z,w);
	} 
	return 0 ;
} 
