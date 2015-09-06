#ifndef __BOLT_UTILS_H
#define __BOLT_UTILS_H

int bolt_utils_file_exists(char *path);
void bolt_daemonize();
char *bolt_strndup(char *str, int length);
int bolt_atoi(char *start, int length, int *retval);

#endif
