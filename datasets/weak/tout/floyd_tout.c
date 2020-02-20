/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _IO_FILE;
struct timeval;
extern int pthread_cond_signal(int *cond ) ;
extern void exit(int status ) ;
extern int fseek(struct _IO_FILE *stream , long offs , int whence ) ;
extern int fclose(void *stream ) ;
extern int close(int filedes ) ;
char **_global_argv  =    (char **)0;
extern int pthread_create(void *thread , void *attr , void *start_routine , void *arg ) ;
extern int fcntl(int filedes , int cmd  , ...) ;
extern int unlink(char const   *filename ) ;
extern int pthread_mutex_lock(int *mutex ) ;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
extern int pthread_cond_init(int *cond , int *attr ) ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern int raise(int sig ) ;
long _1alwaysZero  =    0;
extern void abort() ;
extern int atoi(char const   *s ) ;
extern void *malloc(unsigned long size ) ;
extern double ceil(double x ) ;
extern int getpagesize() ;
extern int posix_memalign(void **memptr , unsigned long alignment , unsigned long size ) ;
extern int pthread_cond_broadcast(int *cond ) ;
extern int pthread_join(void *thread , void **value_ptr ) ;
extern int rand() ;
extern void free(void *ptr ) ;
extern unsigned long strlen(char const   *s ) ;
int main(int argc , char **argv , char **_formal_envp ) ;
extern unsigned long write(int filedes , void *buf , unsigned long nbyte ) ;
typedef long __time_t;
typedef __time_t time_t;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern int gettimeofday(struct timeval *tv , void *tz ) ;
int _global_argc  =    0;
char **_global_envp  =    (char **)0;
void megaInit(void) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int fscanf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int scanf(char const   *format  , ...) ;
extern long clock(void) ;
long _1entropy  =    0;
extern void perror(char const   *str ) ;
extern unsigned long read(int filedes , void *buf , unsigned long nbyte ) ;
extern int gethostname(char *name , unsigned long namelen ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
extern int pthread_cond_wait(int *cond , int *mutex ) ;
extern int pthread_mutex_unlock(int *mutex ) ;
extern void qsort(void *base , unsigned long nel , unsigned long width , int (*compar)(void *a ,
                                                                                       void *b ) ) ;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern int pthread_mutex_init(int *mutex , int *attr ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern int strcmp(char const   *a , char const   *b ) ;
extern double difftime(long tv1 , long tv0 ) ;
extern void signal(int sig , void *func ) ;
extern  __attribute__((__nothrow__)) time_t ( __attribute__((__leaf__)) time)(time_t *__timer ) ;
typedef struct _IO_FILE FILE;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern int open(char const   *filename , int oflag  , ...) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) srand)(unsigned int __seed ) ;
extern double sqrt(double x ) ;
extern double log(double x ) ;
extern int snprintf(char *str , unsigned long size , char const   *format  , ...) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
int main(int argc , char **argv , char **_formal_envp ) 
{ 
  int n ;
  int i ;
  int c ;
  int a ;
  time_t t ;
  time_t tmp ;
  int _BARRIER_0 ;
  unsigned long entropy_strLen11 ;
  unsigned long entropy_strLen12 ;
  long one13 ;
  long randomFuns_n14 ;
  unsigned long entropy_strLen15 ;
  long one16 ;
  long randomFuns_n17 ;
  unsigned long entropy_strLen18 ;
  long one19 ;
  long randomFuns_n20 ;
  unsigned long entropy_strLen21 ;
  long one22 ;
  long randomFuns_n23 ;
  unsigned long entropy_strLen24 ;
  long one25 ;
  long randomFuns_n26 ;
  unsigned long entropy_strLen27 ;
  long one28 ;
  long randomFuns_n29 ;
  unsigned long entropy_strLen30 ;
  long one31 ;
  long randomFuns_n32 ;
  int _2_main__BARRIER_1 ;
  unsigned long entropy_strLen34 ;
  unsigned long entropy_strLen35 ;
  long one36 ;
  long randomFuns_n37 ;
  int _2_main__BARRIER_2 ;
  unsigned long entropy_strLen39 ;
  long one40 ;
  long randomFuns_n41 ;
  int _2_main__BARRIER_3 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;
  _1entropy = (long )argc ^ _1entropy;
  randomFuns_n32 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 3;
  while (randomFuns_n32 > 1) {
    if (randomFuns_n32 % 2 == 1) {
      randomFuns_n32 = 3 * randomFuns_n32 + 1;
    } else {
      randomFuns_n32 /= 2;
    }
    one31 = randomFuns_n32;
  }
  _1alwaysZero = (~ one31 | (0xffffffffffffffffUL << 1)) - ~ one31;
  _2_main__BARRIER_1 = 1;
  entropy_strLen35 = tmp;
  if (*(argv + 1) != 0) {
    entropy_strLen35 = strlen(*(argv + 1));
  } else {

  }
  _1entropy = (long )entropy_strLen35 | _1entropy;
  randomFuns_n37 = (_1entropy - ((_1entropy + _1entropy) & (_1entropy >> 63L))) + 7;
  while (randomFuns_n37 > 1) {
    if (randomFuns_n37 % 2 == 1) {
      randomFuns_n37 = 3 * randomFuns_n37 + 1;
    } else {
      randomFuns_n37 /= 2;
    }
    one36 = randomFuns_n37;
  }
  _1alwaysZero = one36 >> 1;
  _2_main__BARRIER_2 = 1;
  _1entropy = (long )((unsigned long )_formal_envp) - _1entropy;
  randomFuns_n41 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 6;
  while (randomFuns_n41 > 1) {
    if (randomFuns_n41 % 2 == 1) {
      randomFuns_n41 = 3 * randomFuns_n41 + 1;
    } else {
      randomFuns_n41 /= 2;
    }
    one40 = randomFuns_n41;
  }
  _1alwaysZero = (~ one40 | (0xffffffffffffffffUL << 1)) - ~ one40;
  _2_main__BARRIER_3 = 1;

  if (argc < 2) {
    _1entropy = (long )n ^ _1entropy;
    randomFuns_n14 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 3;
    {
    if ((((_1alwaysZero & ((_1entropy + ~ 2) + 1L)) * (_1alwaysZero | ((_1entropy + ~ 2) + 1L)) + (_1alwaysZero & ~ ((_1entropy + ~ 2) + 1L)) * (~ _1alwaysZero & ((_1entropy + ~ 2) + 1L))) - ~ 1) - 1L) {
      while (randomFuns_n14 > 1) {
        if (randomFuns_n14 % 2 == 1) {
          randomFuns_n14 = 3 * randomFuns_n14 + 1;
        } else {
          randomFuns_n14 /= 2;
        }
        one13 = randomFuns_n14;
      }
    } else {
      __asm__  volatile   (".byte 0xff,0xff,0x48,0x8d,0x85":);
    }
    }
    _1alwaysZero = one13 >> 1;
    _1entropy = (long )i ^ _1entropy;
    randomFuns_n17 = (_1entropy - ((_1entropy + _1entropy) & (_1entropy >> 63L))) + 8;
    while (randomFuns_n17 > 1) {
      if (randomFuns_n17 % 2 == 1) {
        randomFuns_n17 = 3 * randomFuns_n17 + 1;
      } else {
        randomFuns_n17 /= 2;
      }
      one16 = randomFuns_n17;
    }
    _1alwaysZero = (~ one16 | (0xffffffffffffffffUL << 1)) - ~ one16;
    _1entropy = (long )c ^ _1entropy;
    randomFuns_n20 = (_1entropy - ((_1entropy + _1entropy) & (_1entropy >> 63L))) + 8;
    while (randomFuns_n20 > 1) {
      if (randomFuns_n20 % 2 == 1) {
        randomFuns_n20 = 3 * randomFuns_n20 + 1;
      } else {
        randomFuns_n20 /= 2;
      }
      one19 = randomFuns_n20;
    }
    _1alwaysZero = one19 / 2;
    _1entropy = (long )a | _1entropy;
    randomFuns_n23 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 4;
    while (randomFuns_n23 > 1) {
      if (randomFuns_n23 % 2 == 1) {
        randomFuns_n23 = 3 * randomFuns_n23 + 1;
      } else {
        randomFuns_n23 /= 2;
      }
      one22 = randomFuns_n23;
    }
    _1alwaysZero = (~ one22 | (0xffffffffffffffffUL << 1)) - ~ one22;
    _1entropy = t ^ _1entropy;
    randomFuns_n26 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 8;
    while (randomFuns_n26 > 1) {
      if (randomFuns_n26 % 2 == 1) {
        randomFuns_n26 = 3 * randomFuns_n26 + 1;
      } else {
        randomFuns_n26 /= 2;
      }
      one25 = randomFuns_n26;
    }
    _1alwaysZero = one25 >> 1;
    _1entropy = tmp | _1entropy;
    randomFuns_n29 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 3;
    while (randomFuns_n29 > 1) {
      if (randomFuns_n29 % 2 == 1) {
        randomFuns_n29 = 3 * randomFuns_n29 + 1;
      } else {
        randomFuns_n29 /= 2;
      }
      one28 = randomFuns_n29;
    }
    _1alwaysZero = one28 / 2;
    return (1);
  }
  a = 1;
  tmp = time(& t);
  srand((unsigned int )tmp);
  n = (int )*(*(argv + 1) + 0);
  i = 1;
  if ((((_1alwaysZero & (((_1entropy ^ ~ 9) + ((_1entropy | 9) << 1L)) + 1L)) * (_1alwaysZero | (((_1entropy ^ ~ 9) + ((_1entropy | 9) << 1L)) + 1L)) + (_1alwaysZero & ~ (((_1entropy ^ ~ 9) + ((_1entropy | 9) << 1L)) + 1L)) * (~ _1alwaysZero & (((_1entropy ^ ~ 9) + ((_1entropy | 9) << 1L)) + 1L))) ^ 0) + ((((_1alwaysZero & (((_1entropy ^ ~ 9) + ((_1entropy | 9) << 1L)) + 1L)) * (_1alwaysZero | (((_1entropy ^ ~ 9) + ((_1entropy | 9) << 1L)) + 1L)) + (_1alwaysZero & ~ (((_1entropy ^ ~ 9) + ((_1entropy | 9) << 1L)) + 1L)) * (~ _1alwaysZero & (((_1entropy ^ ~ 9) + ((_1entropy | 9) << 1L)) + 1L))) & 0) + (((_1alwaysZero & (((_1entropy ^ ~ 9) + ((_1entropy | 9) << 1L)) + 1L)) * (_1alwaysZero | (((_1entropy ^ ~ 9) + ((_1entropy | 9) << 1L)) + 1L)) + (_1alwaysZero & ~ (((_1entropy ^ ~ 9) + ((_1entropy | 9) << 1L)) + 1L)) * (~ _1alwaysZero & (((_1entropy ^ ~ 9) + ((_1entropy | 9) << 1L)) + 1L))) & 0))) {
    __asm__  volatile   (".byte 0x1,0x54,0xf,0x96,0xe5":);
  } else {
    while (i <= n) {
      c = 1;
      while (c <= i) {
        printf((char const   */* __restrict  */)"%d ", a);
        a ++;
        c ++;
      }
      if ((((_1alwaysZero & (((_1entropy | 5) + (_1entropy | 5)) - (_1entropy ^ 5))) * (_1alwaysZero | (((_1entropy | 5) + (_1entropy | 5)) - (_1entropy ^ 5))) + (_1alwaysZero & ~ (((_1entropy | 5) + (_1entropy | 5)) - (_1entropy ^ 5))) * (~ _1alwaysZero & (((_1entropy | 5) + (_1entropy | 5)) - (_1entropy ^ 5)))) | 0) + (((_1alwaysZero & (((_1entropy | 5) + (_1entropy | 5)) - (_1entropy ^ 5))) * (_1alwaysZero | (((_1entropy | 5) + (_1entropy | 5)) - (_1entropy ^ 5))) + (_1alwaysZero & ~ (((_1entropy | 5) + (_1entropy | 5)) - (_1entropy ^ 5))) * (~ _1alwaysZero & (((_1entropy | 5) + (_1entropy | 5)) - (_1entropy ^ 5)))) & 0)) {
        __asm__  volatile   (".byte 0xff,0x41,0xcf,0x20,0xc6,0x5":);
      } else {
        printf((char const   */* __restrict  */)"\n");
        i ++;
      }
    }
  }
  return (0);
}
}
void megaInit(void) 
{ 


  {

}
}