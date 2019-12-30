
#ifndef GLOBAL_H
#define GLOBAL_H
#include <time.h>

#define VERSION_STRING	"EnderUNIX Isoqlog 2.2-BETA"

#define TO_STR2(x) #x
#define TO_STR(x) TO_STR2(x)
#define CONFFILE (TO_STR(SYSCONFDIR) "/isoqlog.conf")

enum {
        BUFSIZE = 1024,
        KEYSIZE = 64,
        VALSIZE = 256
};

time_t secs;
time_t today ;
struct tm *t2;





#endif
