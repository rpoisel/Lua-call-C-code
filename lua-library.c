#include <library.h>

#include <lua.h>
#include <lauxlib.h>

static int l_add(lua_State *L) {
  int a = lua_tonumber(L, 1);
  int b = lua_tonumber(L, 2);
  lua_pushnumber(L, add(a, b));
  return 1; /* number of results */
}

static const struct luaL_reg sample[] = {
    {"add", l_add}, {NULL, NULL} /* sentinel */
};

int luaopen_sample(lua_State *L) {
  luaL_openlib(L, "sample", sample, 0);
  return 1;
}
