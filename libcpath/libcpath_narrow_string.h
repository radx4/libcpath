/*
 * Narrow character string functions
 *
 * Copyright (c) 2008-2012, Joachim Metz <jbmetz@users.sourceforge.net>
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

#if !defined( _LIBCPATH_NARROW_STRING_H )
#define _LIBCPATH_NARROW_STRING_H

#include <common.h>
#include <types.h>

#include "libcpath_extern.h"
#include "libcpath_libcerror.h"
#include "libcpath_types.h"

#if defined( __cplusplus )
extern "C" {
#endif

LIBCPATH_EXTERN \
int libcpath_narrow_string_split(
     const char *string,
     size_t string_size,
     char delimiter,
     libcpath_narrow_split_string_t **split_string,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif

