#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
  // Need to define myshell first
	char *p = getenv("MYSH");
	if(p == NULL)
	 {
		 printf("MYSH no exist\n");
		 exit(0);
	 }
   else
   {
     printf("MYSH address is %p content %s\n",p,p);
   }

	 return 0;
}
