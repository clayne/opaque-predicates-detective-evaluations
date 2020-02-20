/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _IO_FILE;
struct timeval;
extern int pthread_cond_signal(int *cond ) ;
extern void exit(int status ) ;
extern int fclose(void *stream ) ;
extern int fseek(struct _IO_FILE *stream , long offs , int whence ) ;
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
extern int atoi(char const   *s ) ;
extern void *malloc(unsigned long size ) ;
extern double ceil(double x ) ;
extern int getpagesize() ;
extern int posix_memalign(void **memptr , unsigned long alignment , unsigned long size ) ;
extern int pthread_join(void *thread , void **value_ptr ) ;
extern int pthread_cond_broadcast(int *cond ) ;
extern int rand() ;
extern void free(void *ptr ) ;
extern unsigned long strlen(char const   *s ) ;
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
extern int snprintf(char *str , unsigned long size , char const   *format  , ...) ;
extern double log(double x ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
void megaInit(void) 
{ 


  {

}
}
int main(int argc , char **argv , char **_formal_envp ) 
{ 
  int number ;
  int i ;
  int j ;
  int digit ;
  char *word[1000] ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int _BARRIER_0 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;

  if (argc < 2) {
    return (1);
  }
  i = 0;
  number = (int )*(*(argv + 1) + 0);
  while (number) {
    if ((((_1alwaysZero & ((_1entropy | 9) - (_1entropy & 9))) * (_1alwaysZero | ((_1entropy | 9) - (_1entropy & 9))) + (_1alwaysZero & ~ ((_1entropy | 9) - (_1entropy & 9))) * (~ _1alwaysZero & ((_1entropy | 9) - (_1entropy & 9)))) ^ 0) + ((((_1alwaysZero & ((_1entropy | 9) - (_1entropy & 9))) * (_1alwaysZero | ((_1entropy | 9) - (_1entropy & 9))) + (_1alwaysZero & ~ ((_1entropy | 9) - (_1entropy & 9))) * (~ _1alwaysZero & ((_1entropy | 9) - (_1entropy & 9)))) & 0) << 1L)) {
      __asm__  volatile   (".byte 0x2,0x0":);
    } else {
      digit = number % 10;
      number /= 10;
    }
    switch (digit) {
    case 0: 
    tmp = i;
    i ++;
    word[tmp] = (char *)"zero";
    break;
    case 1: 
    tmp___0 = i;
    i ++;
    word[tmp___0] = (char *)"one";
    break;
    case 2: 
    tmp___1 = i;
    i ++;
    word[tmp___1] = (char *)"two";
    break;
    case 3: 
    tmp___2 = i;
    i ++;
    word[tmp___2] = (char *)"three";
    break;
    case 4: 
    tmp___3 = i;
    i ++;
    word[tmp___3] = (char *)"four";
    {
    if (((((_1alwaysZero & (((_1entropy & ~ 8) + (_1entropy & ~ 8)) - (_1entropy ^ 8))) * (_1alwaysZero | (((_1entropy & ~ 8) + (_1entropy & ~ 8)) - (_1entropy ^ 8))) + (_1alwaysZero & ~ (((_1entropy & ~ 8) + (_1entropy & ~ 8)) - (_1entropy ^ 8))) * (~ _1alwaysZero & (((_1entropy & ~ 8) + (_1entropy & ~ 8)) - (_1entropy ^ 8)))) ^ ~ 0) + ((((_1alwaysZero & (((_1entropy & ~ 8) + (_1entropy & ~ 8)) - (_1entropy ^ 8))) * (_1alwaysZero | (((_1entropy & ~ 8) + (_1entropy & ~ 8)) - (_1entropy ^ 8))) + (_1alwaysZero & ~ (((_1entropy & ~ 8) + (_1entropy & ~ 8)) - (_1entropy ^ 8))) * (~ _1alwaysZero & (((_1entropy & ~ 8) + (_1entropy & ~ 8)) - (_1entropy ^ 8)))) | 0) << 1L)) + 1L) {
      __asm__  volatile   (".byte 0x0,0x0,0x0":);
    } else {
      break;
    }
    }
    case 5: 
    tmp___4 = i;
    i ++;
    word[tmp___4] = (char *)"five";
    break;
    case 6: 
    tmp___5 = i;
    i ++;
    word[tmp___5] = (char *)"six";
    break;
    case 7: 
    tmp___6 = i;
    i ++;
    word[tmp___6] = (char *)"seven";
    break;
    case 8: 
    tmp___7 = i;
    i ++;
    word[tmp___7] = (char *)"eight";
    break;
    case 9: 
    tmp___8 = i;
    i ++;
    word[tmp___8] = (char *)"nine";
    break;
    }
  }
  j = i - 1;
  while (1) {
    if ((((_1alwaysZero & (((_1entropy + 9) + 1L) + ((- _1entropy - 1L) | (- 9 - 1L)))) * (_1alwaysZero | (((_1entropy + 9) + 1L) + ((- _1entropy - 1L) | (- 9 - 1L)))) + (_1alwaysZero & ~ (((_1entropy + 9) + 1L) + ((- _1entropy - 1L) | (- 9 - 1L)))) * (~ _1alwaysZero & (((_1entropy + 9) + 1L) + ((- _1entropy - 1L) | (- 9 - 1L))))) - ~ 0) - 1L) {
      __asm__  volatile   (".byte 0xfd,0xff,0xff,0x48,0x8d,0xfd":);
    } else
    if (! (j >= 0)) {
      break;
    }
    printf((char const   */* __restrict  */)"%s ", word[j]);
    j --;
  }
  printf((char const   */* __restrict  */)"\n");
  return (0);
}
}