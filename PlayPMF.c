/* PlayPMF.c */
#include <stdio.h>
#include <time.h>

#define CHARLEN 1024

int main(int argc, char const *argv[])
{
    char psp_ffplay[CHARLEN];
    char ffplay[CHARLEN];
    size_t start;
    start = get_time_seconds();
    if(argc == 1)
    {
        fprintf(stderr, "usage: %s pmf-file\n", argv[0]);
        return 1;
    }
    snprintf(psp_ffplay, CHARLEN, "psp-ffplay \"%s\"", argv[1]);
    printf("%s\n", psp_ffplay);
    if(system(psp_ffplay))
    {
        if((get_time_seconds() - start) < 20)
        {
            snprintf(ffplay, CHARLEN, "ffplay \"%s\"", argv[1]);
            system(ffplay);
        }
    }
    return 0;
}

int get_time_seconds(void)
{
    time_t stime = time(0);
    struct tm *stm = localtime(&stime);
    return stm->tm_sec;
}