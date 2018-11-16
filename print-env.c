#include "header.h"

int main(int argc,char *argv[])
{
  // Need to define myshell first
	char *p = getenv("MYSHELL");
	if(p == NULL)
	 {
		 printf("MYSHELL no exist\n");
		 exit(0);
	 }
   else
   {
     printf("MYSHELL address is %p content %s\n",p,p);
   }

	 return 0;
}
