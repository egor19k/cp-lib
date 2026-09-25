#ifndef CP_H
#define CP_H

#include <stdlib.h>
#include <string.h>

#define new(T) ((T*)malloc(sizeof(T)))
#define new0(T) ((T*)calloc(1, sizeof(T)))
#define new_array(T,n) ((T*)malloc((n) * sizeof(T)))
#define new0_array(T,n) ((T*)calloc((n), sizeof(T)))
#define del(p) free(p)

#define class struct
#define classed(T) typedef class T T; class T

#define method(ret, name, T, ...) ret (*name)(T self, ##__VA_ARGS__)
#define CALL(obj, m, ...) (obj)->m(obj, ##__VA_ARGS__)
#define this self

#ifndef ARRAY_SIZE
#define ARRAY_SIZE(a) (sizeof(a) / sizeof((a)[0]))
#endif

#define ok(p) ((p) != NULL)
#define fail(p) ((p) == NULL)
#define cast(T,p) ((T)(p))

#endif