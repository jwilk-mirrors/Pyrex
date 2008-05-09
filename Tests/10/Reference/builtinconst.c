/* Generated by Pyrex */

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

static int __Pyx_GetException(PyObject **type, PyObject **value, PyObject **tb); /*proto*/

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from builtinconst */

static int __pyx_f_12builtinconst_f(void); /*proto*/


/* Implementation of builtinconst */

static int __pyx_f_12builtinconst_f(void) {
  PyTypeObject *__pyx_v_t;
  PyObject *__pyx_v_x;
  int __pyx_r;
  int __pyx_1;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  __pyx_v_t = ((PyTypeObject *)Py_None); Py_INCREF(Py_None);
  __pyx_v_x = Py_None; Py_INCREF(Py_None);

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":4 */
  Py_INCREF(((PyObject *)(&PyBuffer_Type)));
  Py_DECREF(((PyObject *)__pyx_v_t));
  __pyx_v_t = (&PyBuffer_Type);

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":5 */
  Py_INCREF(((PyObject *)(&PyEnum_Type)));
  Py_DECREF(((PyObject *)__pyx_v_t));
  __pyx_v_t = (&PyEnum_Type);

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":6 */
  Py_INCREF(((PyObject *)(&PyFile_Type)));
  Py_DECREF(((PyObject *)__pyx_v_t));
  __pyx_v_t = (&PyFile_Type);

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":7 */
  Py_INCREF(((PyObject *)(&PyFloat_Type)));
  Py_DECREF(((PyObject *)__pyx_v_t));
  __pyx_v_t = (&PyFloat_Type);

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":8 */
  Py_INCREF(((PyObject *)(&PyInt_Type)));
  Py_DECREF(((PyObject *)__pyx_v_t));
  __pyx_v_t = (&PyInt_Type);

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":9 */
  Py_INCREF(((PyObject *)(&PyLong_Type)));
  Py_DECREF(((PyObject *)__pyx_v_t));
  __pyx_v_t = (&PyLong_Type);

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":10 */
  Py_INCREF(((PyObject *)(&PyFile_Type)));
  Py_DECREF(((PyObject *)__pyx_v_t));
  __pyx_v_t = (&PyFile_Type);

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":11 */
  Py_INCREF(((PyObject *)(&PyProperty_Type)));
  Py_DECREF(((PyObject *)__pyx_v_t));
  __pyx_v_t = (&PyProperty_Type);

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":12 */
  Py_INCREF(((PyObject *)(&PyString_Type)));
  Py_DECREF(((PyObject *)__pyx_v_t));
  __pyx_v_t = (&PyString_Type);

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":13 */
  Py_INCREF(((PyObject *)(&PyTuple_Type)));
  Py_DECREF(((PyObject *)__pyx_v_t));
  __pyx_v_t = (&PyTuple_Type);

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":14 */
  Py_INCREF(((PyObject *)(&PyRange_Type)));
  Py_DECREF(((PyObject *)__pyx_v_t));
  __pyx_v_t = (&PyRange_Type);

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":15 */
  Py_INCREF(Py_True);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = Py_True;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":16 */
  Py_INCREF(Py_False);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = Py_False;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":17 */
  Py_INCREF(Py_Ellipsis);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = Py_Ellipsis;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":18 */
  Py_INCREF(PyExc_Exception);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_Exception;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":19 */
  Py_INCREF(PyExc_StopIteration);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_StopIteration;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":20 */
  Py_INCREF(PyExc_StandardError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_StandardError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":21 */
  Py_INCREF(PyExc_ArithmeticError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_ArithmeticError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":22 */
  Py_INCREF(PyExc_LookupError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_LookupError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":23 */
  Py_INCREF(PyExc_AssertionError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_AssertionError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":24 */
  Py_INCREF(PyExc_AssertionError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_AssertionError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":25 */
  Py_INCREF(PyExc_EOFError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_EOFError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":26 */
  Py_INCREF(PyExc_FloatingPointError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_FloatingPointError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":27 */
  Py_INCREF(PyExc_EnvironmentError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_EnvironmentError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":28 */
  Py_INCREF(PyExc_IOError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_IOError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":29 */
  Py_INCREF(PyExc_OSError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_OSError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":30 */
  Py_INCREF(PyExc_ImportError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_ImportError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":31 */
  Py_INCREF(PyExc_IndexError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_IndexError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":32 */
  Py_INCREF(PyExc_KeyError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_KeyError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":33 */
  Py_INCREF(PyExc_KeyboardInterrupt);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_KeyboardInterrupt;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":34 */
  Py_INCREF(PyExc_MemoryError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_MemoryError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":35 */
  Py_INCREF(PyExc_NameError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_NameError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":36 */
  Py_INCREF(PyExc_OverflowError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_OverflowError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":37 */
  Py_INCREF(PyExc_RuntimeError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_RuntimeError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":38 */
  Py_INCREF(PyExc_NotImplementedError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_NotImplementedError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":39 */
  Py_INCREF(PyExc_SyntaxError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_SyntaxError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":40 */
  Py_INCREF(PyExc_IndentationError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_IndentationError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":41 */
  Py_INCREF(PyExc_TabError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_TabError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":42 */
  Py_INCREF(PyExc_ReferenceError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_ReferenceError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":43 */
  Py_INCREF(PyExc_SystemError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_SystemError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":44 */
  Py_INCREF(PyExc_SystemExit);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_SystemExit;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":45 */
  Py_INCREF(PyExc_TypeError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_TypeError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":46 */
  Py_INCREF(PyExc_UnboundLocalError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_UnboundLocalError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":47 */
  Py_INCREF(PyExc_UnicodeError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_UnicodeError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":48 */
  Py_INCREF(PyExc_UnicodeEncodeError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_UnicodeEncodeError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":49 */
  Py_INCREF(PyExc_UnicodeDecodeError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_UnicodeDecodeError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":50 */
  Py_INCREF(PyExc_UnicodeTranslateError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_UnicodeTranslateError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":51 */
  Py_INCREF(PyExc_ValueError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_ValueError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":52 */
  Py_INCREF(PyExc_ZeroDivisionError);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_ZeroDivisionError;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":53 */
  Py_INCREF(PyExc_MemoryErrorInst);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_MemoryErrorInst;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":54 */
  Py_INCREF(PyExc_Warning);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_Warning;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":55 */
  Py_INCREF(PyExc_UserWarning);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_UserWarning;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":56 */
  Py_INCREF(PyExc_DeprecationWarning);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_DeprecationWarning;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":57 */
  Py_INCREF(PyExc_PendingDeprecationWarning);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_PendingDeprecationWarning;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":58 */
  Py_INCREF(PyExc_SyntaxWarning);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_SyntaxWarning;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":60 */
  Py_INCREF(PyExc_RuntimeWarning);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_RuntimeWarning;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":61 */
  Py_INCREF(PyExc_FutureWarning);
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = PyExc_FutureWarning;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":62 */
  PyObject_TypeCheck(__pyx_v_x,((PyTypeObject *)PyExc_Exception));

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":63 */
  /*try:*/ {
  }
  goto __pyx_L3;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/builtinconst.pyx":65 */
  __pyx_1 = PyErr_ExceptionMatches(PyExc_ValueError);
  if (__pyx_1) {
    __Pyx_AddTraceback("builtinconst.f");
    if (__Pyx_GetException(&__pyx_2, &__pyx_3, &__pyx_4) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 65; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    goto __pyx_L3;
  }
  goto __pyx_L1;
  __pyx_L3:;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  __Pyx_AddTraceback("builtinconst.f");
  __pyx_r = (-1);
  __pyx_L0:;
  Py_DECREF(__pyx_v_t);
  Py_DECREF(__pyx_v_x);
  return __pyx_r;
}

static struct PyMethodDef __pyx_methods[] = {
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC initbuiltinconst(void); /*proto*/
PyMODINIT_FUNC initbuiltinconst(void) {
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("builtinconst", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  Py_INCREF(__pyx_m);
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  return;
  __pyx_L1:;
  __Pyx_AddTraceback("builtinconst");
}

static char *__pyx_filenames[] = {
  "builtinconst.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
}

static int __Pyx_GetException(PyObject **type, PyObject **value, PyObject **tb) {
	PyThreadState *tstate = PyThreadState_Get();
	PyErr_Fetch(type, value, tb);
	PyErr_NormalizeException(type, value, tb);
	if (PyErr_Occurred())
		goto bad;
	Py_INCREF(*type);
	Py_INCREF(*value);
	Py_INCREF(*tb);
	Py_XDECREF(tstate->exc_type);
	Py_XDECREF(tstate->exc_value);
	Py_XDECREF(tstate->exc_traceback);
	tstate->exc_type = *type;
	tstate->exc_value = *value;
	tstate->exc_traceback = *tb;
	return 0;
bad:
	Py_XDECREF(*type);
	Py_XDECREF(*value);
	Py_XDECREF(*tb);
	return -1;
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
