/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for library xml
 *
 * This file has been generated by dub 2.2.0.
 */
#include "dub/dub.h"
#include "xml/Parser.h"

using namespace xml;

extern "C" {
int luaopen_xml_Parser(lua_State *L);
}

// --=============================================== FUNCTIONS
// Functions from namespace xml
static const struct luaL_Reg xml_functions[] = {
  { NULL, NULL},
};


extern "C" int luaopen_xml_core(lua_State *L) {
  lua_newtable(L);
  // <lib>
  dub::fregister(L, xml_functions);
  // <lib>

  luaopen_xml_Parser(L);
  lua_setfield(L, -2, "Parser");


  // <lib>
  return 1;
}
