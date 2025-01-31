/*
 * Python object definition of the libmsiecf URL item types
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
#include <types.h>

#if defined( HAVE_STDLIB_H ) || defined( HAVE_WINAPI )
#include <stdlib.h>
#endif

#include "pymsiecf_libmsiecf.h"
#include "pymsiecf_python.h"
#include "pymsiecf_unused.h"
#include "pymsiecf_url_types.h"

PyTypeObject pymsiecf_url_types_type_object = {
	PyVarObject_HEAD_INIT( NULL, 0 )

	/* tp_name */
	"pymsiecf.url_types",
	/* tp_basicsize */
	sizeof( pymsiecf_url_types_t ),
	/* tp_itemsize */
	0,
	/* tp_dealloc */
	(destructor) pymsiecf_url_types_free,
	/* tp_print */
	0,
	/* tp_getattr */
	0,
	/* tp_setattr */
	0,
	/* tp_compare */
	0,
	/* tp_repr */
	0,
	/* tp_as_number */
	0,
	/* tp_as_sequence */
	0,
	/* tp_as_mapping */
	0,
	/* tp_hash */
	0,
	/* tp_call */
	0,
	/* tp_str */
	0,
	/* tp_getattro */
	0,
	/* tp_setattro */
	0,
	/* tp_as_buffer */
	0,
	/* tp_flags */
	Py_TPFLAGS_DEFAULT,
	/* tp_doc */
	"pymsiecf url types object (wraps LIBMSIECF_URL_ITEM_TYPES)",
	/* tp_traverse */
	0,
	/* tp_clear */
	0,
	/* tp_richcompare */
	0,
	/* tp_weaklistoffset */
	0,
	/* tp_iter */
	0,
	/* tp_iternext */
	0,
	/* tp_methods */
	0,
	/* tp_members */
	0,
	/* tp_getset */
	0,
	/* tp_base */
	0,
	/* tp_dict */
	0,
	/* tp_descr_get */
	0,
	/* tp_descr_set */
	0,
	/* tp_dictoffset */
	0,
	/* tp_init */
	(initproc) pymsiecf_url_types_init,
	/* tp_alloc */
	0,
	/* tp_new */
	0,
	/* tp_free */
	0,
	/* tp_is_gc */
	0,
	/* tp_bases */
	NULL,
	/* tp_mro */
	NULL,
	/* tp_cache */
	NULL,
	/* tp_subclasses */
	NULL,
	/* tp_weaklist */
	NULL,
	/* tp_del */
	0
};

/* Initializes the type object
 * Returns 1 if successful or -1 on error
 */
int pymsiecf_url_types_init_type(
     PyTypeObject *type_object )
{
	PyObject *value_object = NULL;

	if( type_object == NULL )
	{
		return( -1 );
	}
	type_object->tp_dict = PyDict_New();

	if( type_object->tp_dict == NULL )
	{
		return( -1 );
	}
#if PY_MAJOR_VERSION >= 3
	value_object = PyLong_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_UNDEFINED );
#else
	value_object = PyInt_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_UNDEFINED );
#endif
	if( PyDict_SetItemString(
	     type_object->tp_dict,
	     "UNDEFINED",
	     value_object ) != 0 )
	{
		goto on_error;
	}
#if PY_MAJOR_VERSION >= 3
	value_object = PyLong_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_CACHE );
#else
	value_object = PyInt_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_CACHE );
#endif
	if( PyDict_SetItemString(
	     type_object->tp_dict,
	     "CACHE",
	     value_object ) != 0 )
	{
		goto on_error;
	}
#if PY_MAJOR_VERSION >= 3
	value_object = PyLong_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_COMPATIBILITY );
#else
	value_object = PyInt_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_COMPATIBILITY );
#endif
	if( PyDict_SetItemString(
	     type_object->tp_dict,
	     "COMPATIBILITY",
	     value_object ) != 0 )
	{
		goto on_error;
	}
#if PY_MAJOR_VERSION >= 3
	value_object = PyLong_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_COOKIE );
#else
	value_object = PyInt_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_COOKIE );
#endif
	if( PyDict_SetItemString(
	     type_object->tp_dict,
	     "COOKIE",
	     value_object ) != 0 )
	{
		goto on_error;
	}
#if PY_MAJOR_VERSION >= 3
	value_object = PyLong_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_DOM_STORE );
#else
	value_object = PyInt_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_DOM_STORE );
#endif
	if( PyDict_SetItemString(
	     type_object->tp_dict,
	     "DOM_STORE",
	     value_object ) != 0 )
	{
		goto on_error;
	}
#if PY_MAJOR_VERSION >= 3
	value_object = PyLong_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_DOWNLOAD );
#else
	value_object = PyInt_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_DOWNLOAD );
#endif
	if( PyDict_SetItemString(
	     type_object->tp_dict,
	     "DOWNLOAD",
	     value_object ) != 0 )
	{
		goto on_error;
	}
#if PY_MAJOR_VERSION >= 3
	value_object = PyLong_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_HISTORY );
#else
	value_object = PyInt_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_HISTORY );
#endif
	if( PyDict_SetItemString(
	     type_object->tp_dict,
	     "HISTORY",
	     value_object ) != 0 )
	{
		goto on_error;
	}
