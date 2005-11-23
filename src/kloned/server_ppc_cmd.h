/*
 * Copyright (c) 2005 by KoanLogic s.r.l. <http://www.koanlogic.com>
 * All rights reserved.
 *
 * This file is part of KLone, and as such it is subject to the license stated
 * in the LICENSE file which you have received as part of this distribution.
 *
 * $Id: server_ppc_cmd.h,v 1.4 2005/11/23 17:27:01 tho Exp $
 */

#ifndef _KLONE_PPC_COMMAND_H_
#define _KLONE_PPC_COMMAND_H_
#include <stdio.h>
#include <klone/server.h>

/* nop */
int server_ppc_cmd_nop(server_t *s);
int server_ppc_cb_nop(ppc_t *ppc, int fd, unsigned char cmd, char *data, 
    size_t size, void *vso);

/* add log */
int syslog_to_klog(int level);
int server_ppc_cmd_log_add(server_t *s, int level, const char *str);
int server_ppc_cb_log_add(ppc_t *ppc, int fd, unsigned char cmd, char *data, 
    size_t size, void *vso);

int server_ppc_cmd_fork_child(server_t *s);
int server_ppc_cb_fork_child(ppc_t *ppc, int fd, unsigned char cmd, char *data,
    size_t size, void *vso);

#endif
