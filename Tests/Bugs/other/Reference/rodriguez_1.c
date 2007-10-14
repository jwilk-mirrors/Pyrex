/* Generated by Pyrex 0.9.5.2 on Fri Mar 30 15:42:18 2007 */

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


typedef struct {PyObject **p; char *s;} __Pyx_InternTabEntry; /*proto*/
typedef struct {PyObject **p; char *s; long n;} __Pyx_StringTabEntry; /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
static char **__pyx_f;

static PyObject *__Pyx_CreateClass(PyObject *bases, PyObject *dict, PyObject *name, char *modname); /*proto*/

static int __Pyx_InternStrings(__Pyx_InternTabEntry *t); /*proto*/

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from rodriguez_1 */




/* Implementation of rodriguez_1 */


static PyObject *__pyx_n_B;
static PyObject *__pyx_n___init__;

static PyObject *__pyx_n_t;

static PyObject *__pyx_f_11rodriguez_1_1B___init__(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyMethodDef __pyx_mdef_11rodriguez_1_1B___init__ = {"__init__", (PyCFunction)__pyx_f_11rodriguez_1_1B___init__, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_f_11rodriguez_1_1B___init__(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  PyObject *__pyx_5 = 0;
  PyObject *__pyx_6 = 0;
  static char *__pyx_argnames[] = {"self",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_self)) return 0;
  Py_INCREF(__pyx_v_self);

  /* "/Local/Projects/C/Pyrex/Source/Tests/Bugs/other/rodriguez_1.pyx":3 */
  __pyx_1 = PyDict_New(); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 3; goto __pyx_L1;}
  __pyx_2 = PyInt_FromLong(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 4; goto __pyx_L1;}
  __pyx_3 = PyInt_FromLong(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}
  __pyx_4 = PyInt_FromLong(2); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}
  __pyx_5 = PyInt_FromLong(3); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}
  __pyx_6 = PyTuple_New(3); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_6, 0, __pyx_3);
  PyTuple_SET_ITEM(__pyx_6, 1, __pyx_4);
  PyTuple_SET_ITEM(__pyx_6, 2, __pyx_5);
  __pyx_3 = 0;
  __pyx_4 = 0;
  __pyx_5 = 0;
  __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_3, 0, __pyx_6);
  __pyx_6 = 0;
  if (PyDict_SetItem(__pyx_1, __pyx_2, __pyx_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 3; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_4 = PyInt_FromLong(2); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 9; goto __pyx_L1;}
  __pyx_5 = PyInt_FromLong(1); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 9; goto __pyx_L1;}
  __pyx_6 = PyInt_FromLong(2); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 9; goto __pyx_L1;}
  __pyx_2 = PyInt_FromLong(3); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 9; goto __pyx_L1;}
  __pyx_3 = PyTuple_New(3); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 9; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_3, 0, __pyx_5);
  PyTuple_SET_ITEM(__pyx_3, 1, __pyx_6);
  PyTuple_SET_ITEM(__pyx_3, 2, __pyx_2);
  __pyx_5 = 0;
  __pyx_6 = 0;
  __pyx_2 = 0;
  if (PyDict_SetItem(__pyx_1, __pyx_4, __pyx_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 3; goto __pyx_L1;}
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_t, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 3; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  Py_XDECREF(__pyx_5);
  Py_XDECREF(__pyx_6);
  __Pyx_AddTraceback("rodriguez_1.B.__init__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static __Pyx_InternTabEntry __pyx_intern_tab[] = {
  {&__pyx_n_B, "B"},
  {&__pyx_n___init__, "__init__"},
  {&__pyx_n_t, "t"},
  {0, 0}
};

static struct PyMethodDef __pyx_methods[] = {
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC initrodriguez_1(void); /*proto*/
PyMODINIT_FUNC initrodriguez_1(void) {
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("rodriguez_1", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InternStrings(__pyx_intern_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};

  /* "/Local/Projects/C/Pyrex/Source/Tests/Bugs/other/rodriguez_1.pyx":1 */
  __pyx_1 = PyDict_New(); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  __pyx_2 = PyTuple_New(0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  __pyx_3 = __Pyx_CreateClass(__pyx_2, __pyx_1, __pyx_n_B, "rodriguez_1"); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  /* "/Local/Projects/C/Pyrex/Source/Tests/Bugs/other/rodriguez_1.pyx":2 */
  __pyx_2 = PyCFunction_New(&__pyx_mdef_11rodriguez_1_1B___init__, 0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;}
  __pyx_4 = PyMethod_New(__pyx_2, 0, __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  if (PyObject_SetAttr(__pyx_3, __pyx_n___init__, __pyx_4) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;}
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  if (PyObject_SetAttr(__pyx_m, __pyx_n_B, __pyx_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  return;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  __Pyx_AddTraceback("rodriguez_1");
}

static char *__pyx_filenames[] = {
  "rodriguez_1.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
}

static PyObject *__Pyx_CreateClass(
	PyObject *bases, PyObject *dict, PyObject *name, char *modname)
{
	PyObject *py_modname;
	PyObject *result = 0;
	
	py_modname = PyString_FromString(modname);
	if (!py_modname)
		goto bad;
	if (PyDict_SetItemString(dict, "__module__", py_modname) < 0)
		goto bad;
	result = PyClass_New(bases, dict, name);
bad:
	Py_XDECREF(py_modname);
	return result;
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
