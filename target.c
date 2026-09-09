#include <stdio.h>
#include <unistd.h>

int main(void)
{
    printf("Hello from macOS!\n");
    printf("PID: %d\n", getpid());

    sleep(20);

    return 0;
}
