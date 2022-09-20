#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	pid_t p;
	printf("before fork\n");
	p=fork();
	if(p==0)
	{
		printf("I am a child having id %d\n",getpid());
		printf("my parents id is %d\n",getpid());
	}
	else
	{
		printf("my child's id is %d\n",p);
		printf("I am parent having id %d\n",getpid());
	}
	printf("common\n");
}
