/* Generated by Pyrex 0.9.5.2 on Fri Mar 30 15:41:58 2007 */

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

static int __Pyx_ArgTypeTest(PyObject *obj, PyTypeObject *type, int none_allowed, char *name); /*proto*/

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from hinsen2 */

typedef struct __pyx_obj_7hinsen2_vector __pyx_gcc33_obj_7hinsen2_vector;


struct __pyx_obj_7hinsen2_vector {
  PyObject_HEAD
};

static PyTypeObject *__pyx_ptype_7hinsen2_vector = 0;


/* Implementation of hinsen2 */

static PyObject *__pyx_f_7hinsen2_6vector___div__(PyObject *__pyx_v_self, PyObject *__pyx_arg_factor); /*proto*/
static PyObject *__pyx_f_7hinsen2_6vector___div__(PyObject *__pyx_v_self, PyObject *__pyx_arg_factor) {
  double __pyx_v_factor;
  PyObject *__pyx_v_result;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF(__pyx_v_self);
  __pyx_v_result = Py_None; Py_INCREF(Py_None);
  __pyx_v_factor = PyFloat_AsDouble(__pyx_arg_factor); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;}
  if (!__Pyx_ArgTypeTest(((PyObject *)__pyx_v_self), __pyx_ptype_7hinsen2_vector, 1, "self")) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;}

  /* "/Local/Projects/C/Pyrex/Source/Tests/Bugs/hinsen/hinsen2.pyx":3 */
  __pyx_1 = PyObject_CallObject(((PyObject*)__pyx_ptype_7hinsen2_vector), 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 3; goto __pyx_L1;}
  Py_DECREF(__pyx_v_result);
  __pyx_v_result = __pyx_1;
  __pyx_1 = 0;

  /* "/Local/Projects/C/Pyrex/Source/Tests/Bugs/hinsen/hinsen2.pyx":4 */
  Py_INCREF(__pyx_v_result);
  __pyx_r = __pyx_v_result;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("hinsen2.vector.__div__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_result);
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_tp_new_7hinsen2_vector(PyTypeObject *t, PyObject *a, PyObject *k) {
  PyObject *o = (*t->tp_alloc)(t, 0);
  return o;
}

static void __pyx_tp_dealloc_7hinsen2_vector(PyObject *o) {
  (*o->ob_type->tp_free)(o);
}

static int __pyx_tp_traverse_7hinsen2_vector(PyObject *o, visitproc v, void *a) {
  return 0;
}

static int __pyx_tp_clear_7hinsen2_vector(PyObject *o) {
  return 0;
}

static struct PyMethodDef __pyx_methods_7hinsen2_vector[] = {
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_vector = {
  0, /*nb_add*/
  0, /*nb_subtract*/
  0, /*nb_multiply*/
  __pyx_f_7hinsen2_6vector___div__, /*nb_divide*/
  0, /*nb_remainder*/
  0, /*nb_divmod*/
  0, /*nb_power*/
  0, /*nb_negative*/
  0, /*nb_positive*/
  0, /*nb_absolute*/
  0, /*nb_nonzero*/
  0, /*nb_invert*/
  0, /*nb_lshift*/
  0, /*nb_rshift*/
  0, /*nb_and*/
  0, /*nb_xor*/
  0, /*nb_or*/
  0, /*nb_coerce*/
  0, /*nb_int*/
  0, /*nb_long*/
  0, /*nb_float*/
  0, /*nb_oct*/
  0, /*nb_hex*/
  0, /*nb_inplace_add*/
  0, /*nb_inplace_subtract*/
  0, /*nb_inplace_multiply*/
  0, /*nb_inplace_divide*/
  0, /*nb_inplace_remainder*/
  0, /*nb_inplace_power*/
  0, /*nb_inplace_lshift*/
  0, /*nb_inplace_rshift*/
  0, /*nb_inplace_and*/
  0, /*nb_inplace_xor*/
  0, /*nb_inplace_or*/
  0, /*nb_floor_divide*/
  0, /*nb_true_divide*/
  0, /*nb_inplace_floor_divide*/
  0, /*nb_inplace_true_divide*/
};

static PySequenceMethods __pyx_tp_as_sequence_vector = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_vector = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_vector = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_7hinsen2_vector = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "hinsen2.vector", /*tp_name*/
  sizeof(struct __pyx_obj_7hinsen2_vector), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_7hinsen2_vector, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_vector, /*tp_as_number*/
  &__pyx_tp_as_sequence_vector, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_vector, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_vector, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  0, /*tp_doc*/
  __pyx_tp_traverse_7hinsen2_vector, /*tp_traverse*/
  __pyx_tp_clear_7hinsen2_vector, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_7hinsen2_vector, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_7hinsen2_vector, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};

static struct PyMethodDef __pyx_methods[] = {
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC inithinsen2(void); /*proto*/
PyMODINIT_FUNC inithinsen2(void) {
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("hinsen2", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyType_Ready(&__pyx_type_7hinsen2_vector) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "vector", (PyObject *)&__pyx_type_7hinsen2_vector) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  __pyx_ptype_7hinsen2_vector = &__pyx_type_7hinsen2_vector;

  /* "/Local/Projects/C/Pyrex/Source/Tests/Bugs/hinsen/hinsen2.pyx":2 */
  return;
  __pyx_L1:;
  __Pyx_AddTraceback("hinsen2");
}

static char *__pyx_filenames[] = {
  "hinsen2.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
}

static int __Pyx_ArgTypeTest(PyObject *obj, PyTypeObject *type, int none_allowed, char *name) {
	if (!type) {
		PyErr_Format(PyExc_SystemError, "Missing type object");
		return 0;
	}
	if ((none_allowed && obj == Py_None) || PyObject_TypeCheck(obj, type))
		return 1;
	PyErr_Format(PyExc_TypeError,
		"Argument '%s' has incorrect type (expected %s, got %s)",
		name, type->tp_name, obj->ob_type->tp_name);
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
