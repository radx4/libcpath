/*
 * Definitions for libcpath
 *
 * Copyright (c) 2008-2012, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBCPATH_DEFINITIONS_H )
#define _LIBCPATH_DEFINITIONS_H

#include <libcpath/types.h>

#define LIBCPATH_VERSION			20120715

/* The libcpath version string
 */
#define LIBCPATH_VERSION_STRING			"20120715"

#if defined( WINAPI )
#define LIBCPATH_SEPARATOR			'\\'

#else
#define LIBCPATH_SEPARATOR			'/'

#endif /* defined( WINAPI ) */

#endif

