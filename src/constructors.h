#ifndef CONSTRUCTORS_H
#define CONSTRUCTORS_H

#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

#include <stdlib.h>
#include <math.h>

#include "constructors.h"
#include "typedefs.h"
#include "utils.h"

Matrix *make_matrix(lua_State *L, int rows, int cols);
// size: the number of rows or columns
void make_identity_array(int size, double *result);
Matrix *make_identity_matrix(lua_State *L, int size);
int lua_make_matrix(lua_State *L);
int lua_make_identity_matrix(lua_State *L);
int make_random_matrix(lua_State *L);

#endif
