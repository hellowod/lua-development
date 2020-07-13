#include <stdio.h>
#include <math.h>
#include <limits.h>

typedef int (*lua_CFunction) (void *L);

#define numfield	int n;    /* numbers */

#define lua_lock(L)     ((void) 0) 
#define lua_unlock(L)   ((void) 0)

typedef struct luaL_Reg {
	const char *name;
	lua_CFunction func;
} luaL_Reg;


int main(int argc, char const *argv[]) {
    lua_lock(NULL);
    numfield;
    n = 10;
    lua_unlock(NULL);

    printf("%d", n);

    return 0;
}

