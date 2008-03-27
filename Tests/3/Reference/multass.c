/* Generated by Pyrex 0.9.6.4 on Thu Mar 27 20:22:06 2008 */

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
  #ifndef __stdcall
    #define __stdcall
  #endif
  #ifndef __cdecl
    #define __cdecl
  #endif
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

static void __Pyx_WriteUnraisable(char *name); /*proto*/

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from multass */

static void __pyx_f_7multass_f(void); /*proto*/


/* Implementation of multass */

static void __pyx_f_7multass_f(void) {
  PyObject *__pyx_v_obj1a;
  PyObject *__pyx_v_obj2a;
  PyObject *__pyx_v_obj3a;
  PyObject *__pyx_v_obj1b;
  PyObject *__pyx_v_obj2b;
  PyObject *__pyx_v_obj3b;
  int __pyx_v_int1;
  int __pyx_v_int2;
  char *__pyx_v_ptr1;
  char *__pyx_v_ptr2;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  int __pyx_4;
  char *__pyx_5;
  PyObject *__pyx_6 = 0;
  __pyx_v_obj1a = Py_None; Py_INCREF(Py_None);
  __pyx_v_obj2a = Py_None; Py_INCREF(Py_None);
  __pyx_v_obj3a = Py_None; Py_INCREF(Py_None);
  __pyx_v_obj1b = Py_None; Py_INCREF(Py_None);
  __pyx_v_obj2b = Py_None; Py_INCREF(Py_None);
  __pyx_v_obj3b = Py_None; Py_INCREF(Py_None);

  /* "/Local/Projects/D/Pyrex/Source/Tests/3/multass.pyx":5 */
  __pyx_1 = __pyx_v_obj1b;
  Py_INCREF(__pyx_1);
  __pyx_2 = __pyx_v_obj2b;
  Py_INCREF(__pyx_2);
  Py_DECREF(__pyx_v_obj1a);
  __pyx_v_obj1a = __pyx_1;
  __pyx_1 = 0;
  Py_DECREF(__pyx_v_obj2a);
  __pyx_v_obj2a = __pyx_2;
  __pyx_2 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/3/multass.pyx":6 */
  __pyx_1 = __pyx_v_obj1b;
  Py_INCREF(__pyx_1);
  __pyx_2 = __pyx_v_obj2b;
  Py_INCREF(__pyx_2);
  __pyx_3 = __pyx_v_obj3b;
  Py_INCREF(__pyx_3);
  Py_DECREF(__pyx_v_obj1a);
  __pyx_v_obj1a = __pyx_1;
  __pyx_1 = 0;
  Py_DECREF(__pyx_v_obj2a);
  __pyx_v_obj2a = __pyx_2;
  __pyx_2 = 0;
  Py_DECREF(__pyx_v_obj3a);
  __pyx_v_obj3a = __pyx_3;
  __pyx_3 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/3/multass.pyx":7 */
  __pyx_4 = __pyx_v_int2;
  __pyx_5 = __pyx_v_ptr2;
  __pyx_1 = __pyx_v_obj1b;
  Py_INCREF(__pyx_1);
  __pyx_v_int1 = __pyx_4;
  __pyx_v_ptr1 = __pyx_5;
  Py_DECREF(__pyx_v_obj1a);
  __pyx_v_obj1a = __pyx_1;
  __pyx_1 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/3/multass.pyx":8 */
  __pyx_2 = PyInt_FromLong(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 8; goto __pyx_L1;}
  __pyx_3 = PyNumber_Add(__pyx_v_obj1b, __pyx_2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 8; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_1 = PyInt_FromLong(2); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 8; goto __pyx_L1;}
  __pyx_2 = PyNumber_Add(__pyx_v_obj2b, __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 8; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_1 = PyInt_FromLong(3); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 8; goto __pyx_L1;}
  __pyx_6 = PyNumber_Add(__pyx_v_obj3b, __pyx_1); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 8; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_v_obj1a);
  __pyx_v_obj1a = __pyx_3;
  __pyx_3 = 0;
  Py_DECREF(__pyx_v_obj2a);
  __pyx_v_obj2a = __pyx_2;
  __pyx_2 = 0;
  Py_DECREF(__pyx_v_obj3a);
  __pyx_v_obj3a = __pyx_6;
  __pyx_6 = 0;

  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_6);
  __Pyx_WriteUnraisable("multass.f");
  __pyx_L0:;
  Py_DECREF(__pyx_v_obj1a);
  Py_DECREF(__pyx_v_obj2a);
  Py_DECREF(__pyx_v_obj3a);
  Py_DECREF(__pyx_v_obj1b);
  Py_DECREF(__pyx_v_obj2b);
  Py_DECREF(__pyx_v_obj3b);
}

static struct PyMethodDef __pyx_methods[] = {
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC initmultass(void); /*proto*/
PyMODINIT_FUNC initmultass(void) {
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("multass", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  Py_INCREF(__pyx_m);
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  return;
  __pyx_L1:;
  __Pyx_AddTraceback("multass");
}

static char *__pyx_filenames[] = {
  "multass.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
}

static void __Pyx_WriteUnraisable(char *name) {
	PyObject *old_exc, *old_val, *old_tb;
	PyObject *ctx;
	PyErr_Fetch(&old_exc, &old_val, &old_tb);
	ctx = PyString_FromString(name);
	PyErr_Restore(old_exc, old_val, old_tb);
	if (!ctx)
		ctx = Py_None;
	PyErr_WriteUnraisable(ctx);
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
