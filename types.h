typedef unsigned int   uint;
typedef unsigned short ushort;
typedef unsigned char  uchar;
typedef uint pde_t;
#define null 0

// Performence strct for proc_info system call
// used to track statistics and info on the process

struct perf {
int ps_priority;
int rtime;
int stime;
int retime;
};
