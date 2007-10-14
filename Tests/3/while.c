/* Generated by Pyrex 0.9.6.1 on Wed Oct 10 23:33:48 2007 */

#define PY_SSIZE_T_CLEAN
#include "Python.h"
#include "structmember.h"
#ifndef PY_LONG_LONG
  #define PY_LONG_LONG LONG_LONG
#endif
#if PY_VERSION_HEX < 0x02050000
  typedef int Py_ssize_t;
  #define PY_SSIZE_T_MAX INT_MAX
  #define PY_SSIZE_T_MIN INT_MIN
  #define PyInt_FromSsize_t(z) PyInt_FromLong(z)
  #define PyInt_AsSsize_t(o)	PyInt_AsLong(o)
#endif
#ifndef WIN32
  #define __stdcall
  #define __cdecl
#endif
#ifdef __cplusplus
#define __PYX_EXTERN_C extern "C"
#else
#define __PYX_EXTERN_C extern
#endif
#include <math.h>


typedef struct {PyObject **p; char *s;} __Pyx_InternTabEntry; /*proto*/
typedef struct {PyObject **p; char *s; long n;} __Pyx_StringTabEntry; /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
static char **__pyx_f;

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from while */



/* Implementation of while */

static PyObject *__pyx_f_5while_f(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_5while_f(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_a = 0;
  PyObject *__pyx_v_b = 0;
  int __pyx_v_i;
  PyObject *__pyx_v_x;
  PyObject *__pyx_r;
  int __pyx_1;
  PyObject *__pyx_2 = 0;
  static char *__pyx_argnames[] = {"a","b",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OO", __pyx_argnames, &__pyx_v_a, &__pyx_v_b)) return 0;
  Py_INCREF(__pyx_v_a);
  Py_INCREF(__pyx_v_b);
  __pyx_v_x = Py_None; Py_INCREF(Py_None);

  /* "/Local/Projects/D/Pyrex/Source/Tests/3/while.pyx":4 */
  while (1) {
    __pyx_1 = PyObject_IsTrue(__pyx_v_a); if (__pyx_1 < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 4; goto __pyx_L1;}
    if (!__pyx_1) break;
    __pyx_2 = PyInt_FromLong(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}
    Py_DECREF(__pyx_v_x);
    __pyx_v_x = __pyx_2;
    __pyx_2 = 0;
  }

  /* "/Local/Projects/D/Pyrex/Source/Tests/3/while.pyx":7 */
  while (1) {
    __pyx_2 = PyNumber_Add(__pyx_v_a, __pyx_v_b); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 7; goto __pyx_L1;}
    __pyx_1 = PyObject_IsTrue(__pyx_2); if (__pyx_1 < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 7; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    if (!__pyx_1) break;
    __pyx_2 = PyInt_FromLong(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 8; goto __pyx_L1;}
    Py_DECREF(__pyx_v_x);
    __pyx_v_x = __pyx_2;
    __pyx_2 = 0;
  }

  /* "/Local/Projects/D/Pyrex/Source/Tests/3/while.pyx":10 */
  while (1) {
    __pyx_1 = __pyx_v_i;
    if (!__pyx_1) break;
    __pyx_2 = PyInt_FromLong(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 11; goto __pyx_L1;}
    Py_DECREF(__pyx_v_x);
    __pyx_v_x = __pyx_2;
    __pyx_2 = 0;
  }
  /*else*/ {
    __pyx_2 = PyInt_FromLong(2); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 13; goto __pyx_L1;}
    Py_DECREF(__pyx_v_x);
    __pyx_v_x = __pyx_2;
    __pyx_2 = 0;
  }

  /* "/Local/Projects/D/Pyrex/Source/Tests/3/while.pyx":15 */
  while (1) {
    __pyx_1 = __pyx_v_i;
    if (!__pyx_1) break;

    /* "/Local/Projects/D/Pyrex/Source/Tests/3/while.pyx":16 */
    __pyx_2 = PyInt_FromLong(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 16; goto __pyx_L1;}
    Py_DECREF(__pyx_v_x);
    __pyx_v_x = __pyx_2;
    __pyx_2 = 0;

    /* "/Local/Projects/D/Pyrex/Source/Tests/3/while.pyx":17 */
    goto __pyx_L9;

    /* "/Local/Projects/D/Pyrex/Source/Tests/3/while.pyx":18 */
    __pyx_2 = PyInt_FromLong(2); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 18; goto __pyx_L1;}
    Py_DECREF(__pyx_v_x);
    __pyx_v_x = __pyx_2;
    __pyx_2 = 0;
  }
  /*else*/ {
    __pyx_2 = PyInt_FromLong(3); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 20; goto __pyx_L1;}
    Py_DECREF(__pyx_v_x);
    __pyx_v_x = __pyx_2;
    __pyx_2 = 0;
  }
  __pyx_L9:;

  /* "/Local/Projects/D/Pyrex/Source/Tests/3/while.pyx":22 */
  while (1) {
    __pyx_1 = __pyx_v_i;
    if (!__pyx_1) break;

    /* "/Local/Projects/D/Pyrex/Source/Tests/3/while.pyx":23 */
    __pyx_2 = PyInt_FromLong(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 23; goto __pyx_L1;}
    Py_DECREF(__pyx_v_x);
    __pyx_v_x = __pyx_2;
    __pyx_2 = 0;

    /* "/Local/Projects/D/Pyrex/Source/Tests/3/while.pyx":24 */
    goto __pyx_L10;

    /* "/Local/Projects/D/Pyrex/Source/Tests/3/while.pyx":25 */
    __pyx_2 = PyInt_FromLong(2); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 25; goto __pyx_L1;}
    Py_DECREF(__pyx_v_x);
    __pyx_v_x = __pyx_2;
    __pyx_2 = 0;
    __pyx_L10:;
  }

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("while.f");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_x);
  Py_DECREF(__pyx_v_a);
  Py_DECREF(__pyx_v_b);
  return __pyx_r;
}

static struct PyMethodDef __pyx_methods[] = {
  {"f", (PyCFunction)__pyx_f_5while_f, METH_VARARGS|METH_KEYWORDS, 0},
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC initwhile(void); /*proto*/
PyMODINIT_FUNC initwhile(void) {
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("while", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  return;
  __pyx_L1:;
  __Pyx_AddTraceback("while");
}

static char *__pyx_filenames[] = {
  "while.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
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
