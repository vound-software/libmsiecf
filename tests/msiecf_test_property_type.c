/*
 * Library property_type type test program
 *
 * Copyright (C) 2009-2022, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <common.h>
#include <file_stream.h>
#include <types.h>

#if defined( HAVE_STDLIB_H ) || defined( WINAPI )
#include <stdlib.h>
#endif

#include "msiecf_test_libcerror.h"
#include "msiecf_test_libmsiecf.h"
#include "msiecf_test_macros.h"
#include "msiecf_test_memory.h"
#include "msiecf_test_unused.h"

#include "../libmsiecf/libmsiecf_property_type.h"

/* The main program
 */
#if defined( HAVE_WIDE_SYSTEM_CHARACTER )
int wmain(
     int argc MSIECF_TEST_ATTRIBUTE_UNUSED,
     wchar_t * const argv[] MSIECF_TEST_ATTRIBUTE_UNUSED )
#else
int main(
     int argc MSIECF_TEST_ATTRIBUTE_UNUSED,
     char * const argv[] MSIECF_TEST_ATTRIBUTE_UNUSED )
#endif
{
	MSIECF_TEST_UNREFERENCED_PARAMETER( argc )
	MSIECF_TEST_UNREFERENCED_PARAMETER( argv )

#if defined( __GNUC__ ) && !defined( LIBMSIECF_DLL_IMPORT )

	/* TODO: add tests for libmsiecf_property_type_get_identifier */

	/* TODO: add tests for libmsiecf_property_type_get_description */

#endif /* defined( __GNUC__ ) && !defined( LIBMSIECF_DLL_IMPORT ) */

	return( EXIT_SUCCESS );

on_error:
	return( EXIT_FAILURE );
}

