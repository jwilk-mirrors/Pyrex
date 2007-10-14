/* Generated by Pyrex 0.9.4 on Mon Apr 17 16:10:05 2006 */

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
#include "numarray/numarray.h"


typedef struct {PyObject **p; char *s;} __Pyx_InternTabEntry; /*proto*/
typedef struct {PyObject **p; char *s; long n;} __Pyx_StringTabEntry; /*proto*/
static PyObject *__Pyx_UnpackItem(PyObject *, int); /*proto*/
static int __Pyx_EndUnpack(PyObject *, int); /*proto*/
static int __Pyx_PrintItem(PyObject *); /*proto*/
static int __Pyx_PrintNewline(void); /*proto*/
static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb); /*proto*/
static void __Pyx_ReRaise(void); /*proto*/
static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list); /*proto*/
static PyObject *__Pyx_GetExcValue(void); /*proto*/
static int __Pyx_ArgTypeTest(PyObject *obj, PyTypeObject *type, int none_allowed, char *name); /*proto*/
static int __Pyx_TypeTest(PyObject *obj, PyTypeObject *type); /*proto*/
static int __Pyx_GetStarArgs(PyObject **args, PyObject **kwds, char *kwd_list[], int nargs, PyObject **args2, PyObject **kwds2); /*proto*/
static void __Pyx_WriteUnraisable(char *name); /*proto*/
static void __Pyx_AddTraceback(char *funcname); /*proto*/
static PyTypeObject *__Pyx_ImportType(char *module_name, char *class_name, long size);  /*proto*/
static int __Pyx_SetVtable(PyObject *dict, void *vtable); /*proto*/
static int __Pyx_GetVtable(PyObject *dict, void *vtabptr); /*proto*/
static PyObject *__Pyx_CreateClass(PyObject *bases, PyObject *dict, PyObject *name, char *modname); /*proto*/
static int __Pyx_InternStrings(__Pyx_InternTabEntry *t); /*proto*/
static int __Pyx_InitStrings(__Pyx_StringTabEntry *t); /*proto*/
static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name); /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
static char **__pyx_f;

/* Declarations from bubke1 */

static PyTypeObject *__pyx_ptype_6bubke1__numarray = 0;

/* Implementation of bubke1 */

static struct PyMethodDef __pyx_methods[] = {
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC initbubke1(void); /*proto*/
PyMODINIT_FUNC initbubke1(void) {
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("bubke1", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  __pyx_ptype_6bubke1__numarray = __Pyx_ImportType("numarray._numarray", "_numarray", sizeof(PyArrayObject)); if (!__pyx_ptype_6bubke1__numarray) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 7; goto __pyx_L1;}

  /* "/Local/Projects/C/Pyrex/Source/Tests/Bugs/bubke/bubke1.pyx":1 */
  return;
  __pyx_L1:;
  __Pyx_AddTraceback("bubke1");
}

static char *__pyx_filenames[] = {
  "bubke1.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
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
