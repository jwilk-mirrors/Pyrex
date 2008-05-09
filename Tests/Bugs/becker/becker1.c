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

static int __Pyx_SetVtable(PyObject *dict, void *vtable); /*proto*/

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from becker1 */

struct __pyx_obj_7becker1__Box {
  PyObject_HEAD
  int penalty;
  int flagged;
  int is_glue;
  int is_penalty;
  int is_box;
  char *character;
  double width;
  double stretch;
  double shrink;
};

struct __pyx_obj_7becker1_Box {
  struct __pyx_obj_7becker1__Box __pyx_base;
};

struct __pyx_obj_7becker1_Glue {
  struct __pyx_obj_7becker1__Box __pyx_base;
  struct __pyx_vtabstruct_7becker1_Glue *__pyx_vtab;
};




struct __pyx_vtabstruct_7becker1_Glue {
  PyObject *(*compute_width)(struct __pyx_obj_7becker1_Glue *,double);
};
static struct __pyx_vtabstruct_7becker1_Glue *__pyx_vtabptr_7becker1_Glue;

static PyTypeObject *__pyx_ptype_7becker1__Box = 0;
static PyTypeObject *__pyx_ptype_7becker1_Box = 0;
static PyTypeObject *__pyx_ptype_7becker1_Glue = 0;


/* Implementation of becker1 */

