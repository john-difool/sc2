/*
 *  Copyright 2006  Serge van den Boom <svdb@stack.nl>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _NETOPTIONS_H
#define _NETOPTIONS_H

#include "types_uqm.h"

#include <stddef.h>

#define NETPLAY_NUM_PLAYERS 2
		// Not using NUM_PLAYERS because that would mean we'd have
		// to include init.h, and all that comes with it.
		// XXX: Don't use a hardcoded limit.

typedef struct {
	bool isServer;
	const char *host;
	const char *port;
			// May be given as a service name.
} NetplayPeerOptions;

typedef struct {
	const char *metaServer;
	const char *metaPort;
			// May be given as a service name.
	NetplayPeerOptions peer[NETPLAY_NUM_PLAYERS];
	size_t inputDelay;
} NetplayOptions;
extern NetplayOptions netplayOptions;


#endif  /* _NETOPTIONS_H */



