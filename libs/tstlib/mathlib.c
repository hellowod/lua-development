#include <stdio.h>
#include "mathlib.h"

static int math_average(lua_State *L) {
	int n = lua_gettop(L);
	double sum = 0;
	int i;

	for (i = 1; i <= n; i++) {
		sum += lua_tonumber(L, i);
	}
	// 压入平均值 
	lua_pushnumber(L, sum / n);
	// 压入和
	lua_pushnumber(L, sum);

	// 返回两个结果
	return 2;                   
}

static int math_add(lua_State *L) {
	lua_Number op1 = luaL_checknumber(L, 1);
	lua_Number op2 = luaL_checknumber(L, 2);

	lua_pushnumber(L, op1 + op2);

	return 1;
}

static int math_sub(lua_State *L) {
	lua_Number op1 = luaL_checknumber(L, 1);
	lua_Number op2 = luaL_checknumber(L, 2);

	lua_pushnumber(L, op1 - op2);

	return 1;
}

static int math_hello(lua_State* L) {
	printf("hello world!");
	return 0;
}

static const struct luaL_Reg tstlib[] = {
	{ "average", math_average },
	{ "add", math_add },
	{ "sub", math_sub },
	{ "hello", math_hello },
	{ NULL, NULL }
};

LUA_TSTAPI int luaopen_tstlib(lua_State *L) {
	luaL_newlib(L, tstlib);
	lua_pushvalue(L, -1);
	lua_setglobal(L, "tst");
	return 1;
}