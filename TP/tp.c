#include<stdio.h>
#include<signal.h>
#include<unistd.h>

int main()
{
    int pid , pid2 , pid3 , pid1;
    pid=fork();
    
    if(pid==0)
    {
        sleep(3);
        printf("\nthis is the first child process id");
        printf("\n%d",getpid());
        
    }
    else
    {
        pid1=fork();
        if(pid1==0)
        {
            sleep(2);
            printf("\nthis is the second child process id");
            printf("\n%d",getpid());
        }
        else
        {
            pid2=fork();
            if(pid2==0)
            {
            
                printf("\nthis is the third child process id");
                printf("\n%d",getpid());
            }
            else
            {
                sleep(3);
                printf("\nthis is the parent process id");
                printf("\n%d",getpid());
            }
        }

        
    }
    return 0;

}