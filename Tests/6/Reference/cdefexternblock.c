/* Generated by Pyrex 0.9.5.2 on Fri Mar 30 15:28:23 2007 */

#include "Python.h"
#include "structmember.h"
#ifndef PY_LONG_LONG
  #define PY_LONG_LONG LONG_LONG
#endif
#ifdef __cplusplus
#define __PYX_EXTERN_C extern "C"
#else
#define __PYX_EXTERN_C extern
#endif
__PYX_EXTERN_C double pow(double, double);
#include "cheese.h"


typedef struct {PyObject **p; char *s;} __Pyx_InternTabEntry; /*proto*/
typedef struct {PyObject **p; char *s; long n;} __Pyx_StringTabEntry; /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
static char **__pyx_f;

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name); /*proto*/

static int __Pyx_TypeTest(PyObject *obj, PyTypeObject *type); /*proto*/

static int __Pyx_InternStrings(__Pyx_InternTabEntry *t); /*proto*/

static PyTypeObject *__Pyx_ImportType(char *module_name, char *class_name, long size);  /*proto*/

static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list); /*proto*/

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from cdefexternblock */

typedef struct runny_obj __pyx_gcc33_obj;

static PyTypeObject *__pyx_ptype_15cdefexternblock_runny = 0;
static struct runny_obj *__pyx_v_15cdefexternblock_r;


/* Implementation of cdefexternblock */

static PyObject *__pyx_n_x;

static __Pyx_InternTabEntry __pyx_intern_tab[] = {
  {&__pyx_n_x, "x"},
  {0, 0}
};

static struct PyMethodDef __pyx_methods[] = {
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC initcdefexternblock(void); /*proto*/
PyMODINIT_FUNC initcdefexternblock(void) {
  PyObject *__pyx_1 = 0;
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("cdefexternblock", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InternStrings(__pyx_intern_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  __pyx_v_15cdefexternblock_r = ((struct runny_obj *)Py_None); Py_INCREF(Py_None);
  __pyx_ptype_15cdefexternblock_runny = __Pyx_ImportType("external", "runny", sizeof(struct runny_obj)); if (!__pyx_ptype_15cdefexternblock_runny) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 12; goto __pyx_L1;}

  /* "/Local/Projects/C/Pyrex/Source/Tests/6/cdefexternblock.pyx":18 */
  __pyx_1 = __Pyx_GetName(__pyx_b, __pyx_n_x); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 18; goto __pyx_L1;}
  if (!__Pyx_TypeTest(__pyx_1, __pyx_ptype_15cdefexternblock_runny)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 18; goto __pyx_L1;}
  Py_DECREF(((PyObject *)__pyx_v_15cdefexternblock_r));
  __pyx_v_15cdefexternblock_r = ((struct runny_obj *)__pyx_1);
  __pyx_1 = 0;

  /* "/Local/Projects/C/Pyrex/Source/Tests/6/cdefexternblock.pyx":19 */
  __pyx_v_15cdefexternblock_r->a = 42;
  return;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("cdefexternblock");
}

static char *__pyx_filenames[] = {
  "cdefexternblock.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
}

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name) {
	PyObject *result;
	result = PyObject_GetAttr(dict, name);
	if (!result)
		PyErr_SetObject(PyExc_NameError, name);
	return result;
}

static int __Pyx_TypeTest(PyObject *obj, PyTypeObject *type) {
	if (!type) {
		PyErr_Format(PyExc_SystemError, "Missing type object");
		return 0;
	}
	if (obj == Py_None || PyObject_TypeCheck(obj, type))
		return 1;
	PyErr_Format(PyExc_TypeError, "Cannot convert %s to %s",
		obj->ob_type->tp_name, type->tp_name);
	return 0;
}

static int __Pyx_InternStrings(__Pyx_InternTabEntry *t) {
	while (t->p) {
		*t->p = PyString_InternFromString(t->s);
		if (!*t->p)
			return -1;
		++t;
	}
	return 0;
}

