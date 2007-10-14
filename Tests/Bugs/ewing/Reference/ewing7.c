/* Generated by Pyrex 0.9.6 on Mon Oct  8 00:31:17 2007 */

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

static int __Pyx_SetVtable(PyObject *dict, void *vtable); /*proto*/

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from ewing7 */

struct __pyx_obj_6ewing7_A {
  PyObject_HEAD
  struct __pyx_vtabstruct_6ewing7_A *__pyx_vtab;
};

struct __pyx_obj_6ewing7_B {
  struct __pyx_obj_6ewing7_A __pyx_base;
};


struct __pyx_vtabstruct_6ewing7_A {
  void (*f)(struct __pyx_obj_6ewing7_A *,PyObject *);
};
static struct __pyx_vtabstruct_6ewing7_A *__pyx_vtabptr_6ewing7_A;


struct __pyx_vtabstruct_6ewing7_B {
  struct __pyx_vtabstruct_6ewing7_A __pyx_base;
};
static struct __pyx_vtabstruct_6ewing7_B *__pyx_vtabptr_6ewing7_B;

static PyTypeObject *__pyx_ptype_6ewing7_A = 0;
static PyTypeObject *__pyx_ptype_6ewing7_B = 0;
__PYX_EXTERN_C DL_EXPORT(void) g(struct __pyx_obj_6ewing7_A *,PyObject *); /*proto*/


/* Implementation of ewing7 */

static void __pyx_f_6ewing7_1A_f(struct __pyx_obj_6ewing7_A *__pyx_v_self,PyObject *__pyx_v_x) {
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_x);

  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_x);
}

static void __pyx_f_6ewing7_1B_f(struct __pyx_obj_6ewing7_B *__pyx_v_self,PyObject *__pyx_v_x) {
  Py_INCREF((PyObject *)__pyx_v_self);
  Py_INCREF(__pyx_v_x);

  Py_DECREF((PyObject *)__pyx_v_self);
  Py_DECREF(__pyx_v_x);
}
static struct __pyx_vtabstruct_6ewing7_A __pyx_vtable_6ewing7_A;

static PyObject *__pyx_tp_new_6ewing7_A(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_6ewing7_A *p;
  PyObject *o = (*t->tp_alloc)(t, 0);
  if (!o) return 0;
  p = ((struct __pyx_obj_6ewing7_A *)o);
  *(struct __pyx_vtabstruct_6ewing7_A **)&p->__pyx_vtab = __pyx_vtabptr_6ewing7_A;
  return o;
}

static void __pyx_tp_dealloc_6ewing7_A(PyObject *o) {
  (*o->ob_type->tp_free)(o);
}

static int __pyx_tp_traverse_6ewing7_A(PyObject *o, visitproc v, void *a) {
  return 0;
}

static int __pyx_tp_clear_6ewing7_A(PyObject *o) {
  return 0;
}

