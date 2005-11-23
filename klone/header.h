/*
 * Copyright (c) 2005 by KoanLogic s.r.l. <http://www.koanlogic.com>
 * All rights reserved.
 *
 * This file is part of KLone, and as such it is subject to the license stated
 * in the LICENSE file which you have received as part of this distribution.
 *
 * $Id: header.h,v 1.4 2005/11/23 17:27:01 tho Exp $
 */

#ifndef _KLONE_HEADER_H_
#define _KLONE_HEADER_H_

#include <klone/field.h>
#include <klone/io.h>

typedef struct
{
     fields_t fields;         
     size_t nfields;
} header_t;

int header_create(header_t**);
int header_load(header_t*, io_t *);
int header_free(header_t*);
int header_add_field(header_t *h, field_t *f);
int header_del_field(header_t *h, field_t *f);
field_t* header_get_field(header_t *h, const char *name);
int header_clear(header_t *h);

const char* header_get_field_value(header_t *h, const char *name);

int header_set_field(header_t *h, const char *name, const char *value);

field_t* header_get_fieldn(header_t *h, size_t idx);
size_t header_field_count(header_t *h);

#endif