static PyTypeObject *__Pyx_ImportType(char *module_name, char *class_name, 
	long size) 
{
	PyObject *py_module_name = 0;
	PyObject *py_class_name = 0;
	PyObject *py_name_list = 0;
	PyObject *py_module = 0;
	PyObject *result = 0;
	
	py_module_name = PyString_FromString(module_name);
	if (!py_module_name)
		goto bad;
	py_class_name = PyString_FromString(class_name);
	if (!py_class_name)
		goto bad;
	py_name_list = PyList_New(1);
	if (!py_name_list)
		goto bad;
	Py_INCREF(py_class_name);
	if (PyList_SetItem(py_name_list, 0, py_class_name) < 0)
		goto bad;
	py_module = __Pyx_Import(py_module_name, py_name_list);
	if (!py_module)
		goto bad;
	result = PyObject_GetAttr(py_module, py_class_name);
	if (!result)
		goto bad;
	if (!PyType_Check(result)) {
		PyErr_Format(PyExc_TypeError, 
			"%s.%s is not a type object",
			module_name, class_name);
		goto bad;
	}
	if (((PyTypeObject *)result)->tp_basicsize != size) {
		PyErr_Format(PyExc_ValueError, 
			"%s.%s does not appear to be the correct type object",
			module_name, class_name);
		goto bad;
	}
	goto done;
bad:
	Py_XDECREF(result);
	result = 0;
done:
	Py_XDECREF(py_module_name);
	Py_XDECREF(py_class_name);
	Py_XDECREF(py_name_list);
	return (PyTypeObject *)result;
}

static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list) {
	PyObject *__import__ = 0;
	PyObject *empty_list = 0;
	PyObject *module = 0;
	PyObject *global_dict = 0;
	PyObject *empty_dict = 0;
	PyObject *list;
	__import__ = PyObject_GetAttrString(__pyx_b, "__import__");
	if (!__import__)
		goto bad;
	if (from_list)
		list = from_list;
	else {
		empty_list = PyList_New(0);
		if (!empty_list)
			goto bad;
		list = empty_list;
	}
	global_dict = PyModule_GetDict(__pyx_m);
	if (!global_dict)
		goto bad;
	empty_dict = PyDict_New();
	if (!empty_dict)
		goto bad;
	module = PyObject_CallFunction(__import__, "OOOO",
		name, global_dict, empty_dict, list);
bad:
	Py_XDECREF(empty_list);
	Py_XDECREF(__import__);
	Py_XDECREF(empty_dict);
	return module;
}

#include "compile.h"
#include "frameobject.h"
#include "traceback.h"

static void __Pyx_AddTraceback(char *funcname) {
	PyObject *py_srcfile = 0;
	PyObject *py_funcname = 0;
	PyObject *py_globals = 0;
	PyObject *empty_tuple = 0;
	PyObject *empty_string = 0;
	PyCodeObject *py_code = 0;
	PyFrameObject *py_frame = 0;
	
	py_srcfile = PyString_FromString(__pyx_filename);
	if (!py_srcfile) goto bad;
	py_funcname = PyString_FromString(funcname);
	if (!py_funcname) goto bad;
	py_globals = PyModule_GetDict(__pyx_m);
	if (!py_globals) goto bad;
	empty_tuple = PyTuple_New(0);
	if (!empty_tuple) goto bad;
	empty_string = PyString_FromString("");
	if (!empty_string) goto bad;
	py_code = PyCode_New(
		0,            /*int argcount,*/
		0,            /*int nlocals,*/
		0,            /*int stacksize,*/
		0,            /*int flags,*/
		empty_string, /*PyObject *code,*/
		empty_tuple,  /*PyObject *consts,*/
		empty_tuple,  /*PyObject *names,*/
		empty_tuple,  /*PyObject *varnames,*/
		empty_tuple,  /*PyObject *freevars,*/
		empty_tuple,  /*PyObject *cellvars,*/
		py_srcfile,   /*PyObject *filename,*/
		py_funcname,  /*PyObject *name,*/
		__pyx_lineno,   /*int firstlineno,*/
		empty_string  /*PyObject *lnotab*/
	);
	if (!py_code) goto bad;
	py_frame = PyFrame_New(
		PyThreadState_Get(), /*PyThreadState *tstate,*/
		py_code,             /*PyCodeObject *code,*/
		py_globals,          /*PyObject *globals,*/
		0                    /*PyObject *locals*/
	);
	if (!py_frame) goto bad;
	py_frame->f_lineno = __pyx_lineno;
	PyTraceBack_Here(py_frame);
bad:
	Py_XDECREF(py_srcfile);
	Py_XDECREF(py_funcname);
	Py_XDECREF(empty_tuple);
	Py_XDECREF(empty_string);
	Py_XDECREF(py_code);
	Py_XDECREF(py_frame);
}
