/* Generated by Pyrex 0.4 on Wed Sep  4 19:45:38 2002 */

#include "Python.h"
#include "foo.h"


static PyObject *__Pyx_UnpackItem(PyObject *, int); /*proto*/
static int __Pyx_EndUnpack(PyObject *, int); /*proto*/
static int __Pyx_PrintItem(PyObject *); /*proto*/
static int __Pyx_PrintNewline(void); /*proto*/
static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb); /*proto*/
static void __Pyx_ReRaise(void); /*proto*/
static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list); /*proto*/
static PyObject *__Pyx_GetExcValue(void); /*proto*/
static PyObject *__Pyx_GetName(PyObject *dict, char *name); /*proto*/
static int __Pyx_ArgTypeTest(PyObject *obj, PyTypeObject *type, char *name); /*proto*/
static int __Pyx_TypeTest(PyObject *obj, PyTypeObject *type); /*proto*/
static int __Pyx_GetStarArgs(PyObject **args, PyObject **kwds, char *kwd_list[], int nargs, PyObject **args2, PyObject **kwds2); /*proto*/
static void __Pyx_WriteUnraisable(char *name); /*proto*/
static void __Pyx_AddTraceback(char *funcname); /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static char *__pyx_srcfile = "ProjectsA:Python:Pyrex:Tests:(experiments):big_t.pyx";
static int __pyx_lineno;

static struct PyMethodDef __pyx_methods[] = {
  {0, 0, 0, 0}
};


DL_EXPORT(void) initbig_t(void); /*proto*/
DL_EXPORT(void) initbig_t(void) {
  PyObject *__pyx_1 = 0;
  long long __pyx_2;
  __pyx_m = Py_InitModule4("big_t", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  __pyx_b = PyImport_AddModule("__builtin__");
  PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b);

  /* "ProjectsA:Python:Pyrex:Tests:(experiments):big_t.pyx":1 */

  /* "ProjectsA:Python:Pyrex:Tests:(experiments):big_t.pyx":5 */
  __pyx_1 = __Pyx_GetName(__pyx_b, "grail"); if (!__pyx_1) {__pyx_lineno = 5; goto __pyx_L1;}
  __pyx_2 = PyInt_AsLong(__pyx_1); if (PyErr_Occurred()) {__pyx_lineno = 5; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  spam(__pyx_2);
  return;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("big_t");
}

/* Runtime support code */

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
	
	py_srcfile = PyString_FromString(__pyx_srcfile);
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

static PyObject *__Pyx_GetName(PyObject *dict, char *name) {
	PyObject *result;
	result = PyObject_GetAttrString(dict, name);
	if (!result)
		PyErr_SetString(PyExc_NameError, name);
	return result;
}
