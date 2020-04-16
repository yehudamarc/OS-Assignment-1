#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{

   printf(1, "%s%d%s", "The process is using: ", memsize(), "\n");
   sbrk(2000);
   printf(1, "%s%s", "Allocating more memory ", "\n");
   printf(1, "%s%d%s", "The process is using: ", memsize(), "\n");
   sbrk(-2000);
   printf(1, "%s%s", "Freeing memory ", "\n");
   printf(1, "%s%d%s", "The process is using: ", memsize(), "\n");

  exit(0);
}