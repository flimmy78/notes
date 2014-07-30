#ifndef __LLIST_H__
#define __LLIST_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node_t{
    
    void *data;
    struct node_t *next;
    struct node_t *prev;
};

typedef struct llist_t {
    
    struct node_t head;
    int num;
    int size;

}LLIST;

#define DEBUG0(...)
#define DEBUG1(...)     fprintf(stderr, _VA_ARGS__);

#define ERRP(con, ret, flag, ...)   do              \
            {                                       \
                if (con)                            \
                {                                   \
                    DEBUG##flag(__VA_ARGS__)        \
                    ret;                            \
                }                                   \
            } while (0)

#define APPEND      -1
#define PREPEND     -2

typedef void (llist_op_t)(const void *);
typedef int (llist_cmp_t)(const void *, const void *);

#define MAGIC       "LLIST"

LLIST *llist_create(int size);
int llist_append(void *data, LLIST *handle);
void llist_travel(llist_op_t *op, LLIST *handle);
void llist_destroy(LLIST **handle);
int llist_prepend(void *data, LLIST *handle);
int llist_insert(void *data, int index, LLIST *handle);
int llist_ind_del(int index, LLIST *handle);
void *llist_ind(int index, LLIST *handle);
int llist_num(LLIST *handle);
int llist_size(LLIST *handle);
int llist_delete(void *key, llist_cmp_t *cmp, LLIST *handle);
void *llist_find(void *key, llist_cmp_t *cmp, LLIST *handle);
void llist_sort(llist_cmp_t *cmp, LLIST *handle);
int llist_store(const char *path, LLIST *handle);
LLIST *llist_load(const char *path);

#endif /* __LLIST_H__ */