#if PY_MAJOR_VERSION >= 3
	value_object = PyLong_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_HISTORY_DAILY );
#else
	value_object = PyInt_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_HISTORY_DAILY );
#endif
	if( PyDict_SetItemString(
	     type_object->tp_dict,
	     "HISTORY_DAILY",
	     value_object ) != 0 )
	{
		goto on_error;
	}
#if PY_MAJOR_VERSION >= 3
	value_object = PyLong_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_HISTORY_WEEKLY );
#else
	value_object = PyInt_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_HISTORY_WEEKLY );
#endif
	if( PyDict_SetItemString(
	     type_object->tp_dict,
	     "HISTORY_WEEKLY",
	     value_object ) != 0 )
	{
		goto on_error;
	}
#if PY_MAJOR_VERSION >= 3
	value_object = PyLong_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_INPRIVATE_FILTERING );
#else
	value_object = PyInt_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_INPRIVATE_FILTERING );
#endif
	if( PyDict_SetItemString(
	     type_object->tp_dict,
	     "INPRIVATE_FILTERING",
	     value_object ) != 0 )
	{
		goto on_error;
	}
#if PY_MAJOR_VERSION >= 3
	value_object = PyLong_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_RSS_FEED );
#else
	value_object = PyInt_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_RSS_FEED );
#endif
	if( PyDict_SetItemString(
	     type_object->tp_dict,
	     "RSS_FEED",
	     value_object ) != 0 )
	{
		goto on_error;
	}
#if PY_MAJOR_VERSION >= 3
	value_object = PyLong_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_TLD );
#else
	value_object = PyInt_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_TLD );
#endif
	if( PyDict_SetItemString(
	     type_object->tp_dict,
	     "TLD",
	     value_object ) != 0 )
	{
		goto on_error;
	}
#if PY_MAJOR_VERSION >= 3
	value_object = PyLong_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_USER_DATA );
#else
	value_object = PyInt_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_USER_DATA );
#endif
	if( PyDict_SetItemString(
	     type_object->tp_dict,
	     "USER_DATA",
	     value_object ) != 0 )
	{
		goto on_error;
	}
#if PY_MAJOR_VERSION >= 3
	value_object = PyLong_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_UNKNOWN );
#else
	value_object = PyInt_FromLong(
	                LIBMSIECF_URL_ITEM_TYPE_UNKNOWN );
#endif
	if( PyDict_SetItemString(
	     type_object->tp_dict,
	     "UNKNOWN",
	     value_object ) != 0 )
	{
		goto on_error;
	}
	return( 1 );

on_error:
	if( type_object->tp_dict != NULL )
	{
		Py_DecRef(
		 type_object->tp_dict );

		type_object->tp_dict = NULL;
	}
	return( -1 );
}

/* Creates a new url types object
 * Returns a Python object if successful or NULL on error
 */
PyObject *pymsiecf_url_types_new(
           void )
{
	pymsiecf_url_types_t *pymsiecf_url_types = NULL;
	static char *function                    = "pymsiecf_url_types_new";

	pymsiecf_url_types = PyObject_New(
	                      struct pymsiecf_url_types,
	                      &pymsiecf_url_types_type_object );

	if( pymsiecf_url_types == NULL )
	{
		PyErr_Format(
		 PyExc_MemoryError,
		 "%s: unable to initialize url types.",
		 function );

		goto on_error;
	}
	if( pymsiecf_url_types_init(
	     pymsiecf_url_types ) != 0 )
	{
		PyErr_Format(
		 PyExc_MemoryError,
		 "%s: unable to initialize url types.",
		 function );

		goto on_error;
	}
	return( (PyObject *) pymsiecf_url_types );

on_error:
	if( pymsiecf_url_types != NULL )
	{
		Py_DecRef(
		 (PyObject *) pymsiecf_url_types );
	}
	return( NULL );
}

/* Initializes a url types object
 * Returns 0 if successful or -1 on error
 */
int pymsiecf_url_types_init(
     pymsiecf_url_types_t *pymsiecf_url_types )
{
	static char *function = "pymsiecf_url_types_init";

	if( pymsiecf_url_types == NULL )
	{
		PyErr_Format(
		 PyExc_TypeError,
		 "%s: invalid url types.",
		 function );

		return( -1 );
	}
	return( 0 );
}

/* Frees a url types object
 */
void pymsiecf_url_types_free(
      pymsiecf_url_types_t *pymsiecf_url_types )
{
	struct _typeobject *ob_type = NULL;
	static char *function       = "pymsiecf_url_types_free";

	if( pymsiecf_url_types == NULL )
	{
		PyErr_Format(
		 PyExc_TypeError,
		 "%s: invalid url types.",
		 function );

		return;
	}
	ob_type = Py_TYPE(
	           pymsiecf_url_types );

	if( ob_type == NULL )
	{
		PyErr_Format(
		 PyExc_ValueError,
		 "%s: missing ob_type.",
		 function );

		return;
	}
	if( ob_type->tp_free == NULL )
	{
		PyErr_Format(
		 PyExc_ValueError,
		 "%s: invalid ob_type - missing tp_free.",
		 function );

		return;
	}
	ob_type->tp_free(
	 (PyObject*) pymsiecf_url_types );
}

