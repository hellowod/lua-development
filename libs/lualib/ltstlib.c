#define ltstlib_c
#define LUA_LIB

#include "lprefix.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lua.h"

#include "lauxlib.h"
#include "lualib.h"

#include <stdio.h>

static int tst_average(lua_State *L) {
	int n = lua_gettop(L);
	lua_Number sum = 0;
	int i;

	for (i = 1; i <= n; i++) {
		sum += lua_tonumberx(L, i, NULL);
	}
	// 压入平均值 
	lua_pushnumber(L, sum / n);
	// 压入和
	lua_pushnumber(L, sum);

	// 返回两个结果
	return 2;
}

static int tst_add(lua_State *L) {
	lua_Number op1 = luaL_checknumber(L, 1);
	lua_Number op2 = luaL_checknumber(L, 2);

	lua_pushnumber(L, op1 + op2);

	return 1;
}

static int tst_sub(lua_State *L) {
	lua_Number op1 = luaL_checknumber(L, 1);
	lua_Number op2 = luaL_checknumber(L, 2);

	lua_pushnumber(L, op1 - op2);

	return 1;
}

static int tst_hello(lua_State* L) {
	printf("hello world!");
	return 0;
}

static const struct luaL_Reg tstlib[] = {
	{ "average", tst_average },
	{ "add", tst_add },
	{ "sub", tst_sub },
	{ "hello", tst_hello },
	{ NULL, NULL }
};

LUAMOD_API int luaopen_tst(lua_State *L) {
	luaL_newlib(L, tstlib);
	return 1;
}