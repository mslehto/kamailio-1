/*
 * Common stuff
 *
 * Copyright (C) 2001-2003 FhG Fokus
 *
 * This file is part of Kamailio, a free SIP server.
 *
 * Kamailio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 * Kamailio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

/*!
 * \file
 * \brief SIP registrar module - common stuff
 * \ingroup registrar
 */


#ifndef COMMON_H
#define COMMON_H

#include "../../str.h"
#include "../../parser/parse_uri.h"

#define REG_GRUU_SEP	'-'

/*! \brief
 * Extract Address Of Record
 */
int extract_aor(str* _uri, str* _a, sip_uri_t *_pu);


#endif /* COMMON_H */
