/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.3/include/stddef.h"
typedef unsigned long size_t;
#line 31 "/usr/include/bits/types.h"
typedef unsigned char __u_char;
#line 32 "/usr/include/bits/types.h"
typedef unsigned short __u_short;
#line 34 "/usr/include/bits/types.h"
typedef unsigned long __u_long;
#line 134 "/usr/include/bits/types.h"
typedef unsigned long __dev_t;
#line 135 "/usr/include/bits/types.h"
typedef unsigned int __uid_t;
#line 136 "/usr/include/bits/types.h"
typedef unsigned int __gid_t;
#line 137 "/usr/include/bits/types.h"
typedef unsigned long __ino_t;
#line 141 "/usr/include/bits/types.h"
typedef long __off_t;
#line 142 "/usr/include/bits/types.h"
typedef long __off64_t;
#line 149 "/usr/include/bits/types.h"
typedef long __time_t;
#line 45 "/usr/include/stdio.h"
struct _IO_FILE;
#line 45
struct _IO_FILE;
#line 49 "/usr/include/stdio.h"
typedef struct _IO_FILE FILE;
#line 170 "/usr/include/libio.h"
struct _IO_FILE;
#line 180 "/usr/include/libio.h"
typedef void _IO_lock_t;
#line 186 "/usr/include/libio.h"
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
#line 271 "/usr/include/libio.h"
struct _IO_FILE {
   int _flags ;
   char *_IO_read_ptr ;
   char *_IO_read_end ;
   char *_IO_read_base ;
   char *_IO_write_base ;
   char *_IO_write_ptr ;
   char *_IO_write_end ;
   char *_IO_buf_base ;
   char *_IO_buf_end ;
   char *_IO_save_base ;
   char *_IO_backup_base ;
   char *_IO_save_end ;
   struct _IO_marker *_markers ;
   struct _IO_FILE *_chain ;
   int _fileno ;
   int _flags2 ;
   __off_t _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   __off64_t _offset ;
   void *__pad1 ;
   void *__pad2 ;
   void *__pad3 ;
   void *__pad4 ;
   size_t __pad5 ;
   int _mode ;
   char _unused2[(15UL * sizeof(int ) - 4UL * sizeof(void *)) - sizeof(size_t )] ;
};
#line 35 "/usr/include/sys/types.h"
typedef __u_char u_char;
#line 36 "/usr/include/sys/types.h"
typedef __u_short u_short;
#line 38 "/usr/include/sys/types.h"
typedef __u_long u_long;
#line 50 "/usr/include/sys/types.h"
typedef __ino_t ino_t;
#line 62 "/usr/include/sys/types.h"
typedef __dev_t dev_t;
#line 67 "/usr/include/sys/types.h"
typedef __gid_t gid_t;
#line 82 "/usr/include/sys/types.h"
typedef __uid_t uid_t;
#line 76 "/usr/include/time.h"
typedef __time_t time_t;
#line 78 "my-sendmail.h"
struct header {
   char *h_field ;
   char *h_value ;
   struct header *h_link ;
   u_short h_flags ;
};
#line 87 "my-sendmail.h"
typedef struct header HDR;
#line 90 "my-sendmail.h"
struct address {
   char *q_paddr ;
   char *q_user ;
   char *q_ruser ;
   char *q_host ;
   u_long q_flags ;
   uid_t q_uid ;
   gid_t q_gid ;
   char *q_home ;
   char *q_fullname ;
   struct address *q_next ;
   struct address *q_alias ;
   char *q_owner ;
   struct address *q_tchain ;
   char *q_orcpt ;
   char *q_status ;
   char *q_rstatus ;
   char *q_statmta ;
   short q_specificity ;
};
#line 114 "my-sendmail.h"
typedef struct address ADDRESS;
#line 118 "my-sendmail.h"
struct envelope {
   HDR *e_header ;
   long e_msgpriority ;
   time_t e_ctime ;
   char *e_to ;
   ADDRESS e_from ;
   char *e_sender ;
   char **e_fromdomain ;
   ADDRESS *e_sendqueue ;
   ADDRESS *e_errorqueue ;
   long e_msgsize ;
   long e_flags ;
   int e_nrcpts ;
   short e_class ;
   short e_hopcount ;
   short e_nsent ;
   short e_sendmode ;
   short e_errormode ;
   short e_timeoutclass ;
   struct envelope *e_parent ;
   struct envelope *e_sibling ;
   char *e_bodytype ;
   FILE *e_dfp ;
   char *e_id ;
   FILE *e_xfp ;
   FILE *e_lockfp ;
   char *e_message ;
   char *e_statmsg ;
   char *e_msgboundary ;
   char *e_origrcpt ;
   char *e_envid ;
   char *e_status ;
   time_t e_dtime ;
   int e_ntries ;
   dev_t e_dfdev ;
   ino_t e_dfino ;
   char *e_macro[256] ;
};
#line 159 "my-sendmail.h"
typedef struct envelope ENVELOPE;
#line 127 "/usr/include/string.h"
extern  __attribute__((__nothrow__)) char *strcpy(char * __restrict  __dest , char const   * __restrict  __src )  __attribute__((__nonnull__(1,2))) ;
#line 534
extern  __attribute__((__nothrow__)) int strcasecmp(char const   *__s1 , char const   *__s2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 339 "/usr/include/stdio.h"
extern int printf(char const   * __restrict  __format  , ...) ;
#line 604
extern char *fgets(char * __restrict  __s , int __n , FILE * __restrict  __stream ) ;
#line 819
extern void perror(char const   *__s ) ;
#line 471 "/usr/include/stdlib.h"
extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__)) ;
#line 75 "my-sendmail.h"
int mime_fromqp(u_char *infile , u_char **outfile , int state , int maxlen ) ;
#line 166
char *xalloc(int sz ) ;
#line 167
void mime7to8(HDR *header , ENVELOPE *e ) ;
#line 70 "mime1-bad.c"
char *xalloc(int sz ) 
{ register char *p ;
  void *tmp ;
  unsigned int __cil_tmp4 ;
  size_t __cil_tmp5 ;
  void *__cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  unsigned long __cil_tmp8 ;

  {
#line 77
  if (sz <= 0) {
#line 78
    sz = 1;
  } else {

  }
  {
#line 80
  __cil_tmp4 = (unsigned int )sz;
#line 80
  __cil_tmp5 = (size_t )__cil_tmp4;
#line 80
  tmp = malloc(__cil_tmp5);
#line 80
  p = (char *)tmp;
  }
  {
#line 81
  __cil_tmp6 = (void *)0;
#line 81
  __cil_tmp7 = (unsigned long )__cil_tmp6;
#line 81
  __cil_tmp8 = (unsigned long )p;
#line 81
  if (__cil_tmp8 == __cil_tmp7) {
    {
#line 83
    perror("Out of memory!!");
    }
  } else {

  }
  }
#line 85
  return (p);
}
}
#line 88
char *hvalue(char *field , HDR *header ) ;
#line 113 "mime1-bad.c"
void mime7to8(HDR *header , ENVELOPE *e ) 
{ register char *p ;
  u_char *obp ;
  char buf[50] ;
  char canary[10] ;
  u_char obuf[50] ;
  char *tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  unsigned long __cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  char *__cil_tmp14 ;
  char * __restrict  __cil_tmp15 ;
  char const   * __restrict  __cil_tmp16 ;
  char *__cil_tmp17 ;
  void *__cil_tmp18 ;
  unsigned long __cil_tmp19 ;
  unsigned long __cil_tmp20 ;
  char const   * __restrict  __cil_tmp21 ;
  char const   *__cil_tmp22 ;
  char const   * __restrict  __cil_tmp23 ;
  u_char **__cil_tmp24 ;
  unsigned long __cil_tmp25 ;
  unsigned long __cil_tmp26 ;
  unsigned long __cil_tmp27 ;
  unsigned long __cil_tmp28 ;
  char *__cil_tmp29 ;
  char * __restrict  __cil_tmp30 ;
  int __cil_tmp31 ;
  unsigned long __cil_tmp32 ;
  unsigned long __cil_tmp33 ;
  FILE *__cil_tmp34 ;
  FILE * __restrict  __cil_tmp35 ;
  void *__cil_tmp36 ;
  unsigned long __cil_tmp37 ;
  unsigned long __cil_tmp38 ;
  char const   * __restrict  __cil_tmp39 ;
  unsigned long __cil_tmp40 ;
  unsigned long __cil_tmp41 ;
  u_char *__cil_tmp42 ;
  char *__cil_tmp43 ;
  unsigned long __cil_tmp44 ;
  unsigned long __cil_tmp45 ;
  char *__cil_tmp46 ;
  int __cil_tmp47 ;
  char const   * __restrict  __cil_tmp48 ;
  unsigned long __cil_tmp49 ;
  unsigned long __cil_tmp50 ;
  u_char *__cil_tmp51 ;
  u_char **__cil_tmp52 ;
  u_char *__cil_tmp53 ;
  int __cil_tmp54 ;
  char const   * __restrict  __cil_tmp55 ;
  unsigned long __cil_tmp56 ;
  unsigned long __cil_tmp57 ;
  u_char *__cil_tmp58 ;
  char *__cil_tmp59 ;
  unsigned long __cil_tmp60 ;
  unsigned long __cil_tmp61 ;
  char *__cil_tmp62 ;
  int __cil_tmp63 ;
  unsigned long __cil_tmp64 ;
  unsigned long __cil_tmp65 ;
  char *__cil_tmp66 ;
  u_char *__cil_tmp67 ;
  char const   * __restrict  __cil_tmp68 ;
  unsigned long __cil_tmp69 ;
  unsigned long __cil_tmp70 ;
  char *__cil_tmp71 ;
  u_char **__cil_tmp72 ;
  unsigned long __cil_tmp73 ;
  unsigned long __cil_tmp74 ;
  char const   * __restrict  __cil_tmp75 ;
  unsigned long __cil_tmp76 ;
  unsigned long __cil_tmp77 ;
  char *__cil_tmp78 ;
  char const   * __restrict  __cil_tmp79 ;
  unsigned long __cil_tmp80 ;
  unsigned long __cil_tmp81 ;
  u_char *__cil_tmp82 ;
  char const   * __restrict  __cil_tmp83 ;
  char const   * __restrict  __cil_tmp84 ;
  unsigned long __cil_tmp85 ;
  unsigned long __cil_tmp86 ;
  char *__cil_tmp87 ;

  {
  {
#line 124
  __cil_tmp12 = 0 * 1UL;
#line 124
  __cil_tmp13 = (unsigned long )(canary) + __cil_tmp12;
#line 124
  __cil_tmp14 = (char *)__cil_tmp13;
#line 124
  __cil_tmp15 = (char * __restrict  )__cil_tmp14;
#line 124
  __cil_tmp16 = (char const   * __restrict  )"GOOD";
#line 124
  strcpy(__cil_tmp15, __cil_tmp16);
#line 126
  __cil_tmp17 = (char *)"Content-Transfer-Encoding";
#line 126
  tmp = hvalue(__cil_tmp17, header);
#line 126
  p = tmp;
  }
  {
#line 127
  __cil_tmp18 = (void *)0;
#line 127
  __cil_tmp19 = (unsigned long )__cil_tmp18;
#line 127
  __cil_tmp20 = (unsigned long )p;
#line 127
  if (__cil_tmp20 == __cil_tmp19) {
    {
#line 129
    __cil_tmp21 = (char const   * __restrict  )"Content-Transfer-Encoding not found in header\n";
#line 129
    printf(__cil_tmp21);
    }
#line 130
    return;
  } else {

  }
  }
  {
#line 141
  __cil_tmp22 = (char const   *)p;
#line 141
  tmp___2 = strcasecmp(__cil_tmp22, "base64");
  }
#line 141
  if (tmp___2 == 0) {
    {
#line 143
    __cil_tmp23 = (char const   * __restrict  )"We do not handle base64 encoding...\n";
#line 143
    printf(__cil_tmp23);
    }
#line 144
    return;
  } else {
#line 149
    __cil_tmp24 = & obp;
#line 149
    __cil_tmp25 = 0 * 1UL;
#line 149
    __cil_tmp26 = (unsigned long )(obuf) + __cil_tmp25;
#line 149
    *__cil_tmp24 = (u_char *)__cil_tmp26;
    {
#line 150
    while (1) {
      while_continue: /* CIL Label */ ;
      {
#line 150
      __cil_tmp27 = 0 * 1UL;
#line 150
      __cil_tmp28 = (unsigned long )(buf) + __cil_tmp27;
#line 150
      __cil_tmp29 = (char *)__cil_tmp28;
#line 150
      __cil_tmp30 = (char * __restrict  )__cil_tmp29;
#line 150
      __cil_tmp31 = (int )50UL;
#line 150
      __cil_tmp32 = (unsigned long )e;
#line 150
      __cil_tmp33 = __cil_tmp32 + 256;
#line 150
      __cil_tmp34 = *((FILE **)__cil_tmp33);
#line 150
      __cil_tmp35 = (FILE * __restrict  )__cil_tmp34;
#line 150
      tmp___1 = fgets(__cil_tmp30, __cil_tmp31, __cil_tmp35);
      }
      {
#line 150
      __cil_tmp36 = (void *)0;
#line 150
      __cil_tmp37 = (unsigned long )__cil_tmp36;
#line 150
      __cil_tmp38 = (unsigned long )tmp___1;
#line 150
      if (__cil_tmp38 != __cil_tmp37) {

      } else {
#line 150
        goto while_break;
      }
      }
      {
#line 152
      __cil_tmp39 = (char const   * __restrict  )"buf-obuf=%u\n";
#line 152
      __cil_tmp40 = 0 * 1UL;
#line 152
      __cil_tmp41 = (unsigned long )(obuf) + __cil_tmp40;
#line 152
      __cil_tmp42 = (u_char *)__cil_tmp41;
#line 152
      __cil_tmp43 = (char *)__cil_tmp42;
#line 152
      __cil_tmp44 = 0 * 1UL;
#line 152
      __cil_tmp45 = (unsigned long )(buf) + __cil_tmp44;
#line 152
      __cil_tmp46 = (char *)__cil_tmp45;
#line 152
      __cil_tmp47 = __cil_tmp46 - __cil_tmp43;
#line 152
      printf(__cil_tmp39, __cil_tmp47);
#line 153
      __cil_tmp48 = (char const   * __restrict  )"obp-obuf=%u\n";
#line 153
      __cil_tmp49 = 0 * 1UL;
#line 153
      __cil_tmp50 = (unsigned long )(obuf) + __cil_tmp49;
#line 153
      __cil_tmp51 = (u_char *)__cil_tmp50;
#line 153
      __cil_tmp52 = & obp;
#line 153
      __cil_tmp53 = *__cil_tmp52;
#line 153
      __cil_tmp54 = __cil_tmp53 - __cil_tmp51;
#line 153
      printf(__cil_tmp48, __cil_tmp54);
#line 154
      __cil_tmp55 = (char const   * __restrict  )"canary-obuf=%u\n";
#line 154
      __cil_tmp56 = 0 * 1UL;
#line 154
      __cil_tmp57 = (unsigned long )(obuf) + __cil_tmp56;
#line 154
      __cil_tmp58 = (u_char *)__cil_tmp57;
#line 154
      __cil_tmp59 = (char *)__cil_tmp58;
#line 154
      __cil_tmp60 = 0 * 1UL;
#line 154
      __cil_tmp61 = (unsigned long )(canary) + __cil_tmp60;
#line 154
      __cil_tmp62 = (char *)__cil_tmp61;
#line 154
      __cil_tmp63 = __cil_tmp62 - __cil_tmp59;
#line 154
      printf(__cil_tmp55, __cil_tmp63);
#line 156
      __cil_tmp64 = 0 * 1UL;
#line 156
      __cil_tmp65 = (unsigned long )(buf) + __cil_tmp64;
#line 156
      __cil_tmp66 = (char *)__cil_tmp65;
#line 156
      __cil_tmp67 = (u_char *)__cil_tmp66;
#line 156
      tmp___0 = mime_fromqp(__cil_tmp67, & obp, 0, 50);
      }
#line 156
      if (tmp___0 == 0) {
        {
#line 157
        __cil_tmp68 = (char const   * __restrict  )"canary = %s\n";
#line 157
        __cil_tmp69 = 0 * 1UL;
#line 157
        __cil_tmp70 = (unsigned long )(canary) + __cil_tmp69;
#line 157
        __cil_tmp71 = (char *)__cil_tmp70;
#line 157
        printf(__cil_tmp68, __cil_tmp71);
        }
#line 158
        goto while_continue;
      } else {

      }
      {
#line 163
      __cil_tmp72 = & obp;
#line 163
      __cil_tmp73 = 0 * 1UL;
#line 163
      __cil_tmp74 = (unsigned long )(obuf) + __cil_tmp73;
#line 163
      *__cil_tmp72 = (u_char *)__cil_tmp74;
#line 164
      __cil_tmp75 = (char const   * __restrict  )"canary = %s\n";
#line 164
      __cil_tmp76 = 0 * 1UL;
#line 164
      __cil_tmp77 = (unsigned long )(canary) + __cil_tmp76;
#line 164
      __cil_tmp78 = (char *)__cil_tmp77;
#line 164
      printf(__cil_tmp75, __cil_tmp78);
      }
    }
    while_break: /* CIL Label */ ;
    }
  }
  {
#line 169
  __cil_tmp79 = (char const   * __restrict  )"obuf = %s\n";
#line 169
  __cil_tmp80 = 0 * 1UL;
#line 169
  __cil_tmp81 = (unsigned long )(obuf) + __cil_tmp80;
#line 169
  __cil_tmp82 = (u_char *)__cil_tmp81;
#line 169
  printf(__cil_tmp79, __cil_tmp82);
#line 170
  __cil_tmp83 = (char const   * __restrict  )"canary should be GOOD\n";
#line 170
  printf(__cil_tmp83);
#line 171
  __cil_tmp84 = (char const   * __restrict  )"canary = %s\n";
#line 171
  __cil_tmp85 = 0 * 1UL;
#line 171
  __cil_tmp86 = (unsigned long )(canary) + __cil_tmp85;
#line 171
  __cil_tmp87 = (char *)__cil_tmp86;
#line 171
  printf(__cil_tmp84, __cil_tmp87);
  }
#line 172
  return;
}
}
#line 185 "mime1-bad.c"
static char index_hex[128]  = 
#line 185
  {      (char)-1,      (char)-1,      (char)-1,      (char)-1, 
        (char)-1,      (char)-1,      (char)-1,      (char)-1, 
        (char)-1,      (char)-1,      (char)-1,      (char)-1, 
        (char)-1,      (char)-1,      (char)-1,      (char)-1, 
        (char)-1,      (char)-1,      (char)-1,      (char)-1, 
        (char)-1,      (char)-1,      (char)-1,      (char)-1, 
        (char)-1,      (char)-1,      (char)-1,      (char)-1, 
        (char)-1,      (char)-1,      (char)-1,      (char)-1, 
        (char)-1,      (char)-1,      (char)-1,      (char)-1, 
        (char)-1,      (char)-1,      (char)-1,      (char)-1, 
        (char)-1,      (char)-1,      (char)-1,      (char)-1, 
        (char)-1,      (char)-1,      (char)-1,      (char)-1, 
        (char)0,      (char)1,      (char)2,      (char)3, 
        (char)4,      (char)5,      (char)6,      (char)7, 
        (char)8,      (char)9,      (char)-1,      (char)-1, 
        (char)-1,      (char)-1,      (char)-1,      (char)-1, 
        (char)-1,      (char)10,      (char)11,      (char)12, 
        (char)13,      (char)14,      (char)15,      (char)-1, 
        (char)-1,      (char)-1,      (char)-1,      (char)-1, 
        (char)-1,      (char)-1,      (char)-1,      (char)-1, 
        (char)-1,      (char)-1,      (char)-1,      (char)-1, 
        (char)-1,      (char)-1,      (char)-1,      (char)-1, 
        (char)-1,      (char)-1,      (char)-1,      (char)-1, 
        (char)-1,      (char)-1,      (char)-1,      (char)-1, 
        (char)-1,      (char)10,      (char)11,      (char)12, 
        (char)13,      (char)14,      (char)15,      (char)-1, 
        (char)-1,      (char)-1,      (char)-1,      (char)-1, 
        (char)-1,      (char)-1,      (char)-1,      (char)-1, 
        (char)-1,      (char)-1,      (char)-1,      (char)-1, 
        (char)-1,      (char)-1,      (char)-1,      (char)-1, 
        (char)-1,      (char)-1,      (char)-1,      (char)-1, 
        (char)-1,      (char)-1,      (char)-1,      (char)-1};
