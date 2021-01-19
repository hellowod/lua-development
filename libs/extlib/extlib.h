#ifndef extlib_h
#define extlib_h

#include "lprefix.h"
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"

LUAMOD_API int luaopen_ext(lua_State *L);

#endif