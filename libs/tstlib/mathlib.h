#ifndef MATHLIB_H
#define MATHLIB_H

#include "lua.h"
#include "lualib.h"  
#include "lauxlib.h"

#ifndef LUA_TSTAPI
#define LUA_TSTAPI __declspec(dllexport)
#else
#define LUA_TSTAPI __declspec(dllimport)
#endif

LUA_TSTAPI int luaopen_tstlib(lua_State *L);

#endif //MATHLIB_H