#ifndef WD_C_FUNCTION_H
#define WD_C_FUNCTION_H

void wd_isalnum(void);
void wd_isalpha(void);
void wd_isascii(void);
void wd_iscntrl(void);
void wd_isdigit(void);
void wd_isgraph(void);
void wd_isprint(void);
void wd_islower(void);
void wd_isupper(void);
void wd_isspace(void);
void wd_ispunct(void);
void wd_isxdigit(void);
void wd_atof(void);
void wd_strtod(void);
void wd_atoi(void);
void wd_atol(void);
void wd_strtol(void);
void wd_strtoul(void);
void wd_gcvt(void);
void wd_toascii(void);
void wd_tolower(void);
void wd_toupper(void);

void wd_calloc(void);
void wd_malloc(void);
void wd_free(void);
void wd_getpagesize(void);

void wd_mmap(void);
void wd_munmap(void);

void wd_time(void);
void wd_asctime(void);
void wd_ctime(void);
void wd_gmtime(void);
void wd_localtime(void);
void wd_mktime(void);
void wd_gettimeofday(void);
void wd_settimeofday(void);

void wd_bcmp(void);
void wd_memcmp(void);
void wd_bcopy(void);
void wd_memcpy(void);
void wd_memmove(void);
void wd_bzero(void);
void wd_index(void);
void wd_rindex(void);
void wd_memccpy(void);
void wd_memchr(void);
void wd_memset(void);


void wd_ttyname(void);

#endif // C_FUNCTION_H
