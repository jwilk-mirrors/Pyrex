/* Generated by Pyrex 0.9.5.2 on Fri Mar 30 15:42:00 2007 */

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

static int __Pyx_TypeTest(PyObject *obj, PyTypeObject *type); /*proto*/

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from ishimoto3 */

typedef struct __pyx_obj_9ishimoto3_C1 __pyx_gcc33_obj_9ishimoto3_C1;
typedef struct __pyx_obj_9ishimoto3_C2 __pyx_gcc33_obj_9ishimoto3_C2;


struct __pyx_obj_9ishimoto3_C1 {
  PyObject_HEAD
};


struct __pyx_obj_9ishimoto3_C2 {
  PyObject_HEAD
  struct __pyx_obj_9ishimoto3_C1 *c1;
};

static PyTypeObject *__pyx_ptype_9ishimoto3_C1 = 0;
static PyTypeObject *__pyx_ptype_9ishimoto3_C2 = 0;


/* Implementation of ishimoto3 */

static int __pyx_f_9ishimoto3_2C2___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_9ishimoto3_2C2___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_arg = 0;
  int __pyx_r;
  static char *__pyx_argnames[] = {"arg",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_arg)) return -1;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_arg);

  /* "/Local/Projects/C/Pyrex/Source/Tests/Bugs/ishimoto/ishimoto3.pyx":8 */
  if (!__Pyx_TypeTest(__pyx_v_arg, __pyx_ptype_9ishimoto3_C1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 8; goto __pyx_L1;}
  Py_INCREF(__pyx_v_arg);
  Py_DECREF(((PyObject *)((struct __pyx_obj_9ishimoto3_C2 *)__pyx_v_self)->c1));
  ((struct __pyx_obj_9ishimoto3_C2 *)__pyx_v_self)->c1 = ((struct __pyx_obj_9ishimoto3_C1 *)__pyx_v_arg);

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("ishimoto3.C2.__init__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_arg);
  return __pyx_r;
}

static PyObject *__pyx_tp_new_9ishimoto3_C1(PyTypeObject *t, PyObject *a, PyObject *k) {
  PyObject *o = (*t->tp_alloc)(t, 0);
  return o;
}

static void __pyx_tp_dealloc_9ishimoto3_C1(PyObject *o) {
  (*o->ob_type->tp_free)(o);
}

static int __pyx_tp_traverse_9ishimoto3_C1(PyObject *o, visitproc v, void *a) {
  return 0;
}

static int __pyx_tp_clear_9ishimoto3_C1(PyObject *o) {
  return 0;
}

static struct PyMethodDef __pyx_methods_9ishimoto3_C1[] = {
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_C1 = {
  0, /*nb_add*/
  0, /*nb_subtract*/
  0, /*nb_multiply*/
  0, /*nb_divide*/
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

static PySequenceMethods __pyx_tp_as_sequence_C1 = {
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

static PyMappingMethods __pyx_tp_as_mapping_C1 = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_C1 = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_9ishimoto3_C1 = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "ishimoto3.C1", /*tp_name*/
  sizeof(struct __pyx_obj_9ishimoto3_C1), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_9ishimoto3_C1, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_C1, /*tp_as_number*/
  &__pyx_tp_as_sequence_C1, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_C1, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_C1, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  0, /*tp_doc*/
  __pyx_tp_traverse_9ishimoto3_C1, /*tp_traverse*/
  __pyx_tp_clear_9ishimoto3_C1, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_9ishimoto3_C1, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_9ishimoto3_C1, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};

static PyObject *__pyx_tp_new_9ishimoto3_C2(PyTypeObject *t, PyObject *a, PyObject *k) {
  PyObject *o = (*t->tp_alloc)(t, 0);
  struct __pyx_obj_9ishimoto3_C2 *p = (struct __pyx_obj_9ishimoto3_C2 *)o;
  p->c1 = ((struct __pyx_obj_9ishimoto3_C1 *)Py_None); Py_INCREF(Py_None);
  return o;
}

static void __pyx_tp_dealloc_9ishimoto3_C2(PyObject *o) {
  struct __pyx_obj_9ishimoto3_C2 *p = (struct __pyx_obj_9ishimoto3_C2 *)o;
  Py_XDECREF(((PyObject *)p->c1));
  (*o->ob_type->tp_free)(o);
}

static int __pyx_tp_traverse_9ishimoto3_C2(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_9ishimoto3_C2 *p = (struct __pyx_obj_9ishimoto3_C2 *)o;
  if (p->c1) {
    e = (*v)(((PyObject*)p->c1), a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_9ishimoto3_C2(PyObject *o) {
  struct __pyx_obj_9ishimoto3_C2 *p = (struct __pyx_obj_9ishimoto3_C2 *)o;
  Py_XDECREF(((PyObject *)p->c1));
  p->c1 = ((struct __pyx_obj_9ishimoto3_C1 *)Py_None); Py_INCREF(Py_None);
  return 0;
}

static struct PyMethodDef __pyx_methods_9ishimoto3_C2[] = {
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_C2 = {
  0, /*nb_add*/
  0, /*nb_subtract*/
  0, /*nb_multiply*/
  0, /*nb_divide*/
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

static PySequenceMethods __pyx_tp_as_sequence_C2 = {
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

static PyMappingMethods __pyx_tp_as_mapping_C2 = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_C2 = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_9ishimoto3_C2 = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "ishimoto3.C2", /*tp_name*/
  sizeof(struct __pyx_obj_9ishimoto3_C2), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_9ishimoto3_C2, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_C2, /*tp_as_number*/
  &__pyx_tp_as_sequence_C2, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_C2, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_C2, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  0, /*tp_doc*/
  __pyx_tp_traverse_9ishimoto3_C2, /*tp_traverse*/
  __pyx_tp_clear_9ishimoto3_C2, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_9ishimoto3_C2, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  __pyx_f_9ishimoto3_2C2___init__, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_9ishimoto3_C2, /*tp_new*/
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

PyMODINIT_FUNC initishimoto3(void); /*proto*/
PyMODINIT_FUNC initishimoto3(void) {
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("ishimoto3", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyType_Ready(&__pyx_type_9ishimoto3_C1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "C1", (PyObject *)&__pyx_type_9ishimoto3_C1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  __pyx_ptype_9ishimoto3_C1 = &__pyx_type_9ishimoto3_C1;
  __pyx_type_9ishimoto3_C2.tp_free = _PyObject_GC_Del;
  if (PyType_Ready(&__pyx_type_9ishimoto3_C2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 4; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "C2", (PyObject *)&__pyx_type_9ishimoto3_C2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 4; goto __pyx_L1;}
  __pyx_ptype_9ishimoto3_C2 = &__pyx_type_9ishimoto3_C2;

  /* "/Local/Projects/C/Pyrex/Source/Tests/Bugs/ishimoto/ishimoto3.pyx":7 */
  return;
  __pyx_L1:;
  __Pyx_AddTraceback("ishimoto3");
}

static char *__pyx_filenames[] = {
  "ishimoto3.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
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
