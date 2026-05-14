#ifndef CMARK_STRIKETHROUGH_H
#define CMARK_STRIKETHROUGH_H

#include "cmark-extensions.h"

extern cmark_node_type CMARK_NODE_STRIKETHROUGH;
cmark_syntax_extension *create_strikethrough_extension(void);

#endif
