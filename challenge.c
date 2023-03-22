#include <stdio.h>
#include <unistd.h>

void secret()
{
    printf("flag{aHR0cHM6Ly93d3cueW91dHViZS5jb20vd2F0Y2g/dj1kUXc0dzlXZ1hjUQ==}\n");
}

int main(int argc, char *argv[])
{
    printf("We're checking that password, please wait...\n");
    sleep(10);

    if (strcmp(argv[1], "impossiblepassword3491refhkehp8upoiwrt42345rhtwlkejh348") == 0)
    {
        printf("Password validated. Grabbing flag...\n");
        secret();
    }
    else
    {
        printf("Invalid password\n");
    }
    return 0;
}