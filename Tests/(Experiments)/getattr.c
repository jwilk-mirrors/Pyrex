/* Generated by Pyrex 0.4 on Sat Jun 28 23:18:46 2003 */

#include "Python.h"
#include "structmember.h"


static PyObject *__Pyx_UnpackItem(PyObject *, int); /*proto*/
static int __Pyx_EndUnpack(PyObject *, int); /*proto*/
static int __Pyx_PrintItem(PyObject *); /*proto*/
static int __Pyx_PrintNewline(void); /*proto*/
static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb); /*proto*/
static void __Pyx_ReRaise(void); /*proto*/
static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list); /*proto*/
static PyObject *__Pyx_GetExcValue(void); /*proto*/
static PyObject *__Pyx_GetName(PyObject *dict, char *name); /*proto*/
static int __Pyx_ArgTypeTest(PyObject *obj, PyTypeObject *type, int none_allowed, char *name); /*proto*/
static int __Pyx_TypeTest(PyObject *obj, PyTypeObject *type); /*proto*/
static int __Pyx_GetStarArgs(PyObject **args, PyObject **kwds, char *kwd_list[], int nargs, PyObject **args2, PyObject **kwds2); /*proto*/
static void __Pyx_WriteUnraisable(char *name); /*proto*/
static void __Pyx_AddTraceback(char *funcname); /*proto*/
static PyTypeObject *__Pyx_ImportType(char *module_name, char *class_name, long size);  /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
staticforward char *__pyx_f[];

/* Declarations from getattr */

staticforward PyTypeObject __pyx_type_7getattr_Spam;

struct __pyx_obj_7getattr_Spam {
  PyObject_HEAD
  PyObject *eggs;
};

static PyTypeObject *__pyx_ptype_7getattr_Spam = 0;

/* Implementation of getattr */


static char (__pyx_k1[]) = "Spam getattr:";

static PyObject *__pyx_f_7getattr_4Spam___getattr__(PyObject *__pyx_v_self, PyObject *__pyx_v_name); /*proto*/
static PyObject *__pyx_f_7getattr_4Spam___getattr__(PyObject *__pyx_v_self, PyObject *__pyx_v_name) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_name);

  /* "ProjectsA:Python:Pyrex:Tests:(Experiments):getattr.pyx":5 */
  __pyx_1 = PyString_FromString(__pyx_k1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}
  if (__Pyx_PrintItem(__pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  if (__Pyx_PrintItem(__pyx_v_name) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}
  if (__Pyx_PrintNewline() < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}

  __pyx_r = Py_None; Py_INCREF(__pyx_r);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("getattr.Spam.__getattr__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_name);
  return __pyx_r;
}

static PyObject *__pyx_tp_new_7getattr_Spam(struct _typeobject *t, PyObject *a, PyObject *k) {
  PyObject *o = (*t->tp_alloc)(t, 0);
  struct __pyx_obj_7getattr_Spam *p = (struct __pyx_obj_7getattr_Spam *)o;
  p->eggs = Py_None; Py_INCREF(p->eggs);
  return o;
}

static void __pyx_tp_dealloc_7getattr_Spam(PyObject *o) {
  struct __pyx_obj_7getattr_Spam *p = (struct __pyx_obj_7getattr_Spam *)o;
  Py_XDECREF(p->eggs);
  (*o->ob_type->tp_free)(o);
}

static int __pyx_tp_traverse_7getattr_Spam(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_7getattr_Spam *p = (struct __pyx_obj_7getattr_Spam *)o;
  e = (*v)(p->eggs, a); if (e) return e;
  return 0;
}

static int __pyx_tp_clear_7getattr_Spam(PyObject *o) {
  struct __pyx_obj_7getattr_Spam *p = (struct __pyx_obj_7getattr_Spam *)o;
  Py_XDECREF(p->eggs);
  p->eggs = Py_None; Py_INCREF(p->eggs);
  return 0;
}

static PyObject *__pyx_tp_getattro_7getattr_Spam(PyObject *o, PyObject *n) {
  PyObject *v = PyObject_GenericGetAttr(o, n);
  /*if (!v && PyErr_ExceptionMatches(PyExc_AttributeError)) {*/
    /*PyErr_Clear();*/
    v = __pyx_f_7getattr_4Spam___getattr__(o, n);
  /*}*/
  return v;
}

static struct PyMethodDef __pyx_methods_7getattr_Spam[] = {
  {0, 0, 0, 0}
};

static struct PyMemberDef __pyx_members_7getattr_Spam[] = {
  {"eggs", T_OBJECT, offsetof(struct __pyx_obj_7getattr_Spam, eggs), 0, 0},
  {0, 0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_Spam = {
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

static PySequenceMethods __pyx_tp_as_sequence_Spam = {
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

static PyMappingMethods __pyx_tp_as_mapping_Spam = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_Spam = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

statichere PyTypeObject __pyx_type_7getattr_Spam = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "getattr.Spam", /*tp_name*/
  sizeof(struct __pyx_obj_7getattr_Spam), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_7getattr_Spam, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_Spam, /*tp_as_number*/
  &__pyx_tp_as_sequence_Spam, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_Spam, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  __pyx_tp_getattro_7getattr_Spam, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_Spam, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  0, /*tp_doc*/
  __pyx_tp_traverse_7getattr_Spam, /*tp_traverse*/
  __pyx_tp_clear_7getattr_Spam, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_7getattr_Spam, /*tp_methods*/
  __pyx_members_7getattr_Spam, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_7getattr_Spam, /*tp_new*/
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

DL_EXPORT(void) initgetattr(void); /*proto*/
DL_EXPORT(void) initgetattr(void) {
  __pyx_m = Py_InitModule4("getattr", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  __pyx_b = PyImport_AddModule("__builtin__");
  PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b);
  __pyx_type_7getattr_Spam.tp_free = _PyObject_GC_Del;
  if (PyType_Ready(&__pyx_type_7getattr_Spam) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "Spam", (PyObject *)&__pyx_type_7getattr_Spam) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  __pyx_ptype_7getattr_Spam = &__pyx_type_7getattr_Spam;

  /* "ProjectsA:Python:Pyrex:Tests:(Experiments):getattr.pyx":4 */
  return;
  __pyx_L1:;
  __Pyx_AddTraceback("getattr");
}

statichere char *__pyx_f[] = {
  "ProjectsA:Python:Pyrex:Tests:(Experiments):getattr.pyx",
};

/* Runtime support code */

static PyObject *__Pyx_GetStdout(void) {
	PyObject *f = PySys_GetObject("stdout");
	if (!f) {
		PyErr_SetString(PyExc_RuntimeError, "lost sys.stdout");
	}
	return f;
}

static int __Pyx_PrintItem(PyObject *v) {
	PyObject *f;
	
	if (!(f = __Pyx_GetStdout()))
		return -1;
	if (PyFile_SoftSpace(f, 1)) {
		if (PyFile_WriteString(" ", f) < 0)
			return -1;
	}
	if (PyFile_WriteObject(v, f, Py_PRINT_RAW) < 0)
		return -1;
	if (PyString_Check(v)) {
		char *s = PyString_AsString(v);
		int len = PyString_Size(v);
		if (len > 0 &&
			isspace(Py_CHARMASK(s[len-1])) &&
			s[len-1] != ' ')
				PyFile_SoftSpace(f, 0);
	}
	return 0;
}

static int __Pyx_PrintNewline(void) {
	PyObject *f;
	
	if (!(f = __Pyx_GetStdout()))
		return -1;
	if (PyFile_WriteString("\n", f) < 0)
		return -1;
	PyFile_SoftSpace(f, 0);
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