#line 236
extern int ( /* missing proto */  __CPROVER_assert)() ;
#line 199 "mime1-bad.c"
int mime_fromqp(u_char *infile , u_char **outfile , int state , int maxlen ) 
{ u_char *ooutfile ;
  int c1 ;
  int c2 ;
  int nchar ;
  u_char *tmp ;
  u_char *tmp___0 ;
  u_char *tmp___1 ;
  u_char *tmp___2 ;
  u_char *tmp___3 ;
  u_char *tmp___4 ;
  u_char __cil_tmp15 ;
  u_char __cil_tmp16 ;
  u_char __cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  unsigned long __cil_tmp19 ;
  char __cil_tmp20 ;
  unsigned long __cil_tmp21 ;
  unsigned long __cil_tmp22 ;
  char __cil_tmp23 ;
  char const   * __restrict  __cil_tmp24 ;
  u_char *__cil_tmp25 ;
  int __cil_tmp26 ;
  u_char *__cil_tmp27 ;
  int __cil_tmp28 ;
  int __cil_tmp29 ;
  u_char *__cil_tmp30 ;
  int __cil_tmp31 ;
  int __cil_tmp32 ;
  char const   * __restrict  __cil_tmp33 ;
  u_char *__cil_tmp34 ;
  int __cil_tmp35 ;
  u_char *__cil_tmp36 ;
  int __cil_tmp37 ;
  int __cil_tmp38 ;
  u_char *__cil_tmp39 ;
  char const   * __restrict  __cil_tmp40 ;
  u_char *__cil_tmp41 ;
  int __cil_tmp42 ;
  u_char *__cil_tmp43 ;
  int __cil_tmp44 ;
  int __cil_tmp45 ;
  u_char *__cil_tmp46 ;

  {
#line 208
  nchar = 0;
#line 210
  ooutfile = *outfile;
  {
#line 212
  while (1) {
    while_continue: /* CIL Label */ ;
#line 212
    tmp___3 = infile;
#line 212
    infile = infile + 1;
#line 212
    __cil_tmp15 = *tmp___3;
#line 212
    c1 = (int )__cil_tmp15;
#line 212
    if (c1 != 0) {

    } else {
#line 212
      goto while_break;
    }
#line 214
    if (c1 == 61) {
#line 216
      tmp = infile;
#line 216
      infile = infile + 1;
#line 216
      __cil_tmp16 = *tmp;
#line 216
      c1 = (int )__cil_tmp16;
#line 216
      if (c1 == 0) {
#line 217
        goto while_break;
      } else {

      }
#line 219
      if (c1 == 10) {
#line 221
        if (state == 0) {
#line 222
          return (0);
        } else {

        }
      } else {
#line 226
        tmp___0 = infile;
#line 226
        infile = infile + 1;
#line 226
        __cil_tmp17 = *tmp___0;
#line 226
        c2 = (int )__cil_tmp17;
#line 226
        if (c2 == 0) {
#line 227
          goto while_break;
        } else {

        }
#line 229
        if (c1 < 0) {
#line 229
          c1 = -1;
        } else
#line 229
        if (c1 > 127) {
#line 229
          c1 = -1;
        } else {
#line 229
          __cil_tmp18 = c1 * 1UL;
#line 229
          __cil_tmp19 = (unsigned long )(index_hex) + __cil_tmp18;
#line 229
          __cil_tmp20 = *((char *)__cil_tmp19);
#line 229
          c1 = (int )__cil_tmp20;
        }
#line 230
        if (c2 < 0) {
#line 230
          c2 = -1;
        } else
#line 230
        if (c2 > 127) {
#line 230
          c2 = -1;
        } else {
#line 230
          __cil_tmp21 = c2 * 1UL;
#line 230
          __cil_tmp22 = (unsigned long )(index_hex) + __cil_tmp21;
#line 230
          __cil_tmp23 = *((char *)__cil_tmp22);
#line 230
          c2 = (int )__cil_tmp23;
        }
#line 232
        nchar = nchar + 1;
#line 232
        if (nchar > maxlen) {
#line 233
          goto while_break;
        } else {

        }
        {
#line 235
        __cil_tmp24 = (char const   * __restrict  )"1: outfile - ooutfile = %d  <?  MAXLINE=%d\n";
#line 235
        __cil_tmp25 = *outfile;
#line 235
        __cil_tmp26 = __cil_tmp25 - ooutfile;
#line 235
        printf(__cil_tmp24, __cil_tmp26, 50);
        }
        {
#line 236
        __cil_tmp27 = *outfile;
#line 236
        __cil_tmp28 = __cil_tmp27 - ooutfile;
#line 236
        __cil_tmp29 = __cil_tmp28 < 50;
#line 236
        __CPROVER_assert(__cil_tmp29, "TESTCASE");
#line 239
        tmp___1 = *outfile;
#line 239
        __cil_tmp30 = *outfile;
#line 239
        *outfile = __cil_tmp30 + 1;
#line 239
        __cil_tmp31 = c1 << 4;
#line 239
        __cil_tmp32 = __cil_tmp31 | c2;
#line 239
        *tmp___1 = (u_char )__cil_tmp32;
        }
      }
    } else {
#line 244
      if (state == 1) {
#line 244
        if (c1 == 95) {
#line 245
          c1 = ' ';
        } else {

        }
      } else {

      }
#line 247
      nchar = nchar + 1;
#line 247
      if (nchar > maxlen) {
#line 248
        goto while_break;
      } else {

      }
      {
#line 250
      __cil_tmp33 = (char const   * __restrict  )"2: outfile - ooutfile = %d  <?  MAXLINE=%d\n";
#line 250
      __cil_tmp34 = *outfile;
#line 250
      __cil_tmp35 = __cil_tmp34 - ooutfile;
#line 250
      printf(__cil_tmp33, __cil_tmp35, 50);
      }
      {
#line 251
      __cil_tmp36 = *outfile;
#line 251
      __cil_tmp37 = __cil_tmp36 - ooutfile;
#line 251
      __cil_tmp38 = __cil_tmp37 < 50;
#line 251
      __CPROVER_assert(__cil_tmp38, "TESTCASE");
#line 254
      tmp___2 = *outfile;
#line 254
      __cil_tmp39 = *outfile;
#line 254
      *outfile = __cil_tmp39 + 1;
#line 254
      *tmp___2 = (u_char )c1;
      }
#line 256
      if (c1 == 10) {
#line 257
        goto while_break;
      } else {

      }
    }
  }
  while_break: /* CIL Label */ ;
  }
  {
#line 262
  __cil_tmp40 = (char const   * __restrict  )"3: outfile - ooutfile = %d  <?  MAXLINE=%d\n";
#line 262
  __cil_tmp41 = *outfile;
#line 262
  __cil_tmp42 = __cil_tmp41 - ooutfile;
#line 262
  printf(__cil_tmp40, __cil_tmp42, 50);
  }
  {
#line 263
  __cil_tmp43 = *outfile;
#line 263
  __cil_tmp44 = __cil_tmp43 - ooutfile;
#line 263
  __cil_tmp45 = __cil_tmp44 < 50;
#line 263
  __CPROVER_assert(__cil_tmp45, "TESTCASE");
#line 266
  tmp___4 = *outfile;
#line 266
  __cil_tmp46 = *outfile;
#line 266
  *outfile = __cil_tmp46 + 1;
#line 266
  *tmp___4 = (u_char )'\000';
  }
#line 267
  return (1);
}
}
#line 289 "mime1-bad.c"
char *hvalue(char *field , HDR *header ) 
{ register HDR *h ;
  int tmp ;
  void *__cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  unsigned long __cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  u_short __cil_tmp10 ;
  int __cil_tmp11 ;
  int __cil_tmp12 ;
  int __cil_tmp13 ;
  char *__cil_tmp14 ;
  char const   *__cil_tmp15 ;
  char const   *__cil_tmp16 ;
  unsigned long __cil_tmp17 ;
  unsigned long __cil_tmp18 ;
  unsigned long __cil_tmp19 ;
  unsigned long __cil_tmp20 ;
  void *__cil_tmp21 ;

  {
#line 295
  h = header;
  {
#line 295
  while (1) {
    while_continue: /* CIL Label */ ;
    {
#line 295
    __cil_tmp5 = (void *)0;
#line 295
    __cil_tmp6 = (unsigned long )__cil_tmp5;
#line 295
    __cil_tmp7 = (unsigned long )h;
#line 295
    if (__cil_tmp7 != __cil_tmp6) {

    } else {
#line 295
      goto while_break;
    }
    }
    {
#line 297
    __cil_tmp8 = (unsigned long )h;
#line 297
    __cil_tmp9 = __cil_tmp8 + 24;
#line 297
    __cil_tmp10 = *((u_short *)__cil_tmp9);
#line 297
    __cil_tmp11 = (int )__cil_tmp10;
#line 297
    __cil_tmp12 = __cil_tmp11 & 4;
#line 297
    __cil_tmp13 = __cil_tmp12 != 0;
#line 297
    if (! __cil_tmp13) {
      {
#line 297
      __cil_tmp14 = *((char **)h);
#line 297
      __cil_tmp15 = (char const   *)__cil_tmp14;
#line 297
      __cil_tmp16 = (char const   *)field;
#line 297
      tmp = strcasecmp(__cil_tmp15, __cil_tmp16);
      }
#line 297
      if (tmp == 0) {
        {
#line 299
        __cil_tmp17 = (unsigned long )h;
#line 299
        __cil_tmp18 = __cil_tmp17 + 8;
#line 299
        return (*((char **)__cil_tmp18));
        }
      } else {

      }
    } else {

    }
    }
#line 295
    __cil_tmp19 = (unsigned long )h;
#line 295
    __cil_tmp20 = __cil_tmp19 + 16;
#line 295
    h = *((struct header **)__cil_tmp20);
  }
  while_break: /* CIL Label */ ;
  }
  {
#line 301
  __cil_tmp21 = (void *)0;
#line 301
  return ((char *)__cil_tmp21);
  }
}
}
