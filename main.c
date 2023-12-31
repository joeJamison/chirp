#include "stdcntrl.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pddd.h"

int main(void) {
    set_loglevel(LOG_DEBUG);


    printf("\n******************************pddd START******************************\n");
    printf("**********************************************************************\n\n");


    int i = 0;
    char *nodeids[3], *nlinkids[3], *adjids[3];
    node *node_lib = create_node(0);
    node *node_ptr = node_lib;
    nlink *nlink_lib = create_nlink(0);
    nlink *nlink_ptr = nlink_lib;
    adj *adj_lib = create_adj(0);
    adj *adj_ptr = adj_lib;
    topology_db db;
    db.node_lib = node_lib;
    db.nlink_lib = nlink_lib;
    db.adj_lib = adj_lib;

    /*@-usereleased -branchstate@*/
    node_ptr->NEXT = create_node(1);
    printf("CREATE NODE (%d) @ %s\n", node_ptr->KEY, node_ptr->ID);
    node_ptr = node_ptr->NEXT;
    node_ptr->NEXT = create_node(2);
    printf("CREATE NODE (%d) @ %s\n", node_ptr->KEY, node_ptr->ID);
    node_ptr = node_ptr->NEXT;
    node_ptr->NEXT = create_node(3);
    printf("CREATE NODE (%d) @ %s\n", node_ptr->KEY, node_ptr->ID);
    node_ptr = node_ptr->NEXT;
    node_ptr->NEXT = create_node(4);
    printf("CREATE NODE (%d) @ %s\n", node_ptr->KEY, node_ptr->ID);
    node_ptr = node_ptr->NEXT;
    node_ptr->NEXT = create_node(5);
    printf("CREATE NODE (%d) @ %s\n", node_ptr->KEY, node_ptr->ID);
    node_ptr = node_ptr->NEXT;
    node_ptr->NEXT = create_node(6);
    printf("CREATE NODE (%d) @ %s\n", node_ptr->KEY, node_ptr->ID);
    node_ptr = node_ptr->NEXT;
    printf("CREATE NODE (%d) @ %s\n", node_ptr->KEY, node_ptr->ID);
    //printf("THIS_NODE = %s\n", THIS_NODE->ID);
    printf("-----------------------------------------------------------------------------\n");

    nlink_ptr->NEXT = create_nlink(1);
    nlink_ptr->PRI = 10;  // NLINK 0
    printf("CREATE NLINK (%d) @ %s (PRI: %d)\n", nlink_ptr->KEY, nlink_ptr->ID, nlink_ptr->PRI);
    nlink_ptr = nlink_ptr->NEXT;
    nlink_ptr->NEXT = create_nlink(2);
    nlink_ptr->PRI = 5;  // NLINK 1
    printf("CREATE NLINK (%d) @ %s (PRI: %d)\n", nlink_ptr->KEY, nlink_ptr->ID, nlink_ptr->PRI);
    nlink_ptr = nlink_ptr->NEXT;
    nlink_ptr->NEXT = create_nlink(3);
    nlink_ptr->PRI = 10;  // NLINK 2
    printf("CREATE NLINK (%d) @ %s (PRI: %d)\n", nlink_ptr->KEY, nlink_ptr->ID, nlink_ptr->PRI);
    nlink_ptr = nlink_ptr->NEXT;
    nlink_ptr->NEXT = create_nlink(4);
    nlink_ptr->PRI = 5;  // NLINK 3
    printf("CREATE NLINK (%d) @ %s (PRI: %d)\n", nlink_ptr->KEY, nlink_ptr->ID, nlink_ptr->PRI);
    nlink_ptr = nlink_ptr->NEXT;
    nlink_ptr->NEXT = create_nlink(5);
    nlink_ptr->PRI = 100;  // NLINK 4
    printf("CREATE NLINK (%d) @ %s (PRI: %d)\n", nlink_ptr->KEY, nlink_ptr->ID, nlink_ptr->PRI);
    nlink_ptr = nlink_ptr->NEXT;
    nlink_ptr->NEXT = create_nlink(6);
    //nlink_ptr->PRI = 1;  // NLINK 5
    nlink_ptr->PRI = 200;  // NLINK 5
    printf("CREATE NLINK (%d) @ %s (PRI: %d)\n", nlink_ptr->KEY, nlink_ptr->ID, nlink_ptr->PRI);
    nlink_ptr = nlink_ptr->NEXT;
    nlink_ptr->PRI = 10;  // NLINK 6
    printf("CREATE NLINK (%d) @ %s (PRI: %d)\n", nlink_ptr->KEY, nlink_ptr->ID, nlink_ptr->PRI);
    printf("-----------------------------------------------------------------------------\n");
    adj_ptr->NEXT = create_adj(1);
    //printf("CREATE ADJ (%d)  @ %s [%p]\n", adj_ptr->KEY, adj_ptr->ID, (void*)adj_ptr);
    adj_ptr = adj_ptr->NEXT;
    adj_ptr->NEXT = create_adj(2);
    //printf("CREATE ADJ (%d)  @ %s [%p]\n", adj_ptr->KEY, adj_ptr->ID, (void*)adj_ptr);
    adj_ptr = adj_ptr->NEXT;
    adj_ptr->NEXT = create_adj(3);
    //printf("CREATE ADJ (%d)  @ %s [%p]\n", adj_ptr->KEY, adj_ptr->ID, (void*)adj_ptr);
    adj_ptr = adj_ptr->NEXT;
    adj_ptr->NEXT = create_adj(4);
    //printf("CREATE ADJ (%d)  @ %s [%p]\n", adj_ptr->KEY, adj_ptr->ID, (void*)adj_ptr);
    adj_ptr = adj_ptr->NEXT;
    adj_ptr->NEXT = create_adj(5);
    //printf("CREATE ADJ (%d)  @ %s [%p]\n", adj_ptr->KEY, adj_ptr->ID, (void*)adj_ptr);
    adj_ptr = adj_ptr->NEXT;
    adj_ptr->NEXT = create_adj(6);
    //printf("CREATE ADJ (%d)  @ %s [%p]\n", adj_ptr->KEY, adj_ptr->ID, (void*)adj_ptr);
    adj_ptr = adj_ptr->NEXT;
    adj_ptr->NEXT = create_adj(7);
    //printf("CREATE ADJ (%d)  @ %s [%p]\n", adj_ptr->KEY, adj_ptr->ID, (void*)adj_ptr);
    adj_ptr = adj_ptr->NEXT;
    adj_ptr->NEXT = create_adj(8);
    //printf("CREATE ADJ (%d)  @ %s [%p]\n", adj_ptr->KEY, adj_ptr->ID, (void*)adj_ptr);
    adj_ptr = adj_ptr->NEXT;
    adj_ptr->NEXT = create_adj(9);
    //printf("CREATE ADJ (%d)  @ %s [%p]\n", adj_ptr->KEY, adj_ptr->ID, (void*)adj_ptr);
    adj_ptr = adj_ptr->NEXT;
    adj_ptr->NEXT = create_adj(10);
    //printf("CREATE ADJ (%d)  @ %s [%p]\n", adj_ptr->KEY, adj_ptr->ID, (void*)adj_ptr);
    adj_ptr = adj_ptr->NEXT;
    adj_ptr->NEXT = create_adj(11);
    //printf("CREATE ADJ (%d) @ %s [%p]\n", adj_ptr->KEY, adj_ptr->ID, (void*)adj_ptr);
    adj_ptr = adj_ptr->NEXT;
    adj_ptr->NEXT = create_adj(12);
    //printf("CREATE ADJ (%d) @ %s [%p]\n", adj_ptr->KEY, adj_ptr->ID, (void*)adj_ptr);
    adj_ptr = adj_ptr->NEXT;
    adj_ptr->NEXT = create_adj(13);
    //printf("CREATE ADJ (%d) @ %s [%p]\n", adj_ptr->KEY, adj_ptr->ID, (void*)adj_ptr);
    adj_ptr = adj_ptr->NEXT;
    //printf("CREATE ADJ (%d) @ %s [%p]\n", adj_ptr->KEY, adj_ptr->ID, (void*)adj_ptr);
    //printf("-----------------------------------------------------------------------------\n");
    for (i = 0; i <= 2; i++) {
        if (find_node_by_key(node_lib, i) != NULL) { /*@-nullderef -mustfreefresh@*/
            //printf("FOUND NODE %s @ (%d)\n", find_node_by_key(node_lib, i)->ID, find_node_by_key(node_lib, i)->KEY);
            /*@-onlytrans@*/
            nodeids[i] = find_node_by_key(node_lib, i)->ID; /*@+onlytrans@*/
        } /*@+nullderef +mustfreefresh@*/
        else {
            printf("ERR: Out of bounds\n");
        }
    }

    for (i = 0; i <= 2; i++) { /*@-usedef@*/
        if (find_node_by_id(node_lib, nodeids[i]) != NULL) { /*@-nullderef -mustfreefresh@*/
            //printf("FOUND NODE (%d) @ %s\n", find_node_by_id(node_lib, nodeids[i])->KEY, find_node_by_id(node_lib, nodeids[i])->ID);
            /*@-onlytrans@*/
            nlinkids[i] = find_nlink_by_key(nlink_lib, i)->ID; /*@+onlytrans@*/
        } /*@+nullderef +mustfreefresh@*/
        else {
            printf("ERR: Out of bounds\n");
        }
    } /*@+usedef@*/
    //printf("-----------------------------------------------------------------------------\n");
    for (i = 0; i <= 2; i++) {
        if (find_nlink_by_key(nlink_lib, i) != NULL) { /*@-nullderef -mustfreefresh@*/
            //printf("FOUND NLINK %s @ (%d)\n", find_nlink_by_key(nlink_lib, i)->ID, find_nlink_by_key(nlink_lib, i)->KEY);
        } /*@+nullderef +mustfreefresh@*/
        else {
            printf("ERR: Out of bounds\n");
        }
    }

    for (i = 0; i <= 2; i++) { /*@-usedef@*/
        if (find_nlink_by_id(nlink_lib, nlinkids[i]) != NULL) { /*@-nullderef -mustfreefresh@*/
            //printf("FOUND NLINK (%d) @ %s\n", find_nlink_by_id(nlink_lib, nlinkids[i])->KEY, find_nlink_by_id(nlink_lib, nlinkids[i])->ID);
            /*@-onlytrans@*/
            adjids[i] = find_adj_by_key(adj_lib, i)->ID; /*@+onlytrans@*/
        } /*@+nullderef +mustfreefresh@*/
        else {
            printf("ERR: Out of bounds\n");
        }
    } /*@+usedef@*/
    //printf("-----------------------------------------------------------------------------\n");
    for (i = 0; i <= 2; i++) {
        if (find_adj_by_key(adj_lib, i) != NULL) { /*@-nullderef -mustfreefresh@*/
            //printf("FOUND ADJ %s @ (%d)\n", find_adj_by_key(adj_lib, i)->ID, find_adj_by_key(adj_lib, i)->KEY);
        } /*@+nullderef +mustfreefresh@*/
        else {
            printf("ERR: Out of bounds\n");
        }
    }

    for (i = 0; i <= 2; i++) { /*@-usedef@*/
        if (find_adj_by_id(adj_lib, adjids[i]) != NULL) { /*@-nullderef -mustfreefresh@*/
            //printf("FOUND ADJ (%d) @ %s\n", find_adj_by_id(adj_lib, adjids[i])->KEY, find_adj_by_id(adj_lib, adjids[i])->ID);
            /*@-onlytrans@*/
            adjids[i] = find_adj_by_key(adj_lib, i)->ID; /*@+onlytrans@*/
        } /*@+nullderef +mustfreefresh@*/
        else {
            printf("ERR: Out of bounds\n");
        }
    } /*@+usedef@*/
    //printf("-----------------------------------------------------------------------------\n");

    /*@-mustfreefresh -nullderef -nullpass@*/
    printf("CONNECT NODE (0) to NODE (1) VIA NLINK (0) [BIDIRECTIONAL]\n");
    printf("CONNECT NODE (1) to NODE (2) VIA NLINK (1) [BIDIRECTIONAL]\n");
    printf("CONNECT NODE (1) to NODE (3) VIA NLINK (2) [BIDIRECTIONAL]\n");
    printf("CONNECT NODE (3) to NODE (4) VIA NLINK (3) [BIDIRECTIONAL]\n");
    printf("CONNECT NODE (3) to NODE (5) VIA NLINK (4) [BIDIRECTIONAL]\n");
    printf("CONNECT NODE (4) to NODE (5) VIA NLINK (5) [BIDIRECTIONAL]\n");
    printf("CONNECT NODE (5) to NODE (6) VIA NLINK (6) [BIDIRECTIONAL]\n");
    assign_adj(find_adj_by_key(adj_lib, 0), find_node_by_key(node_lib, 0), find_node_by_key(node_lib, 1), find_nlink_by_key(nlink_lib, 0));
    assign_adj(find_adj_by_key(adj_lib, 1), find_node_by_key(node_lib, 1), find_node_by_key(node_lib, 2), find_nlink_by_key(nlink_lib, 1));
    assign_adj(find_adj_by_key(adj_lib, 2), find_node_by_key(node_lib, 1), find_node_by_key(node_lib, 3), find_nlink_by_key(nlink_lib, 2));
    assign_adj(find_adj_by_key(adj_lib, 3), find_node_by_key(node_lib, 3), find_node_by_key(node_lib, 4), find_nlink_by_key(nlink_lib, 3));
    assign_adj(find_adj_by_key(adj_lib, 4), find_node_by_key(node_lib, 3), find_node_by_key(node_lib, 5), find_nlink_by_key(nlink_lib, 4));
    assign_adj(find_adj_by_key(adj_lib, 5), find_node_by_key(node_lib, 4), find_node_by_key(node_lib, 5), find_nlink_by_key(nlink_lib, 5));
    assign_adj(find_adj_by_key(adj_lib, 6), find_node_by_key(node_lib, 5), find_node_by_key(node_lib, 6), find_nlink_by_key(nlink_lib, 6));

    assign_adj(find_adj_by_key(adj_lib, 7), find_node_by_key(node_lib, 1), find_node_by_key(node_lib, 0), find_nlink_by_key(nlink_lib, 0));
    assign_adj(find_adj_by_key(adj_lib, 8), find_node_by_key(node_lib, 2), find_node_by_key(node_lib, 1), find_nlink_by_key(nlink_lib, 1));
    assign_adj(find_adj_by_key(adj_lib, 9), find_node_by_key(node_lib, 3), find_node_by_key(node_lib, 1), find_nlink_by_key(nlink_lib, 2));
    assign_adj(find_adj_by_key(adj_lib, 10), find_node_by_key(node_lib, 4), find_node_by_key(node_lib, 3), find_nlink_by_key(nlink_lib, 3));
    assign_adj(find_adj_by_key(adj_lib, 11), find_node_by_key(node_lib, 5), find_node_by_key(node_lib, 3), find_nlink_by_key(nlink_lib, 4));
    assign_adj(find_adj_by_key(adj_lib, 12), find_node_by_key(node_lib, 5), find_node_by_key(node_lib, 4), find_nlink_by_key(nlink_lib, 5));
    assign_adj(find_adj_by_key(adj_lib, 13), find_node_by_key(node_lib, 6), find_node_by_key(node_lib, 5), find_nlink_by_key(nlink_lib, 6));
    printf("-----------------------------------------------------------------------------\n");

    adj* myadj = find_adjs_by_snode(adj_lib, find_node_by_key(node_lib, 5));
    adj* myadjptr = myadj;
     if (strncmp(myadjptr->ID, NULLID, IDSTRLEN) == 0) {
         myadjptr = myadj->NEXT;
     }

    while (myadjptr != NULL) {
        //printf("FOUND ADJ WITH S_NODE (5): %d\n", myadjptr->D_NODE->KEY);
        myadjptr = myadjptr->NEXT;
    }
    destroy_adjchain(myadj);
    //printf("-----------------------------------------------------------------------------\n");

    adj* myadj2 = find_adjs_by_dnode(adj_lib, find_node_by_key(node_lib, 1));
    adj* myadjptr2 = myadj2;
    if (strncmp(myadjptr2->ID, NULLID, IDSTRLEN) == 0) {
        myadjptr2 = myadj2->NEXT;
    }

    while (myadjptr2 != NULL) {
        //printf("FOUND ADJ WITH D_NODE (1): %s\n", myadjptr2->ID);
        myadjptr2 = myadjptr2->NEXT;
    }
    destroy_adjchain(myadj2);
    //printf("-----------------------------------------------------------------------------\n");
/*
    printf("ADJ[0]->ID = %s\n", find_adj_by_key(adj_lib, 0)->ID);
    printf("ADJ[0]->S_NODE = %s\n", find_adj_by_key(adj_lib, 0)->S_NODE->ID);
    printf("ADJ[0]->D_NODE = %s\n", find_adj_by_key(adj_lib, 0)->D_NODE->ID);
    printf("ADJ[0]->VIA = %s (PRI: %d)\n", find_adj_by_key(adj_lib, 0)->VIA->ID, find_adj_by_key(adj_lib, 0)->VIA->PRI);
    printf("\n");
    printf("ADJ[1]->ID = %s\n", find_adj_by_key(adj_lib, 1)->ID);
    printf("ADJ[1]->S_NODE = %s\n", find_adj_by_key(adj_lib, 1)->S_NODE->ID);
    printf("ADJ[1]->D_NODE = %s\n", find_adj_by_key(adj_lib, 1)->D_NODE->ID);
    printf("ADJ[1]->VIA = %s (PRI: %d)\n", find_adj_by_key(adj_lib, 1)->VIA->ID, find_adj_by_key(adj_lib, 1)->VIA->PRI);
    printf("\n");
    printf("ADJ[2]->ID = %s\n", find_adj_by_key(adj_lib, 2)->ID);
    printf("ADJ[2]->S_NODE = %s\n", find_adj_by_key(adj_lib, 2)->S_NODE->ID);
    printf("ADJ[2]->D_NODE = %s\n", find_adj_by_key(adj_lib, 2)->D_NODE->ID);
    printf("ADJ[2]->VIA = %s (PRI: %d)\n", find_adj_by_key(adj_lib, 2)->VIA->ID, find_adj_by_key(adj_lib, 2)->VIA->PRI);
    printf("-----------------------------------------------------------------------------\n");
*/
    /*@+mustfreefresh +nullderef +nullpass@*/

    /*@-nullderef -mustfreefresh -compdef -nullpass@*/
    int root_node = 0;
    set_root_node_by_id(db, find_node_by_key(DEFAULT_NODE_LIST, root_node)->ID);
    printf("FOUND ROOT NODE: %s @ (%d)\n", DEFAULT_LIST_ROOT_NODE->ID, DEFAULT_LIST_ROOT_NODE->KEY);
    printf("NODES IN node_lib = %d\n", count_node_keys(DEFAULT_NODE_LIST));

//    printf("-----------------------------------------------------------------------------\n");
//     int nearest;
//     nearest = find_nearest_neighbor(db, find_node_by_key(node_lib, 3))->KEY;
//     printf("nearest = %d [%s]\n", nearest, find_node_by_key(db.node_lib, nearest)->ID);





    /*@-usedef@*/
//     int metric_src = 6; int metric_dst = 4;
//     int *out1 = (int*) calloc(MAXHOPS, sizeof(int));
//     //init_metric_chain(out1); done in get_ls_metric()
//     printf("get_ls_metric: (%d) -> (%d): ", metric_src, metric_dst);
//     get_ls_metric(db, metric_src, metric_dst, out1);
//     for (i = 1; i < get_metric_chain_len(out1); i++) {
//         printf("(%d) ", out1[i]);
//     }
//     printf("[METRIC: %d]\n", get_metric_chain_len(out1));
//     free(out1);
// 
//     int metric_src2 = 3; int metric_dst2 = 6;
//     int *out2 = (int*) calloc(MAXHOPS, sizeof(int));
//     //init_metric_chain(out2);
//     printf("get_ls_metric: (%d) -> (%d): ", metric_src2, metric_dst2);
//     get_ls_metric2(db, metric_src2, metric_dst2, out2);
//     for (i = 1; i < get_metric_chain_len(out2); i++) {
//         printf("(%d) ", out2[i]);
//     }
//     printf("[METRIC: %d]\n", get_metric_chain_len(out2));
// printf("\nDEBUG (mail): metric_len = %d\n", get_metric_chain_len(out2));
// 
//     free(out2);
// 
// printf("\n\n\n");
// 
//     int metric_src3 = 6; int metric_dst3 = 3;
//     int *out3 = (int*) calloc(MAXHOPS, sizeof(int));
//     //init_metric_chain(out3);
//     printf("get_ls_metric: (%d) -> (%d): ", metric_src3, metric_dst3);
//     get_ls_metric2(db, metric_src3, metric_dst3, out3);
//     for (i = 1; i < get_metric_chain_len(out3); i++) {
//         printf("(%d) ", out3[i]);
//     }
//     printf("[METRIC: %d]\n", get_metric_chain_len(out3));
// printf("\nDEBUG (mail): metric_len = %d\n", get_metric_chain_len(out3));
// 
//     free(out3);

// int fa, fb;
// int *out4= (int*) calloc(MAXHOPS, sizeof(int));
// for (fa = 0; fa <= 6; fa++) {
// for (fb = 0; fb <= 6; fb++) {
//     init_metric_chain(out4);
//     printf("get_ls_metric: (%d) -> (%d): ", fa, fb);
//     get_ls_metric2(db, fa, fb, out4);
// 
// 
// 
//     for (i = 1; i < get_metric_chain_len(out4); i++) {
//             printf("(%d) ", out4[i]);
//     }
//         printf("\t[METRIC: %d]\n", get_metric_chain_len(out4));
// 
// 
// }
// printf("---------------------------\n");
// }
// free(out4);

    /*@+usedef@*/
    /*+nullderef@*/

//     printf("-----------------------------------------------------------------------------\n");
// 
//     //unset_root_node_by_id(db, find_node_by_key(node_lib, 0)->ID);
//     set_root_node_by_id(db, find_node_by_key(node_lib, 6)->ID);
//     assign_root_metrics(db);
//     for (i = 0; i <= 6; i++) {
//         if (find_node_by_key(node_lib, i)->ROOT_METRIC != BAD_ROOT_METRIC) {
//             printf("NODE (%d) ROOT_METRIC = %d\n", i, find_node_by_key(node_lib, i)->ROOT_METRIC);
//         }
//         else {
//             printf("NODE (%d) ROOT_METRIC = BAD_ROOT_METRIC\n", i);
//         }
//     }
//
//    printf("-----------------------------------------------------------------------------\n");

//     printf("node:\n(0): %s\n(1): %s\n", node_lib->ID, node_lib->NEXT->ID);
//     if (find_lower_idstr(node_lib->ID, node_lib->NEXT->ID) == ENTITY_A)
//         printf("(0) has lowest ID value\n");
//     if (find_lower_idstr(node_lib->ID, node_lib->NEXT->ID) == ENTITY_B)
//         printf("(1) has lowest ID value\n");
// 
//     printf("\n");
// 
//     printf("node:\n(0): %s\n(1): %s\n", node_lib->ID, node_lib->NEXT->ID);
//     if (find_higher_idstr(node_lib->ID, node_lib->NEXT->ID) == ENTITY_A)
//         printf("(0) has highest ID value\n");
//     if (find_higher_idstr(node_lib->ID, node_lib->NEXT->ID) == ENTITY_B)
//         printf("(1) has highest ID value\n");
// 
//     printf("-----------------------------------------------------------------------------\n");

//    printf("CLEAN DATABASE\n");
    /*@-compdef -compdestroy@*/

//    debugmatrix();
    //calc_pathlen(db, 12);
//    calc_all_pathlens(db);
//    mytest();

//    int shortpage = find_shortest_pathpage(db);
//    printf("\nFOUND SHORTEST PATHPAGE: %d\n", shortpage);

    printf("\n*** SHORTEST PATH OUTPUT ***\n");
    int testpath[MAXHOPS];
    for (i = 0; i < MAXHOPS; i++) {
        testpath[i] = 0;
    }

    int START_NODE = 1;
    int STOP_NODE =  6;

    get_shortest_path(db, find_node_by_key(DEFAULT_NODE_LIST, START_NODE), find_node_by_key(DEFAULT_NODE_LIST, STOP_NODE), &testpath);
    printf("testpath[COUNT] = %d\n", testpath[COUNT]);
    for (i = 1; i < 10; i++) {
        printf("testpath[%d] = %d\n", i, testpath[i]);
    }


    cleanup_tplgy_database(db);

    /*@+branchstate +compdef@*/

    /*@-mustfreeonly@*/  /* node pointers were freed by destroy_nodechain() */
    return 0;
    /*@+mustfreeonly@ +compdestroy*/
}
