#include "stdcntrl.h"

#include "logging.h"
#include "tplgymgt.h"

#define PDDD 1

#define DEFAULT_NODE_LIST node_lib
#define DEFAULT_NLINK_LIST nlink_lib
#define DEFAULT_ADJ_LIST adj_lib

#define DEFAULT_LIST_ROOT_NODE find_root_node(DEFAULT_NODE_LIST)

#define INITIAL_NODE -1
#define INITIAL_ADJ -1
#define INITIAL_NLINK -1
#define THIS_NODE_ID 0
#define THIS_NODE find_node_by_key(DEFAULT_NODE_LIST, THIS_NODE_ID)
#define ROOT_NODE find_root_node(DEFAULT_NODE_LIST)

#define UNINITIALIZED_NODE -2
