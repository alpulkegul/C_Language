//Project Name: Clock

#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
	
	
    while(1) {
        time_t rawtime;
        struct tm * timeinfo;

        time (&rawtime);
        timeinfo = localtime (&rawtime);
        printf ("�u anki yerel saat: %s", asctime(timeinfo));

        sleep(1);
        system("cls");
    }

    return 0;
}

