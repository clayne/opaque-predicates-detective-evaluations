/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _IO_FILE;
struct timeval;
extern void exit(int status ) ;
extern int pthread_cond_signal(int *cond ) ;
extern int fseek(struct _IO_FILE *stream , long offs , int whence ) ;
extern int fclose(void *stream ) ;
extern int close(int filedes ) ;
extern int pthread_create(void *thread , void *attr , void *start_routine , void *arg ) ;
char **_global_argv  =    (char **)0;
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
typedef unsigned long size_t;
extern int atoi(char const   *s ) ;
extern void *malloc(unsigned long size ) ;
extern double ceil(double x ) ;
extern int getpagesize() ;
extern int posix_memalign(void **memptr , unsigned long alignment , unsigned long size ) ;
extern int pthread_cond_broadcast(int *cond ) ;
extern int pthread_join(void *thread , void **value_ptr ) ;
extern int rand() ;
extern void free(void *ptr ) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
int main(int argc , char **argv , char **_formal_envp ) ;
extern unsigned long write(int filedes , void *buf , unsigned long nbyte ) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern int gettimeofday(struct timeval *tv , void *tz ) ;
int _global_argc  =    0;
void megaInit(void) ;
char **_global_envp  =    (char **)0;
extern int fscanf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int scanf(char const   *format  , ...) ;
extern long clock(void) ;
long _1entropy  =    0;
extern void perror(char const   *str ) ;
extern unsigned long read(int filedes , void *buf , unsigned long nbyte ) ;
extern int pthread_mutex_unlock(int *mutex ) ;
extern int gethostname(char *name , unsigned long namelen ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
extern int pthread_cond_wait(int *cond , int *mutex ) ;
extern void qsort(void *base , unsigned long nel , unsigned long width , int (*compar)(void *a ,
                                                                                       void *b ) ) ;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern int pthread_mutex_init(int *mutex , int *attr ) ;
extern int strcmp(char const   *a , char const   *b ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern void signal(int sig , void *func ) ;
extern double difftime(long tv1 , long tv0 ) ;
extern long time(long *tloc ) ;
typedef struct _IO_FILE FILE;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern int open(char const   *filename , int oflag  , ...) ;
extern double sqrt(double x ) ;
extern double log(double x ) ;
extern int snprintf(char *str , unsigned long size , char const   *format  , ...) ;
unsigned int ELFHash(char *str , unsigned int len ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
int main(int argc , char **argv , char **_formal_envp ) 
{ 
  unsigned char *str ;
  unsigned int hash ;
  size_t tmp ;
  unsigned int tmp___0 ;
  int _BARRIER_0 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;
  str = (unsigned char *)*(argv + 1);
  tmp = strlen((char const   *)str);
  tmp___0 = ELFHash((char *)str, (unsigned int )tmp);
  hash = tmp___0;
  if (((((_1alwaysZero & ((_1entropy & 6) * (_1entropy | 6) + (_1entropy & ~ 6) * (~ _1entropy & 6))) * (_1alwaysZero | ((_1entropy & 6) * (_1entropy | 6) + (_1entropy & ~ 6) * (~ _1entropy & 6))) + (_1alwaysZero & ~ ((_1entropy & 6) * (_1entropy | 6) + (_1entropy & ~ 6) * (~ _1entropy & 6))) * (~ _1alwaysZero & ((_1entropy & 6) * (_1entropy | 6) + (_1entropy & ~ 6) * (~ _1entropy & 6)))) ^ ~ 1) + ((((_1alwaysZero & ((_1entropy & 6) * (_1entropy | 6) + (_1entropy & ~ 6) * (~ _1entropy & 6))) * (_1alwaysZero | ((_1entropy & 6) * (_1entropy | 6) + (_1entropy & ~ 6) * (~ _1entropy & 6))) + (_1alwaysZero & ~ ((_1entropy & 6) * (_1entropy | 6) + (_1entropy & ~ 6) * (~ _1entropy & 6))) * (~ _1alwaysZero & ((_1entropy & 6) * (_1entropy | 6) + (_1entropy & ~ 6) * (~ _1entropy & 6)))) | 1) + (((_1alwaysZero & ((_1entropy & 6) * (_1entropy | 6) + (_1entropy & ~ 6) * (~ _1entropy & 6))) * (_1alwaysZero | ((_1entropy & 6) * (_1entropy | 6) + (_1entropy & ~ 6) * (~ _1entropy & 6))) + (_1alwaysZero & ~ ((_1entropy & 6) * (_1entropy | 6) + (_1entropy & ~ 6) * (~ _1entropy & 6))) * (~ _1alwaysZero & ((_1entropy & 6) * (_1entropy | 6) + (_1entropy & ~ 6) * (~ _1entropy & 6)))) | 1))) + 1L) {
    {
    if ((((_1alwaysZero & ((_1entropy & ~ 7) + 7)) * (_1alwaysZero | ((_1entropy & ~ 7) + 7)) + (_1alwaysZero & ~ ((_1entropy & ~ 7) + 7)) * (~ _1alwaysZero & ((_1entropy & ~ 7) + 7))) | 1) + (((_1alwaysZero & ((_1entropy & ~ 7) + 7)) * (_1alwaysZero | ((_1entropy & ~ 7) + 7)) + (_1alwaysZero & ~ ((_1entropy & ~ 7) + 7)) * (~ _1alwaysZero & ((_1entropy & ~ 7) + 7))) & 1)) {
      if (((((_1alwaysZero & ((_1entropy & ~ 4) - (~ _1entropy & 4))) * (_1alwaysZero | ((_1entropy & ~ 4) - (~ _1entropy & 4))) + (_1alwaysZero & ~ ((_1entropy & ~ 4) - (~ _1entropy & 4))) * (~ _1alwaysZero & ((_1entropy & ~ 4) - (~ _1entropy & 4)))) ^ ~ 0) + ((((_1alwaysZero & ((_1entropy & ~ 4) - (~ _1entropy & 4))) * (_1alwaysZero | ((_1entropy & ~ 4) - (~ _1entropy & 4))) + (_1alwaysZero & ~ ((_1entropy & ~ 4) - (~ _1entropy & 4))) * (~ _1alwaysZero & ((_1entropy & ~ 4) - (~ _1entropy & 4)))) | 0) + (((_1alwaysZero & ((_1entropy & ~ 4) - (~ _1entropy & 4))) * (_1alwaysZero | ((_1entropy & ~ 4) - (~ _1entropy & 4))) + (_1alwaysZero & ~ ((_1entropy & ~ 4) - (~ _1entropy & 4))) * (~ _1alwaysZero & ((_1entropy & ~ 4) - (~ _1entropy & 4)))) | 0))) + 1L) {
        __asm__  volatile   (".byte 0x89,0xe5,0x48,0x8b,0x4f,0x60,0x4c,0x8b":);
      } else
      if (hash == 184139465U) {
        printf((char const   */* __restrict  */)"You win!\n");
      }
    } else {
      __asm__  volatile   (".byte 0x74,0x8,0x40,0x30,0xc0,0xe8,0x82,0x31":);
    }
    }
  } else {
    __asm__  volatile   (".byte 0xe5,0x46,0xe6,0xf0,0xe9,0xdf":);
  }
  return (0);
}
}
void megaInit(void) 
{ 


  {

}
}
unsigned int ELFHash(char *str , unsigned int len ) 
{ 
  unsigned int hash ;
  unsigned int x ;
  unsigned int i ;

  {
  hash = 0U;
  x = 0U;
  i = 0U;
  i = 0U;
  while (i < len) {
    hash = (hash << 4) + (unsigned int )*str;
    x = (unsigned int )((long )hash & 4026531840L);
    if (x != 0U) {
      hash ^= x >> 24;
    }
    hash &= ~ x;
    str ++;
    i ++;
  }
  return (hash);
}
}