static struct PyMethodDef __pyx_methods_6ewing7_A[] = {
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_A = {
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
  #if Py_TPFLAGS_DEFAULT & Py_TPFLAGS_HAVE_INDEX
  0, /*nb_index*/
  #endif
};

static PySequenceMethods __pyx_tp_as_sequence_A = {
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

static PyMappingMethods __pyx_tp_as_mapping_A = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_A = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_6ewing7_A = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "ewing7.A", /*tp_name*/
  sizeof(struct __pyx_obj_6ewing7_A), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_6ewing7_A, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_A, /*tp_as_number*/
  &__pyx_tp_as_sequence_A, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_A, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_A, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  0, /*tp_doc*/
  __pyx_tp_traverse_6ewing7_A, /*tp_traverse*/
  __pyx_tp_clear_6ewing7_A, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_6ewing7_A, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_6ewing7_A, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};
static struct __pyx_vtabstruct_6ewing7_B __pyx_vtable_6ewing7_B;

static PyObject *__pyx_tp_new_6ewing7_B(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_6ewing7_B *p;
  PyObject *o = __pyx_ptype_6ewing7_A->tp_new(t, a, k);
  if (!o) return 0;
  p = ((struct __pyx_obj_6ewing7_B *)o);
  *(struct __pyx_vtabstruct_6ewing7_B **)&p->__pyx_base.__pyx_vtab = __pyx_vtabptr_6ewing7_B;
  return o;
}

static void __pyx_tp_dealloc_6ewing7_B(PyObject *o) {
  __pyx_ptype_6ewing7_A->tp_dealloc(o);
}

static int __pyx_tp_traverse_6ewing7_B(PyObject *o, visitproc v, void *a) {
  int e;
  e = __pyx_ptype_6ewing7_A->tp_traverse(o, v, a); if (e) return e;
  return 0;
}

static int __pyx_tp_clear_6ewing7_B(PyObject *o) {
  __pyx_ptype_6ewing7_A->tp_clear(o);
  return 0;
}

static struct PyMethodDef __pyx_methods_6ewing7_B[] = {
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_B = {
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
  #if Py_TPFLAGS_DEFAULT & Py_TPFLAGS_HAVE_INDEX
  0, /*nb_index*/
  #endif
};

static PySequenceMethods __pyx_tp_as_sequence_B = {
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

static PyMappingMethods __pyx_tp_as_mapping_B = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_B = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_6ewing7_B = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "ewing7.B", /*tp_name*/
  sizeof(struct __pyx_obj_6ewing7_B), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_6ewing7_B, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_B, /*tp_as_number*/
  &__pyx_tp_as_sequence_B, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_B, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_B, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  0, /*tp_doc*/
  __pyx_tp_traverse_6ewing7_B, /*tp_traverse*/
  __pyx_tp_clear_6ewing7_B, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_6ewing7_B, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_6ewing7_B, /*tp_new*/
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

PyMODINIT_FUNC initewing7(void); /*proto*/
PyMODINIT_FUNC initewing7(void) {
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("ewing7", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  __pyx_vtabptr_6ewing7_A = &__pyx_vtable_6ewing7_A;
  *(void(**)(void))&__pyx_vtable_6ewing7_A.f = (void(*)(void))__pyx_f_6ewing7_1A_f;
  if (PyType_Ready(&__pyx_type_6ewing7_A) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  if (__Pyx_SetVtable(__pyx_type_6ewing7_A.tp_dict, __pyx_vtabptr_6ewing7_A) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "A", (PyObject *)&__pyx_type_6ewing7_A) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  __pyx_ptype_6ewing7_A = &__pyx_type_6ewing7_A;
  __pyx_vtabptr_6ewing7_B = &__pyx_vtable_6ewing7_B;
  __pyx_vtable_6ewing7_B.__pyx_base = *__pyx_vtabptr_6ewing7_A;
  *(void(**)(void))&__pyx_vtable_6ewing7_B.__pyx_base.f = (void(*)(void))__pyx_f_6ewing7_1B_f;
  __pyx_type_6ewing7_B.tp_base = __pyx_ptype_6ewing7_A;
  if (PyType_Ready(&__pyx_type_6ewing7_B) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}
  if (__Pyx_SetVtable(__pyx_type_6ewing7_B.tp_dict, __pyx_vtabptr_6ewing7_B) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "B", (PyObject *)&__pyx_type_6ewing7_B) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}
  __pyx_ptype_6ewing7_B = &__pyx_type_6ewing7_B;

  /* "/Local/Projects/D/Pyrex/Source/Tests/Bugs/ewing/ewing7.pyx":11 */
  return;
  __pyx_L1:;
  __Pyx_AddTraceback("ewing7");
}

static char *__pyx_filenames[] = {
  "ewing7.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
}

static int __Pyx_SetVtable(PyObject *dict, void *vtable) {
	PyObject *pycobj = 0;
	int result;
	
	pycobj = PyCObject_FromVoidPtr(vtable, 0);
	if (!pycobj)
		goto bad;
	if (PyDict_SetItemString(dict, "__pyx_vtable__", pycobj) < 0)
		goto bad;
	result = 0;
	goto done;

bad:
	result = -1;
done:
	Py_XDECREF(pycobj);
	return result;
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