static int __pyx_f_7becker1_3Box___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_7becker1_3Box___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  double __pyx_v_width;
  char *__pyx_v_character;
  int __pyx_r;
  static char *__pyx_argnames[] = {"width","character",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "ds", __pyx_argnames, &__pyx_v_width, &__pyx_v_character)) return -1;
  Py_INCREF((PyObject *)__pyx_v_self);

  /* "/Local/Projects/D/Pyrex/Source/Tests/Bugs/becker/becker1.pyx":11 */
  ((struct __pyx_obj_7becker1_Box *)__pyx_v_self)->__pyx_base.character = __pyx_v_character;

  /* "/Local/Projects/D/Pyrex/Source/Tests/Bugs/becker/becker1.pyx":12 */
  ((struct __pyx_obj_7becker1_Box *)__pyx_v_self)->__pyx_base.width = __pyx_v_width;

  /* "/Local/Projects/D/Pyrex/Source/Tests/Bugs/becker/becker1.pyx":13 */
  ((struct __pyx_obj_7becker1_Box *)__pyx_v_self)->__pyx_base.stretch = 0;
  ((struct __pyx_obj_7becker1_Box *)__pyx_v_self)->__pyx_base.shrink = 0;
  ((struct __pyx_obj_7becker1_Box *)__pyx_v_self)->__pyx_base.penalty = 0;
  ((struct __pyx_obj_7becker1_Box *)__pyx_v_self)->__pyx_base.flagged = 0;
  ((struct __pyx_obj_7becker1_Box *)__pyx_v_self)->__pyx_base.is_glue = 0;
  ((struct __pyx_obj_7becker1_Box *)__pyx_v_self)->__pyx_base.is_penalty = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/Bugs/becker/becker1.pyx":14 */
  ((struct __pyx_obj_7becker1_Box *)__pyx_v_self)->__pyx_base.is_box = 1;

  __pyx_r = 0;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_7becker1_4Glue___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_7becker1_4Glue___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  double __pyx_v_width;
  double __pyx_v_stretch;
  double __pyx_v_shrink;
  int __pyx_r;
  static char *__pyx_argnames[] = {"width","stretch","shrink",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "ddd", __pyx_argnames, &__pyx_v_width, &__pyx_v_stretch, &__pyx_v_shrink)) return -1;
  Py_INCREF((PyObject *)__pyx_v_self);

  /* "/Local/Projects/D/Pyrex/Source/Tests/Bugs/becker/becker1.pyx":23 */
  ((struct __pyx_obj_7becker1_Glue *)__pyx_v_self)->__pyx_base.width = __pyx_v_width;

  /* "/Local/Projects/D/Pyrex/Source/Tests/Bugs/becker/becker1.pyx":24 */
  ((struct __pyx_obj_7becker1_Glue *)__pyx_v_self)->__pyx_base.stretch = __pyx_v_stretch;

  /* "/Local/Projects/D/Pyrex/Source/Tests/Bugs/becker/becker1.pyx":25 */
  ((struct __pyx_obj_7becker1_Glue *)__pyx_v_self)->__pyx_base.shrink = __pyx_v_shrink;

  /* "/Local/Projects/D/Pyrex/Source/Tests/Bugs/becker/becker1.pyx":26 */
  ((struct __pyx_obj_7becker1_Glue *)__pyx_v_self)->__pyx_base.is_glue = 1;

  /* "/Local/Projects/D/Pyrex/Source/Tests/Bugs/becker/becker1.pyx":27 */
  ((struct __pyx_obj_7becker1_Glue *)__pyx_v_self)->__pyx_base.is_box = 0;
  ((struct __pyx_obj_7becker1_Glue *)__pyx_v_self)->__pyx_base.is_penalty = 0;

  __pyx_r = 0;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_7becker1_4Glue_compute_width(struct __pyx_obj_7becker1_Glue *__pyx_v_self,double __pyx_v_r) {
  PyObject *__pyx_r;
  int __pyx_1;
  PyObject *__pyx_2 = 0;
  Py_INCREF((PyObject *)__pyx_v_self);
  __pyx_1 = (__pyx_v_r < 0);
  if (__pyx_1) {
    __pyx_2 = PyFloat_FromDouble((__pyx_v_self->__pyx_base.width + (__pyx_v_r * __pyx_v_self->__pyx_base.shrink))); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 32; goto __pyx_L1;}
    __pyx_r = __pyx_2;
    __pyx_2 = 0;
    goto __pyx_L0;
    goto __pyx_L2;
  }
  /*else*/ {
    __pyx_2 = PyFloat_FromDouble((__pyx_v_self->__pyx_base.width + (__pyx_v_r * __pyx_v_self->__pyx_base.stretch))); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 33; goto __pyx_L1;}
    __pyx_r = __pyx_2;
    __pyx_2 = 0;
    goto __pyx_L0;
  }
  __pyx_L2:;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("becker1.Glue.compute_width");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF((PyObject *)__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_tp_new_7becker1__Box(PyTypeObject *t, PyObject *a, PyObject *k) {
  PyObject *o = (*t->tp_alloc)(t, 0);
  if (!o) return 0;
  return o;
}

static void __pyx_tp_dealloc_7becker1__Box(PyObject *o) {
  (*o->ob_type->tp_free)(o);
}

static struct PyMethodDef __pyx_methods_7becker1__Box[] = {
  {0, 0, 0, 0}
};

static struct PyMemberDef __pyx_members_7becker1__Box[] = {
  {"penalty", T_INT, offsetof(struct __pyx_obj_7becker1__Box, penalty), READONLY, 0},
  {"flagged", T_INT, offsetof(struct __pyx_obj_7becker1__Box, flagged), READONLY, 0},
  {"is_glue", T_INT, offsetof(struct __pyx_obj_7becker1__Box, is_glue), READONLY, 0},
  {"is_penalty", T_INT, offsetof(struct __pyx_obj_7becker1__Box, is_penalty), READONLY, 0},
  {"is_box", T_INT, offsetof(struct __pyx_obj_7becker1__Box, is_box), READONLY, 0},
  {0, 0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number__Box = {
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

static PySequenceMethods __pyx_tp_as_sequence__Box = {
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

static PyMappingMethods __pyx_tp_as_mapping__Box = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer__Box = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_7becker1__Box = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "becker1._Box", /*tp_name*/
  sizeof(struct __pyx_obj_7becker1__Box), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_7becker1__Box, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number__Box, /*tp_as_number*/
  &__pyx_tp_as_sequence__Box, /*tp_as_sequence*/
  &__pyx_tp_as_mapping__Box, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer__Box, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE, /*tp_flags*/
  0, /*tp_doc*/
  0, /*tp_traverse*/
  0, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_7becker1__Box, /*tp_methods*/
  __pyx_members_7becker1__Box, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_7becker1__Box, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};

static PyObject *__pyx_tp_new_7becker1_Box(PyTypeObject *t, PyObject *a, PyObject *k) {
  PyObject *o = __pyx_ptype_7becker1__Box->tp_new(t, a, k);
  if (!o) return 0;
  return o;
}

static void __pyx_tp_dealloc_7becker1_Box(PyObject *o) {
  __pyx_ptype_7becker1__Box->tp_dealloc(o);
}

static struct PyMethodDef __pyx_methods_7becker1_Box[] = {
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_Box = {
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

static PySequenceMethods __pyx_tp_as_sequence_Box = {
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

static PyMappingMethods __pyx_tp_as_mapping_Box = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_Box = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_7becker1_Box = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "becker1.Box", /*tp_name*/
  sizeof(struct __pyx_obj_7becker1_Box), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_7becker1_Box, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_Box, /*tp_as_number*/
  &__pyx_tp_as_sequence_Box, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_Box, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_Box, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE, /*tp_flags*/
  "Class representing a glyph or character.  Boxes have a fixed\n    width that doesn\'t change.\n    ", /*tp_doc*/
  0, /*tp_traverse*/
  0, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_7becker1_Box, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  __pyx_f_7becker1_3Box___init__, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_7becker1_Box, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};
static struct __pyx_vtabstruct_7becker1_Glue __pyx_vtable_7becker1_Glue;

static PyObject *__pyx_tp_new_7becker1_Glue(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_7becker1_Glue *p;
  PyObject *o = __pyx_ptype_7becker1__Box->tp_new(t, a, k);
  if (!o) return 0;
  p = ((struct __pyx_obj_7becker1_Glue *)o);
  *(struct __pyx_vtabstruct_7becker1_Glue **)&p->__pyx_vtab = __pyx_vtabptr_7becker1_Glue;
  return o;
}

static void __pyx_tp_dealloc_7becker1_Glue(PyObject *o) {
  __pyx_ptype_7becker1__Box->tp_dealloc(o);
}

static struct PyMethodDef __pyx_methods_7becker1_Glue[] = {
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_Glue = {
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

static PySequenceMethods __pyx_tp_as_sequence_Glue = {
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

static PyMappingMethods __pyx_tp_as_mapping_Glue = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_Glue = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_7becker1_Glue = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "becker1.Glue", /*tp_name*/
  sizeof(struct __pyx_obj_7becker1_Glue), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_7becker1_Glue, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_Glue, /*tp_as_number*/
  &__pyx_tp_as_sequence_Glue, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_Glue, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_Glue, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE, /*tp_flags*/
  "Class representing a bit of glue.  Glue has a preferred width,\n    but it can stretch up to an additional distance, and can shrink\n    by a certain amount.  Line breaks can be placed at any point where\n    glue immediately follows a box.\n    ", /*tp_doc*/
  0, /*tp_traverse*/
  0, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_7becker1_Glue, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  __pyx_f_7becker1_4Glue___init__, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_7becker1_Glue, /*tp_new*/
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

PyMODINIT_FUNC initbecker1(void); /*proto*/
PyMODINIT_FUNC initbecker1(void) {
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("becker1", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  Py_INCREF(__pyx_m);
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyType_Ready(&__pyx_type_7becker1__Box) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "_Box", (PyObject *)&__pyx_type_7becker1__Box) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  __pyx_ptype_7becker1__Box = &__pyx_type_7becker1__Box;
  __pyx_type_7becker1_Box.tp_base = __pyx_ptype_7becker1__Box;
  if (PyType_Ready(&__pyx_type_7becker1_Box) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 6; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "Box", (PyObject *)&__pyx_type_7becker1_Box) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 6; goto __pyx_L1;}
  __pyx_ptype_7becker1_Box = &__pyx_type_7becker1_Box;
  __pyx_vtabptr_7becker1_Glue = &__pyx_vtable_7becker1_Glue;
  *(void(**)(void))&__pyx_vtable_7becker1_Glue.compute_width = (void(*)(void))__pyx_f_7becker1_4Glue_compute_width;
  __pyx_type_7becker1_Glue.tp_base = __pyx_ptype_7becker1__Box;
  if (PyType_Ready(&__pyx_type_7becker1_Glue) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 16; goto __pyx_L1;}
  if (__Pyx_SetVtable(__pyx_type_7becker1_Glue.tp_dict, __pyx_vtabptr_7becker1_Glue) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 16; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "Glue", (PyObject *)&__pyx_type_7becker1_Glue) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 16; goto __pyx_L1;}
  __pyx_ptype_7becker1_Glue = &__pyx_type_7becker1_Glue;

  /* "/Local/Projects/D/Pyrex/Source/Tests/Bugs/becker/becker1.pyx":29 */
  return;
  __pyx_L1:;
  __Pyx_AddTraceback("becker1");
}

static char *__pyx_filenames[] = {
  "becker1.pyx",
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
