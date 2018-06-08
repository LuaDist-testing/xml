/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class Parser
 *
 * This file has been generated by dub 2.2.0.
 */
#include "dub/dub.h"
#include "xml/Parser.h"

using namespace xml;

/** xml::Parser::Parser(Type type=Default)
 * include/xml/Parser.h:48
 */
static int Parser_Parser(lua_State *L) {
  try {
    int top__ = lua_gettop(L);
    if (top__ >= 1) {
      xml::Parser::Type type = (xml::Parser::Type)dub::checkint(L, 1);
      Parser *retval__ = new Parser(type);
      dub::pushudata(L, retval__, "xml.Parser", true);
      return 1;
    } else {
      Parser *retval__ = new Parser();
      dub::pushudata(L, retval__, "xml.Parser", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub::error(L);
}

/** xml::Parser::~Parser()
 * include/xml/Parser.h:49
 */
static int Parser__Parser(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub::checksdata_d(L, 1, "xml.Parser"));
    if (userdata->gc) {
      Parser *self = (Parser *)userdata->ptr;
      delete self;
    }
    userdata->gc = false;
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "__gc: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "__gc: Unknown exception");
  }
  return dub::error(L);
}

/** LuaStackSize xml::Parser::load(lua_State *L)
 * include/xml/Parser.h:53
 */
static int Parser_load(lua_State *L) {
  try {
    Parser *self = *((Parser **)dub::checksdata(L, 1, "xml.Parser"));
    return self->load(L);
  } catch (std::exception &e) {
    lua_pushfstring(L, "load: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "load: Unknown exception");
  }
  return dub::error(L);
}



// --=============================================== __tostring
static int Parser___tostring(lua_State *L) {
  Parser *self = *((Parser **)dub::checksdata_n(L, 1, "xml.Parser"));
  lua_pushfstring(L, "xml.Parser: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg Parser_member_methods[] = {
  { "new"          , Parser_Parser        },
  { "__gc"         , Parser__Parser       },
  { "load"         , Parser_load          },
  { "__tostring"   , Parser___tostring    },
  { "deleted"      , dub::isDeleted       },
  { NULL, NULL},
};

// --=============================================== CONSTANTS
static const struct dub::const_Reg Parser_const[] = {
  { "Default"      , Parser::Default      },
  { "TrimWhitespace", Parser::TrimWhitespace },
  { "NonDestructive", Parser::NonDestructive },
  { "Fastest"      , Parser::Fastest      },
  { NULL, 0},
};

extern "C" int luaopen_xml_Parser(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "xml.Parser");
  // <mt>
  // register class constants
  dub::register_const(L, Parser_const);

  // register member methods
  dub::fregister(L, Parser_member_methods);
  // setup meta-table
  dub::setup(L, "xml.Parser");
  // <mt>
  return 1;
}
