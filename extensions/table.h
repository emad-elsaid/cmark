#ifndef CMARK_TABLE_H
#define CMARK_TABLE_H

#include "cmark-extensions.h"


extern cmark_node_type CMARK_NODE_TABLE, CMARK_NODE_TABLE_ROW,
    CMARK_NODE_TABLE_CELL;

cmark_syntax_extension *create_table_extension(void);

#endif
