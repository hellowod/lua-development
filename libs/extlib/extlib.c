#define lextlib_c
#define LUA_LIB

#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <stdarg.h>

#include "extlib.h"

static int ext_number(lua_State *L) {
	lua_Integer d = luaL_checkinteger(L, 1);
	lua_pushinteger(L, d + 100);
	return 1;
}

static const struct luaL_Reg extlib[] = {
	{"getnumber", ext_number},
	{NULL, NULL}
};

LUAMOD_API int luaopen_ext(lua_State* L) {
	luaL_newlib(L, extlib);
	return 1;
}