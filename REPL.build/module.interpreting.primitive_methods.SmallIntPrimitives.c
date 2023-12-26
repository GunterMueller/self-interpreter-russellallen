/* Generated code for Python module 'interpreting$primitive_methods$SmallIntPrimitives'
 * created by Nuitka version 1.9.5
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_interpreting$primitive_methods$SmallIntPrimitives" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_interpreting$primitive_methods$SmallIntPrimitives;
PyDictObject *moduledict_interpreting$primitive_methods$SmallIntPrimitives;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[104];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[104];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("interpreting.primitive_methods.SmallIntPrimitives"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 104; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_interpreting$primitive_methods$SmallIntPrimitives(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 104; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_f53292d69af8b248ee7ebb6950a0f19f;
static PyCodeObject *codeobj_904437bca160e104a298205f033bc3b8;
static PyCodeObject *codeobj_3f7ffdf79fce059d77fd7b07d03c904f;
static PyCodeObject *codeobj_5f42dee2c66d35e22b88c19adb121c7d;
static PyCodeObject *codeobj_247d37d2de6121479479624952a322b8;
static PyCodeObject *codeobj_b7ac9629989602d30c43b9a811248e86;
static PyCodeObject *codeobj_572fcb5eafff556a5fb53d9aa73083b9;
static PyCodeObject *codeobj_96cae2ae7ab3d3364ca9b832210ff9ae;
static PyCodeObject *codeobj_8a6ddd3fc2a641f1711f9c55c186af38;
static PyCodeObject *codeobj_648687cbdc0829fd1cd245b3462f1c03;
static PyCodeObject *codeobj_fb72683177c86f747337ffc7ecadc3a5;
static PyCodeObject *codeobj_e5491edf1a739521a2decaf39fdb6af6;
static PyCodeObject *codeobj_6b9388341c9350072b627c2a8a04138c;
static PyCodeObject *codeobj_2c686af224d459d3bf9e9abf907334ae;
static PyCodeObject *codeobj_920224041ba9b9e89897a08af8438337;
static PyCodeObject *codeobj_6c015201f4dcd13a144c60bcfa4fcb0d;
static PyCodeObject *codeobj_996abf1c13875851afca0554f55d7539;
static PyCodeObject *codeobj_aa5249e20417f8d6f92f6a4e509b46f2;
static PyCodeObject *codeobj_d8b5578d6cf5ebc4fd4ac49f536d1c5e;
static PyCodeObject *codeobj_3ef5a078061dcb830719edde001cc6df;
static PyCodeObject *codeobj_3057e3644d41fbe420962d386f37984a;
static PyCodeObject *codeobj_739080655681ab1dc9312701397440cf;
static PyCodeObject *codeobj_4fee70e6fad91aab4935b01bab785c35;
static PyCodeObject *codeobj_1d833c27d4cae1c5ee9dbcbb01fa27e4;
static PyCodeObject *codeobj_411fe0e8b9e0be4180f2fe90bb6f211c;
static PyCodeObject *codeobj_216b4d5517e8cf635820b818779a9f7d;
static PyCodeObject *codeobj_4feb14758cd11d65f93a6178f55ab66b;
static PyCodeObject *codeobj_26fb615d6f516637daa00bf7e423f3f7;
static PyCodeObject *codeobj_4f958168339a0df62354f1e4352dd5fc;
static PyCodeObject *codeobj_723764ce92c4e96386daa5415276ce2a;
static PyCodeObject *codeobj_323cfd750c324bf3fa7c4a999b7349e6;
static PyCodeObject *codeobj_3259be0bd00d987cc9c933c841e6ed82;
static PyCodeObject *codeobj_73a5edb400150c87e39b837d9874f096;
static PyCodeObject *codeobj_7e0d6fd1b28fab0ffbf8e558c17ebd9c;
static PyCodeObject *codeobj_4f840c6e7cf5725993e458aa43f7da49;
static PyCodeObject *codeobj_bb84ed1da15700ba7004bad55fccd97e;
static PyCodeObject *codeobj_7f6ee7b859edc4a758ea8243e5cbd240;
static PyCodeObject *codeobj_a6833cd103e7732cd6a847485d4025ba;
static PyCodeObject *codeobj_4d23e582d9330312bbdaf70c75a219ec;
static PyCodeObject *codeobj_9cdb7b3e5e457e7dbbdea5e5cc588ba3;
static PyCodeObject *codeobj_c471f85477bad927f5c0b5b449564122;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[62]; CHECK_OBJECT(module_filename_obj);
    codeobj_f53292d69af8b248ee7ebb6950a0f19f = MAKE_CODE_OBJECT(module_filename_obj, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[90], NULL, 2, 0, 0);
    codeobj_904437bca160e104a298205f033bc3b8 = MAKE_CODE_OBJECT(module_filename_obj, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[90], NULL, 2, 0, 0);
    codeobj_3f7ffdf79fce059d77fd7b07d03c904f = MAKE_CODE_OBJECT(module_filename_obj, 11, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[90], NULL, 2, 0, 0);
    codeobj_5f42dee2c66d35e22b88c19adb121c7d = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[90], NULL, 2, 0, 0);
    codeobj_247d37d2de6121479479624952a322b8 = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[90], NULL, 2, 0, 0);
    codeobj_b7ac9629989602d30c43b9a811248e86 = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[90], NULL, 2, 0, 0);
    codeobj_572fcb5eafff556a5fb53d9aa73083b9 = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[90], NULL, 2, 0, 0);
    codeobj_96cae2ae7ab3d3364ca9b832210ff9ae = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[90], NULL, 2, 0, 0);
    codeobj_8a6ddd3fc2a641f1711f9c55c186af38 = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[90], NULL, 2, 0, 0);
    codeobj_648687cbdc0829fd1cd245b3462f1c03 = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[90], NULL, 2, 0, 0);
    codeobj_fb72683177c86f747337ffc7ecadc3a5 = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[90], NULL, 2, 0, 0);
    codeobj_e5491edf1a739521a2decaf39fdb6af6 = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[90], NULL, 2, 0, 0);
    codeobj_6b9388341c9350072b627c2a8a04138c = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[90], NULL, 2, 0, 0);
    codeobj_2c686af224d459d3bf9e9abf907334ae = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[90], NULL, 2, 0, 0);
    codeobj_920224041ba9b9e89897a08af8438337 = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[90], NULL, 2, 0, 0);
    codeobj_6c015201f4dcd13a144c60bcfa4fcb0d = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[91], mod_consts[91], NULL, NULL, 0, 0, 0);
    codeobj_996abf1c13875851afca0554f55d7539 = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[19], mod_consts[19], mod_consts[92], mod_consts[93], 2, 0, 0);
    codeobj_aa5249e20417f8d6f92f6a4e509b46f2 = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], mod_consts[74], mod_consts[94], NULL, 2, 0, 0);
    codeobj_d8b5578d6cf5ebc4fd4ac49f536d1c5e = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[86], mod_consts[86], mod_consts[94], NULL, 2, 0, 0);
    codeobj_3ef5a078061dcb830719edde001cc6df = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[81], mod_consts[81], mod_consts[94], NULL, 2, 0, 0);
    codeobj_3057e3644d41fbe420962d386f37984a = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[82], mod_consts[82], mod_consts[94], NULL, 2, 0, 0);
    codeobj_739080655681ab1dc9312701397440cf = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[89], mod_consts[89], mod_consts[95], NULL, 2, 0, 0);
    codeobj_4fee70e6fad91aab4935b01bab785c35 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[77], mod_consts[96], NULL, 2, 0, 0);
    codeobj_1d833c27d4cae1c5ee9dbcbb01fa27e4 = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[97], NULL, 2, 0, 0);
    codeobj_411fe0e8b9e0be4180f2fe90bb6f211c = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[73], mod_consts[97], NULL, 2, 0, 0);
    codeobj_216b4d5517e8cf635820b818779a9f7d = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[97], NULL, 2, 0, 0);
    codeobj_4feb14758cd11d65f93a6178f55ab66b = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[88], mod_consts[88], mod_consts[98], NULL, 4, 0, 0);
    codeobj_26fb615d6f516637daa00bf7e423f3f7 = MAKE_CODE_OBJECT(module_filename_obj, 9, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[97], NULL, 2, 0, 0);
    codeobj_4f958168339a0df62354f1e4352dd5fc = MAKE_CODE_OBJECT(module_filename_obj, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[69], mod_consts[69], mod_consts[97], NULL, 2, 0, 0);
    codeobj_723764ce92c4e96386daa5415276ce2a = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[94], NULL, 2, 0, 0);
    codeobj_323cfd750c324bf3fa7c4a999b7349e6 = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[84], mod_consts[84], mod_consts[99], NULL, 2, 0, 0);
    codeobj_3259be0bd00d987cc9c933c841e6ed82 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[100], NULL, 2, 0, 0);
    codeobj_73a5edb400150c87e39b837d9874f096 = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[94], NULL, 2, 0, 0);
    codeobj_7e0d6fd1b28fab0ffbf8e558c17ebd9c = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[68], mod_consts[68], mod_consts[97], NULL, 2, 0, 0);
    codeobj_4f840c6e7cf5725993e458aa43f7da49 = MAKE_CODE_OBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[101], NULL, 4, 0, 0);
    codeobj_bb84ed1da15700ba7004bad55fccd97e = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], mod_consts[85], mod_consts[94], NULL, 2, 0, 0);
    codeobj_7f6ee7b859edc4a758ea8243e5cbd240 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[75], mod_consts[75], mod_consts[94], NULL, 2, 0, 0);
    codeobj_a6833cd103e7732cd6a847485d4025ba = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[94], NULL, 2, 0, 0);
    codeobj_4d23e582d9330312bbdaf70c75a219ec = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[90], NULL, 2, 0, 0);
    codeobj_9cdb7b3e5e457e7dbbdea5e5cc588ba3 = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[23], mod_consts[90], NULL, 2, 0, 0);
    codeobj_c471f85477bad927f5c0b5b449564122 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[28], mod_consts[28], mod_consts[102], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__10_handleIntDiv();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__10_handleIntDiv$$$function__1_div(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__11_handleIntMod();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__11_handleIntMod$$$function__1_mod();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__12_pythonIntTo30BitSigned();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__13_handleIntArithmeticShiftLeft();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__13_handleIntArithmeticShiftLeft$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__14_handleIntArithmeticShiftRight();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__14_handleIntArithmeticShiftRight$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__15_handleIntLogicalShiftLeft();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__15_handleIntLogicalShiftLeft$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__16_handleIntLogicalShiftRight();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__16_handleIntLogicalShiftRight$$$function__1_logicalShiftRight();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__17_handleIntOr();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__17_handleIntOr$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__18_handleIntAnd();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__18_handleIntAnd$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__19_handleIntXor();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__19_handleIntXor$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__1_handleIntNE();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__1_handleIntNE$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__20_handleIntOperator();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__21_handleIntIfFail();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__22_handleIntAsFloat();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__2_handleIntLT();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__2_handleIntLT$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__3_handleIntLE();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__3_handleIntLE$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__4_handleIntEQ();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__4_handleIntEQ$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__5_handleIntGT();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__5_handleIntGT$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__6_handleIntGE();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__6_handleIntGE$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__7_handleIntAdd();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__7_handleIntAdd$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__8_handleIntSub();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__8_handleIntSub$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__9_handleIntMul();


static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__9_handleIntMul$$$function__1_lambda();


// The module function definitions.
static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__1_handleIntNE(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_receiver = python_pars[0];
    PyObject *par_argument_list = python_pars[1];
    PyObject *var_SelfBoolean = NULL;
    struct Nuitka_FrameObject *frame_7e0d6fd1b28fab0ffbf8e558c17ebd9c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7e0d6fd1b28fab0ffbf8e558c17ebd9c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7e0d6fd1b28fab0ffbf8e558c17ebd9c)) {
        Py_XDECREF(cache_frame_7e0d6fd1b28fab0ffbf8e558c17ebd9c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7e0d6fd1b28fab0ffbf8e558c17ebd9c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7e0d6fd1b28fab0ffbf8e558c17ebd9c = MAKE_FUNCTION_FRAME(tstate, codeobj_7e0d6fd1b28fab0ffbf8e558c17ebd9c, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7e0d6fd1b28fab0ffbf8e558c17ebd9c->m_type_description == NULL);
    frame_7e0d6fd1b28fab0ffbf8e558c17ebd9c = cache_frame_7e0d6fd1b28fab0ffbf8e558c17ebd9c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7e0d6fd1b28fab0ffbf8e558c17ebd9c);
    assert(Py_REFCNT(frame_7e0d6fd1b28fab0ffbf8e558c17ebd9c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[1];
        tmp_level_value_1 = mod_consts[2];
        frame_7e0d6fd1b28fab0ffbf8e558c17ebd9c->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[3],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_SelfBoolean == NULL);
        var_SelfBoolean = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_receiver);
        tmp_args_element_value_1 = par_receiver;
        CHECK_OBJECT(par_argument_list);
        tmp_args_element_value_2 = par_argument_list;


        tmp_args_element_value_3 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__1_handleIntNE$$$function__1_lambda();

        CHECK_OBJECT(var_SelfBoolean);
        tmp_args_element_value_4 = var_SelfBoolean;
        frame_7e0d6fd1b28fab0ffbf8e558c17ebd9c->m_frame.f_lineno = 3;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7e0d6fd1b28fab0ffbf8e558c17ebd9c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7e0d6fd1b28fab0ffbf8e558c17ebd9c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7e0d6fd1b28fab0ffbf8e558c17ebd9c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7e0d6fd1b28fab0ffbf8e558c17ebd9c,
        type_description_1,
        par_receiver,
        par_argument_list,
        var_SelfBoolean
    );


    // Release cached frame if used for exception.
    if (frame_7e0d6fd1b28fab0ffbf8e558c17ebd9c == cache_frame_7e0d6fd1b28fab0ffbf8e558c17ebd9c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7e0d6fd1b28fab0ffbf8e558c17ebd9c);
        cache_frame_7e0d6fd1b28fab0ffbf8e558c17ebd9c = NULL;
    }

    assertFrameObject(frame_7e0d6fd1b28fab0ffbf8e558c17ebd9c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_SelfBoolean);
    Py_DECREF(var_SelfBoolean);
    var_SelfBoolean = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_SelfBoolean);
    var_SelfBoolean = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__1_handleIntNE$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    struct Nuitka_FrameObject *frame_f53292d69af8b248ee7ebb6950a0f19f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f53292d69af8b248ee7ebb6950a0f19f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f53292d69af8b248ee7ebb6950a0f19f)) {
        Py_XDECREF(cache_frame_f53292d69af8b248ee7ebb6950a0f19f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f53292d69af8b248ee7ebb6950a0f19f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f53292d69af8b248ee7ebb6950a0f19f = MAKE_FUNCTION_FRAME(tstate, codeobj_f53292d69af8b248ee7ebb6950a0f19f, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f53292d69af8b248ee7ebb6950a0f19f->m_type_description == NULL);
    frame_f53292d69af8b248ee7ebb6950a0f19f = cache_frame_f53292d69af8b248ee7ebb6950a0f19f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f53292d69af8b248ee7ebb6950a0f19f);
    assert(Py_REFCNT(frame_f53292d69af8b248ee7ebb6950a0f19f) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_left_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_cmp_expr_right_1 = par_y;
        tmp_return_value = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f53292d69af8b248ee7ebb6950a0f19f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f53292d69af8b248ee7ebb6950a0f19f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f53292d69af8b248ee7ebb6950a0f19f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f53292d69af8b248ee7ebb6950a0f19f,
        type_description_1,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_f53292d69af8b248ee7ebb6950a0f19f == cache_frame_f53292d69af8b248ee7ebb6950a0f19f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f53292d69af8b248ee7ebb6950a0f19f);
        cache_frame_f53292d69af8b248ee7ebb6950a0f19f = NULL;
    }

    assertFrameObject(frame_f53292d69af8b248ee7ebb6950a0f19f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__2_handleIntLT(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_receiver = python_pars[0];
    PyObject *par_argument_list = python_pars[1];
    PyObject *var_SelfBoolean = NULL;
    struct Nuitka_FrameObject *frame_4f958168339a0df62354f1e4352dd5fc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4f958168339a0df62354f1e4352dd5fc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4f958168339a0df62354f1e4352dd5fc)) {
        Py_XDECREF(cache_frame_4f958168339a0df62354f1e4352dd5fc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4f958168339a0df62354f1e4352dd5fc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4f958168339a0df62354f1e4352dd5fc = MAKE_FUNCTION_FRAME(tstate, codeobj_4f958168339a0df62354f1e4352dd5fc, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4f958168339a0df62354f1e4352dd5fc->m_type_description == NULL);
    frame_4f958168339a0df62354f1e4352dd5fc = cache_frame_4f958168339a0df62354f1e4352dd5fc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4f958168339a0df62354f1e4352dd5fc);
    assert(Py_REFCNT(frame_4f958168339a0df62354f1e4352dd5fc) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[1];
        tmp_level_value_1 = mod_consts[2];
        frame_4f958168339a0df62354f1e4352dd5fc->m_frame.f_lineno = 6;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[3],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_SelfBoolean == NULL);
        var_SelfBoolean = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_receiver);
        tmp_args_element_value_1 = par_receiver;
        CHECK_OBJECT(par_argument_list);
        tmp_args_element_value_2 = par_argument_list;


        tmp_args_element_value_3 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__2_handleIntLT$$$function__1_lambda();

        CHECK_OBJECT(var_SelfBoolean);
        tmp_args_element_value_4 = var_SelfBoolean;
        frame_4f958168339a0df62354f1e4352dd5fc->m_frame.f_lineno = 7;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4f958168339a0df62354f1e4352dd5fc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4f958168339a0df62354f1e4352dd5fc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4f958168339a0df62354f1e4352dd5fc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4f958168339a0df62354f1e4352dd5fc,
        type_description_1,
        par_receiver,
        par_argument_list,
        var_SelfBoolean
    );


    // Release cached frame if used for exception.
    if (frame_4f958168339a0df62354f1e4352dd5fc == cache_frame_4f958168339a0df62354f1e4352dd5fc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4f958168339a0df62354f1e4352dd5fc);
        cache_frame_4f958168339a0df62354f1e4352dd5fc = NULL;
    }

    assertFrameObject(frame_4f958168339a0df62354f1e4352dd5fc);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_SelfBoolean);
    Py_DECREF(var_SelfBoolean);
    var_SelfBoolean = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_SelfBoolean);
    var_SelfBoolean = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__2_handleIntLT$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    struct Nuitka_FrameObject *frame_904437bca160e104a298205f033bc3b8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_904437bca160e104a298205f033bc3b8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_904437bca160e104a298205f033bc3b8)) {
        Py_XDECREF(cache_frame_904437bca160e104a298205f033bc3b8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_904437bca160e104a298205f033bc3b8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_904437bca160e104a298205f033bc3b8 = MAKE_FUNCTION_FRAME(tstate, codeobj_904437bca160e104a298205f033bc3b8, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_904437bca160e104a298205f033bc3b8->m_type_description == NULL);
    frame_904437bca160e104a298205f033bc3b8 = cache_frame_904437bca160e104a298205f033bc3b8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_904437bca160e104a298205f033bc3b8);
    assert(Py_REFCNT(frame_904437bca160e104a298205f033bc3b8) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_left_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_cmp_expr_right_1 = par_y;
        tmp_return_value = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_904437bca160e104a298205f033bc3b8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_904437bca160e104a298205f033bc3b8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_904437bca160e104a298205f033bc3b8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_904437bca160e104a298205f033bc3b8,
        type_description_1,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_904437bca160e104a298205f033bc3b8 == cache_frame_904437bca160e104a298205f033bc3b8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_904437bca160e104a298205f033bc3b8);
        cache_frame_904437bca160e104a298205f033bc3b8 = NULL;
    }

    assertFrameObject(frame_904437bca160e104a298205f033bc3b8);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__3_handleIntLE(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_receiver = python_pars[0];
    PyObject *par_argument_list = python_pars[1];
    PyObject *var_SelfBoolean = NULL;
    struct Nuitka_FrameObject *frame_26fb615d6f516637daa00bf7e423f3f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_26fb615d6f516637daa00bf7e423f3f7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_26fb615d6f516637daa00bf7e423f3f7)) {
        Py_XDECREF(cache_frame_26fb615d6f516637daa00bf7e423f3f7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_26fb615d6f516637daa00bf7e423f3f7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_26fb615d6f516637daa00bf7e423f3f7 = MAKE_FUNCTION_FRAME(tstate, codeobj_26fb615d6f516637daa00bf7e423f3f7, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_26fb615d6f516637daa00bf7e423f3f7->m_type_description == NULL);
    frame_26fb615d6f516637daa00bf7e423f3f7 = cache_frame_26fb615d6f516637daa00bf7e423f3f7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_26fb615d6f516637daa00bf7e423f3f7);
    assert(Py_REFCNT(frame_26fb615d6f516637daa00bf7e423f3f7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[1];
        tmp_level_value_1 = mod_consts[2];
        frame_26fb615d6f516637daa00bf7e423f3f7->m_frame.f_lineno = 10;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[3],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_SelfBoolean == NULL);
        var_SelfBoolean = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_receiver);
        tmp_args_element_value_1 = par_receiver;
        CHECK_OBJECT(par_argument_list);
        tmp_args_element_value_2 = par_argument_list;


        tmp_args_element_value_3 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__3_handleIntLE$$$function__1_lambda();

        CHECK_OBJECT(var_SelfBoolean);
        tmp_args_element_value_4 = var_SelfBoolean;
        frame_26fb615d6f516637daa00bf7e423f3f7->m_frame.f_lineno = 11;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_26fb615d6f516637daa00bf7e423f3f7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_26fb615d6f516637daa00bf7e423f3f7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_26fb615d6f516637daa00bf7e423f3f7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_26fb615d6f516637daa00bf7e423f3f7,
        type_description_1,
        par_receiver,
        par_argument_list,
        var_SelfBoolean
    );


    // Release cached frame if used for exception.
    if (frame_26fb615d6f516637daa00bf7e423f3f7 == cache_frame_26fb615d6f516637daa00bf7e423f3f7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_26fb615d6f516637daa00bf7e423f3f7);
        cache_frame_26fb615d6f516637daa00bf7e423f3f7 = NULL;
    }

    assertFrameObject(frame_26fb615d6f516637daa00bf7e423f3f7);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_SelfBoolean);
    Py_DECREF(var_SelfBoolean);
    var_SelfBoolean = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_SelfBoolean);
    var_SelfBoolean = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__3_handleIntLE$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    struct Nuitka_FrameObject *frame_3f7ffdf79fce059d77fd7b07d03c904f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3f7ffdf79fce059d77fd7b07d03c904f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3f7ffdf79fce059d77fd7b07d03c904f)) {
        Py_XDECREF(cache_frame_3f7ffdf79fce059d77fd7b07d03c904f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3f7ffdf79fce059d77fd7b07d03c904f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3f7ffdf79fce059d77fd7b07d03c904f = MAKE_FUNCTION_FRAME(tstate, codeobj_3f7ffdf79fce059d77fd7b07d03c904f, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3f7ffdf79fce059d77fd7b07d03c904f->m_type_description == NULL);
    frame_3f7ffdf79fce059d77fd7b07d03c904f = cache_frame_3f7ffdf79fce059d77fd7b07d03c904f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3f7ffdf79fce059d77fd7b07d03c904f);
    assert(Py_REFCNT(frame_3f7ffdf79fce059d77fd7b07d03c904f) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_left_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_cmp_expr_right_1 = par_y;
        tmp_return_value = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3f7ffdf79fce059d77fd7b07d03c904f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3f7ffdf79fce059d77fd7b07d03c904f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3f7ffdf79fce059d77fd7b07d03c904f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3f7ffdf79fce059d77fd7b07d03c904f,
        type_description_1,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_3f7ffdf79fce059d77fd7b07d03c904f == cache_frame_3f7ffdf79fce059d77fd7b07d03c904f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3f7ffdf79fce059d77fd7b07d03c904f);
        cache_frame_3f7ffdf79fce059d77fd7b07d03c904f = NULL;
    }

    assertFrameObject(frame_3f7ffdf79fce059d77fd7b07d03c904f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__4_handleIntEQ(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_receiver = python_pars[0];
    PyObject *par_argument_list = python_pars[1];
    PyObject *var_SelfBoolean = NULL;
    struct Nuitka_FrameObject *frame_1d833c27d4cae1c5ee9dbcbb01fa27e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1d833c27d4cae1c5ee9dbcbb01fa27e4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1d833c27d4cae1c5ee9dbcbb01fa27e4)) {
        Py_XDECREF(cache_frame_1d833c27d4cae1c5ee9dbcbb01fa27e4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1d833c27d4cae1c5ee9dbcbb01fa27e4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1d833c27d4cae1c5ee9dbcbb01fa27e4 = MAKE_FUNCTION_FRAME(tstate, codeobj_1d833c27d4cae1c5ee9dbcbb01fa27e4, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1d833c27d4cae1c5ee9dbcbb01fa27e4->m_type_description == NULL);
    frame_1d833c27d4cae1c5ee9dbcbb01fa27e4 = cache_frame_1d833c27d4cae1c5ee9dbcbb01fa27e4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1d833c27d4cae1c5ee9dbcbb01fa27e4);
    assert(Py_REFCNT(frame_1d833c27d4cae1c5ee9dbcbb01fa27e4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[1];
        tmp_level_value_1 = mod_consts[2];
        frame_1d833c27d4cae1c5ee9dbcbb01fa27e4->m_frame.f_lineno = 14;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[3],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_SelfBoolean == NULL);
        var_SelfBoolean = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_receiver);
        tmp_args_element_value_1 = par_receiver;
        CHECK_OBJECT(par_argument_list);
        tmp_args_element_value_2 = par_argument_list;


        tmp_args_element_value_3 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__4_handleIntEQ$$$function__1_lambda();

        CHECK_OBJECT(var_SelfBoolean);
        tmp_args_element_value_4 = var_SelfBoolean;
        frame_1d833c27d4cae1c5ee9dbcbb01fa27e4->m_frame.f_lineno = 15;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1d833c27d4cae1c5ee9dbcbb01fa27e4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1d833c27d4cae1c5ee9dbcbb01fa27e4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1d833c27d4cae1c5ee9dbcbb01fa27e4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1d833c27d4cae1c5ee9dbcbb01fa27e4,
        type_description_1,
        par_receiver,
        par_argument_list,
        var_SelfBoolean
    );


    // Release cached frame if used for exception.
    if (frame_1d833c27d4cae1c5ee9dbcbb01fa27e4 == cache_frame_1d833c27d4cae1c5ee9dbcbb01fa27e4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1d833c27d4cae1c5ee9dbcbb01fa27e4);
        cache_frame_1d833c27d4cae1c5ee9dbcbb01fa27e4 = NULL;
    }

    assertFrameObject(frame_1d833c27d4cae1c5ee9dbcbb01fa27e4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_SelfBoolean);
    Py_DECREF(var_SelfBoolean);
    var_SelfBoolean = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_SelfBoolean);
    var_SelfBoolean = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__4_handleIntEQ$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    struct Nuitka_FrameObject *frame_5f42dee2c66d35e22b88c19adb121c7d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5f42dee2c66d35e22b88c19adb121c7d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5f42dee2c66d35e22b88c19adb121c7d)) {
        Py_XDECREF(cache_frame_5f42dee2c66d35e22b88c19adb121c7d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5f42dee2c66d35e22b88c19adb121c7d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5f42dee2c66d35e22b88c19adb121c7d = MAKE_FUNCTION_FRAME(tstate, codeobj_5f42dee2c66d35e22b88c19adb121c7d, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5f42dee2c66d35e22b88c19adb121c7d->m_type_description == NULL);
    frame_5f42dee2c66d35e22b88c19adb121c7d = cache_frame_5f42dee2c66d35e22b88c19adb121c7d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5f42dee2c66d35e22b88c19adb121c7d);
    assert(Py_REFCNT(frame_5f42dee2c66d35e22b88c19adb121c7d) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_left_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_cmp_expr_right_1 = par_y;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5f42dee2c66d35e22b88c19adb121c7d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5f42dee2c66d35e22b88c19adb121c7d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5f42dee2c66d35e22b88c19adb121c7d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5f42dee2c66d35e22b88c19adb121c7d,
        type_description_1,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_5f42dee2c66d35e22b88c19adb121c7d == cache_frame_5f42dee2c66d35e22b88c19adb121c7d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5f42dee2c66d35e22b88c19adb121c7d);
        cache_frame_5f42dee2c66d35e22b88c19adb121c7d = NULL;
    }

    assertFrameObject(frame_5f42dee2c66d35e22b88c19adb121c7d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__5_handleIntGT(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_receiver = python_pars[0];
    PyObject *par_argument_list = python_pars[1];
    PyObject *var_SelfBoolean = NULL;
    struct Nuitka_FrameObject *frame_216b4d5517e8cf635820b818779a9f7d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_216b4d5517e8cf635820b818779a9f7d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_216b4d5517e8cf635820b818779a9f7d)) {
        Py_XDECREF(cache_frame_216b4d5517e8cf635820b818779a9f7d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_216b4d5517e8cf635820b818779a9f7d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_216b4d5517e8cf635820b818779a9f7d = MAKE_FUNCTION_FRAME(tstate, codeobj_216b4d5517e8cf635820b818779a9f7d, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_216b4d5517e8cf635820b818779a9f7d->m_type_description == NULL);
    frame_216b4d5517e8cf635820b818779a9f7d = cache_frame_216b4d5517e8cf635820b818779a9f7d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_216b4d5517e8cf635820b818779a9f7d);
    assert(Py_REFCNT(frame_216b4d5517e8cf635820b818779a9f7d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[1];
        tmp_level_value_1 = mod_consts[2];
        frame_216b4d5517e8cf635820b818779a9f7d->m_frame.f_lineno = 18;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[3],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_SelfBoolean == NULL);
        var_SelfBoolean = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_receiver);
        tmp_args_element_value_1 = par_receiver;
        CHECK_OBJECT(par_argument_list);
        tmp_args_element_value_2 = par_argument_list;


        tmp_args_element_value_3 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__5_handleIntGT$$$function__1_lambda();

        CHECK_OBJECT(var_SelfBoolean);
        tmp_args_element_value_4 = var_SelfBoolean;
        frame_216b4d5517e8cf635820b818779a9f7d->m_frame.f_lineno = 19;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_216b4d5517e8cf635820b818779a9f7d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_216b4d5517e8cf635820b818779a9f7d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_216b4d5517e8cf635820b818779a9f7d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_216b4d5517e8cf635820b818779a9f7d,
        type_description_1,
        par_receiver,
        par_argument_list,
        var_SelfBoolean
    );


    // Release cached frame if used for exception.
    if (frame_216b4d5517e8cf635820b818779a9f7d == cache_frame_216b4d5517e8cf635820b818779a9f7d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_216b4d5517e8cf635820b818779a9f7d);
        cache_frame_216b4d5517e8cf635820b818779a9f7d = NULL;
    }

    assertFrameObject(frame_216b4d5517e8cf635820b818779a9f7d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_SelfBoolean);
    Py_DECREF(var_SelfBoolean);
    var_SelfBoolean = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_SelfBoolean);
    var_SelfBoolean = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__5_handleIntGT$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    struct Nuitka_FrameObject *frame_247d37d2de6121479479624952a322b8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_247d37d2de6121479479624952a322b8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_247d37d2de6121479479624952a322b8)) {
        Py_XDECREF(cache_frame_247d37d2de6121479479624952a322b8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_247d37d2de6121479479624952a322b8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_247d37d2de6121479479624952a322b8 = MAKE_FUNCTION_FRAME(tstate, codeobj_247d37d2de6121479479624952a322b8, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_247d37d2de6121479479624952a322b8->m_type_description == NULL);
    frame_247d37d2de6121479479624952a322b8 = cache_frame_247d37d2de6121479479624952a322b8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_247d37d2de6121479479624952a322b8);
    assert(Py_REFCNT(frame_247d37d2de6121479479624952a322b8) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_left_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_cmp_expr_right_1 = par_y;
        tmp_return_value = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_247d37d2de6121479479624952a322b8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_247d37d2de6121479479624952a322b8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_247d37d2de6121479479624952a322b8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_247d37d2de6121479479624952a322b8,
        type_description_1,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_247d37d2de6121479479624952a322b8 == cache_frame_247d37d2de6121479479624952a322b8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_247d37d2de6121479479624952a322b8);
        cache_frame_247d37d2de6121479479624952a322b8 = NULL;
    }

    assertFrameObject(frame_247d37d2de6121479479624952a322b8);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__6_handleIntGE(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_receiver = python_pars[0];
    PyObject *par_argument_list = python_pars[1];
    PyObject *var_SelfBoolean = NULL;
    struct Nuitka_FrameObject *frame_411fe0e8b9e0be4180f2fe90bb6f211c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_411fe0e8b9e0be4180f2fe90bb6f211c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_411fe0e8b9e0be4180f2fe90bb6f211c)) {
        Py_XDECREF(cache_frame_411fe0e8b9e0be4180f2fe90bb6f211c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_411fe0e8b9e0be4180f2fe90bb6f211c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_411fe0e8b9e0be4180f2fe90bb6f211c = MAKE_FUNCTION_FRAME(tstate, codeobj_411fe0e8b9e0be4180f2fe90bb6f211c, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_411fe0e8b9e0be4180f2fe90bb6f211c->m_type_description == NULL);
    frame_411fe0e8b9e0be4180f2fe90bb6f211c = cache_frame_411fe0e8b9e0be4180f2fe90bb6f211c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_411fe0e8b9e0be4180f2fe90bb6f211c);
    assert(Py_REFCNT(frame_411fe0e8b9e0be4180f2fe90bb6f211c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[1];
        tmp_level_value_1 = mod_consts[2];
        frame_411fe0e8b9e0be4180f2fe90bb6f211c->m_frame.f_lineno = 22;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[3],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_SelfBoolean == NULL);
        var_SelfBoolean = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_receiver);
        tmp_args_element_value_1 = par_receiver;
        CHECK_OBJECT(par_argument_list);
        tmp_args_element_value_2 = par_argument_list;


        tmp_args_element_value_3 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__6_handleIntGE$$$function__1_lambda();

        CHECK_OBJECT(var_SelfBoolean);
        tmp_args_element_value_4 = var_SelfBoolean;
        frame_411fe0e8b9e0be4180f2fe90bb6f211c->m_frame.f_lineno = 23;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_411fe0e8b9e0be4180f2fe90bb6f211c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_411fe0e8b9e0be4180f2fe90bb6f211c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_411fe0e8b9e0be4180f2fe90bb6f211c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_411fe0e8b9e0be4180f2fe90bb6f211c,
        type_description_1,
        par_receiver,
        par_argument_list,
        var_SelfBoolean
    );


    // Release cached frame if used for exception.
    if (frame_411fe0e8b9e0be4180f2fe90bb6f211c == cache_frame_411fe0e8b9e0be4180f2fe90bb6f211c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_411fe0e8b9e0be4180f2fe90bb6f211c);
        cache_frame_411fe0e8b9e0be4180f2fe90bb6f211c = NULL;
    }

    assertFrameObject(frame_411fe0e8b9e0be4180f2fe90bb6f211c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_SelfBoolean);
    Py_DECREF(var_SelfBoolean);
    var_SelfBoolean = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_SelfBoolean);
    var_SelfBoolean = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__6_handleIntGE$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    struct Nuitka_FrameObject *frame_b7ac9629989602d30c43b9a811248e86;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b7ac9629989602d30c43b9a811248e86 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b7ac9629989602d30c43b9a811248e86)) {
        Py_XDECREF(cache_frame_b7ac9629989602d30c43b9a811248e86);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b7ac9629989602d30c43b9a811248e86 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b7ac9629989602d30c43b9a811248e86 = MAKE_FUNCTION_FRAME(tstate, codeobj_b7ac9629989602d30c43b9a811248e86, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b7ac9629989602d30c43b9a811248e86->m_type_description == NULL);
    frame_b7ac9629989602d30c43b9a811248e86 = cache_frame_b7ac9629989602d30c43b9a811248e86;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b7ac9629989602d30c43b9a811248e86);
    assert(Py_REFCNT(frame_b7ac9629989602d30c43b9a811248e86) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_left_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_cmp_expr_right_1 = par_y;
        tmp_return_value = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b7ac9629989602d30c43b9a811248e86, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b7ac9629989602d30c43b9a811248e86->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b7ac9629989602d30c43b9a811248e86, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b7ac9629989602d30c43b9a811248e86,
        type_description_1,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_b7ac9629989602d30c43b9a811248e86 == cache_frame_b7ac9629989602d30c43b9a811248e86) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b7ac9629989602d30c43b9a811248e86);
        cache_frame_b7ac9629989602d30c43b9a811248e86 = NULL;
    }

    assertFrameObject(frame_b7ac9629989602d30c43b9a811248e86);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__7_handleIntAdd(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_receiver = python_pars[0];
    PyObject *par_argument_list = python_pars[1];
    PyObject *var_SelfInteger = NULL;
    struct Nuitka_FrameObject *frame_aa5249e20417f8d6f92f6a4e509b46f2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_aa5249e20417f8d6f92f6a4e509b46f2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_aa5249e20417f8d6f92f6a4e509b46f2)) {
        Py_XDECREF(cache_frame_aa5249e20417f8d6f92f6a4e509b46f2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aa5249e20417f8d6f92f6a4e509b46f2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aa5249e20417f8d6f92f6a4e509b46f2 = MAKE_FUNCTION_FRAME(tstate, codeobj_aa5249e20417f8d6f92f6a4e509b46f2, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aa5249e20417f8d6f92f6a4e509b46f2->m_type_description == NULL);
    frame_aa5249e20417f8d6f92f6a4e509b46f2 = cache_frame_aa5249e20417f8d6f92f6a4e509b46f2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_aa5249e20417f8d6f92f6a4e509b46f2);
    assert(Py_REFCNT(frame_aa5249e20417f8d6f92f6a4e509b46f2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[12];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[13];
        tmp_level_value_1 = mod_consts[2];
        frame_aa5249e20417f8d6f92f6a4e509b46f2->m_frame.f_lineno = 26;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[14],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_SelfInteger == NULL);
        var_SelfInteger = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_receiver);
        tmp_args_element_value_1 = par_receiver;
        CHECK_OBJECT(par_argument_list);
        tmp_args_element_value_2 = par_argument_list;


        tmp_args_element_value_3 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__7_handleIntAdd$$$function__1_lambda();

        CHECK_OBJECT(var_SelfInteger);
        tmp_args_element_value_4 = var_SelfInteger;
        frame_aa5249e20417f8d6f92f6a4e509b46f2->m_frame.f_lineno = 27;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aa5249e20417f8d6f92f6a4e509b46f2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aa5249e20417f8d6f92f6a4e509b46f2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aa5249e20417f8d6f92f6a4e509b46f2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aa5249e20417f8d6f92f6a4e509b46f2,
        type_description_1,
        par_receiver,
        par_argument_list,
        var_SelfInteger
    );


    // Release cached frame if used for exception.
    if (frame_aa5249e20417f8d6f92f6a4e509b46f2 == cache_frame_aa5249e20417f8d6f92f6a4e509b46f2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aa5249e20417f8d6f92f6a4e509b46f2);
        cache_frame_aa5249e20417f8d6f92f6a4e509b46f2 = NULL;
    }

    assertFrameObject(frame_aa5249e20417f8d6f92f6a4e509b46f2);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_SelfInteger);
    Py_DECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__7_handleIntAdd$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    struct Nuitka_FrameObject *frame_572fcb5eafff556a5fb53d9aa73083b9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_572fcb5eafff556a5fb53d9aa73083b9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_572fcb5eafff556a5fb53d9aa73083b9)) {
        Py_XDECREF(cache_frame_572fcb5eafff556a5fb53d9aa73083b9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_572fcb5eafff556a5fb53d9aa73083b9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_572fcb5eafff556a5fb53d9aa73083b9 = MAKE_FUNCTION_FRAME(tstate, codeobj_572fcb5eafff556a5fb53d9aa73083b9, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_572fcb5eafff556a5fb53d9aa73083b9->m_type_description == NULL);
    frame_572fcb5eafff556a5fb53d9aa73083b9 = cache_frame_572fcb5eafff556a5fb53d9aa73083b9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_572fcb5eafff556a5fb53d9aa73083b9);
    assert(Py_REFCNT(frame_572fcb5eafff556a5fb53d9aa73083b9) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_add_expr_left_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_add_expr_right_1 = par_y;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_572fcb5eafff556a5fb53d9aa73083b9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_572fcb5eafff556a5fb53d9aa73083b9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_572fcb5eafff556a5fb53d9aa73083b9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_572fcb5eafff556a5fb53d9aa73083b9,
        type_description_1,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_572fcb5eafff556a5fb53d9aa73083b9 == cache_frame_572fcb5eafff556a5fb53d9aa73083b9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_572fcb5eafff556a5fb53d9aa73083b9);
        cache_frame_572fcb5eafff556a5fb53d9aa73083b9 = NULL;
    }

    assertFrameObject(frame_572fcb5eafff556a5fb53d9aa73083b9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__8_handleIntSub(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_receiver = python_pars[0];
    PyObject *par_argument_list = python_pars[1];
    PyObject *var_SelfInteger = NULL;
    struct Nuitka_FrameObject *frame_7f6ee7b859edc4a758ea8243e5cbd240;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7f6ee7b859edc4a758ea8243e5cbd240 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7f6ee7b859edc4a758ea8243e5cbd240)) {
        Py_XDECREF(cache_frame_7f6ee7b859edc4a758ea8243e5cbd240);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7f6ee7b859edc4a758ea8243e5cbd240 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7f6ee7b859edc4a758ea8243e5cbd240 = MAKE_FUNCTION_FRAME(tstate, codeobj_7f6ee7b859edc4a758ea8243e5cbd240, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7f6ee7b859edc4a758ea8243e5cbd240->m_type_description == NULL);
    frame_7f6ee7b859edc4a758ea8243e5cbd240 = cache_frame_7f6ee7b859edc4a758ea8243e5cbd240;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7f6ee7b859edc4a758ea8243e5cbd240);
    assert(Py_REFCNT(frame_7f6ee7b859edc4a758ea8243e5cbd240) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[12];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[13];
        tmp_level_value_1 = mod_consts[2];
        frame_7f6ee7b859edc4a758ea8243e5cbd240->m_frame.f_lineno = 30;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[14],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_SelfInteger == NULL);
        var_SelfInteger = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_receiver);
        tmp_args_element_value_1 = par_receiver;
        CHECK_OBJECT(par_argument_list);
        tmp_args_element_value_2 = par_argument_list;


        tmp_args_element_value_3 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__8_handleIntSub$$$function__1_lambda();

        CHECK_OBJECT(var_SelfInteger);
        tmp_args_element_value_4 = var_SelfInteger;
        frame_7f6ee7b859edc4a758ea8243e5cbd240->m_frame.f_lineno = 31;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7f6ee7b859edc4a758ea8243e5cbd240, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f6ee7b859edc4a758ea8243e5cbd240->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f6ee7b859edc4a758ea8243e5cbd240, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7f6ee7b859edc4a758ea8243e5cbd240,
        type_description_1,
        par_receiver,
        par_argument_list,
        var_SelfInteger
    );


    // Release cached frame if used for exception.
    if (frame_7f6ee7b859edc4a758ea8243e5cbd240 == cache_frame_7f6ee7b859edc4a758ea8243e5cbd240) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7f6ee7b859edc4a758ea8243e5cbd240);
        cache_frame_7f6ee7b859edc4a758ea8243e5cbd240 = NULL;
    }

    assertFrameObject(frame_7f6ee7b859edc4a758ea8243e5cbd240);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_SelfInteger);
    Py_DECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__8_handleIntSub$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    struct Nuitka_FrameObject *frame_96cae2ae7ab3d3364ca9b832210ff9ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_96cae2ae7ab3d3364ca9b832210ff9ae = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_96cae2ae7ab3d3364ca9b832210ff9ae)) {
        Py_XDECREF(cache_frame_96cae2ae7ab3d3364ca9b832210ff9ae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_96cae2ae7ab3d3364ca9b832210ff9ae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_96cae2ae7ab3d3364ca9b832210ff9ae = MAKE_FUNCTION_FRAME(tstate, codeobj_96cae2ae7ab3d3364ca9b832210ff9ae, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_96cae2ae7ab3d3364ca9b832210ff9ae->m_type_description == NULL);
    frame_96cae2ae7ab3d3364ca9b832210ff9ae = cache_frame_96cae2ae7ab3d3364ca9b832210ff9ae;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_96cae2ae7ab3d3364ca9b832210ff9ae);
    assert(Py_REFCNT(frame_96cae2ae7ab3d3364ca9b832210ff9ae) == 2);

    // Framed code:
    {
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_sub_expr_left_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_sub_expr_right_1 = par_y;
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_96cae2ae7ab3d3364ca9b832210ff9ae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96cae2ae7ab3d3364ca9b832210ff9ae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96cae2ae7ab3d3364ca9b832210ff9ae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_96cae2ae7ab3d3364ca9b832210ff9ae,
        type_description_1,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_96cae2ae7ab3d3364ca9b832210ff9ae == cache_frame_96cae2ae7ab3d3364ca9b832210ff9ae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_96cae2ae7ab3d3364ca9b832210ff9ae);
        cache_frame_96cae2ae7ab3d3364ca9b832210ff9ae = NULL;
    }

    assertFrameObject(frame_96cae2ae7ab3d3364ca9b832210ff9ae);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__9_handleIntMul(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_receiver = python_pars[0];
    PyObject *par_argument_list = python_pars[1];
    PyObject *var_SelfInteger = NULL;
    struct Nuitka_FrameObject *frame_73a5edb400150c87e39b837d9874f096;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_73a5edb400150c87e39b837d9874f096 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_73a5edb400150c87e39b837d9874f096)) {
        Py_XDECREF(cache_frame_73a5edb400150c87e39b837d9874f096);

#if _DEBUG_REFCOUNTS
        if (cache_frame_73a5edb400150c87e39b837d9874f096 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_73a5edb400150c87e39b837d9874f096 = MAKE_FUNCTION_FRAME(tstate, codeobj_73a5edb400150c87e39b837d9874f096, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_73a5edb400150c87e39b837d9874f096->m_type_description == NULL);
    frame_73a5edb400150c87e39b837d9874f096 = cache_frame_73a5edb400150c87e39b837d9874f096;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_73a5edb400150c87e39b837d9874f096);
    assert(Py_REFCNT(frame_73a5edb400150c87e39b837d9874f096) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[12];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[13];
        tmp_level_value_1 = mod_consts[2];
        frame_73a5edb400150c87e39b837d9874f096->m_frame.f_lineno = 34;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[14],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_SelfInteger == NULL);
        var_SelfInteger = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_receiver);
        tmp_args_element_value_1 = par_receiver;
        CHECK_OBJECT(par_argument_list);
        tmp_args_element_value_2 = par_argument_list;


        tmp_args_element_value_3 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__9_handleIntMul$$$function__1_lambda();

        CHECK_OBJECT(var_SelfInteger);
        tmp_args_element_value_4 = var_SelfInteger;
        frame_73a5edb400150c87e39b837d9874f096->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_73a5edb400150c87e39b837d9874f096, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_73a5edb400150c87e39b837d9874f096->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_73a5edb400150c87e39b837d9874f096, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_73a5edb400150c87e39b837d9874f096,
        type_description_1,
        par_receiver,
        par_argument_list,
        var_SelfInteger
    );


    // Release cached frame if used for exception.
    if (frame_73a5edb400150c87e39b837d9874f096 == cache_frame_73a5edb400150c87e39b837d9874f096) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_73a5edb400150c87e39b837d9874f096);
        cache_frame_73a5edb400150c87e39b837d9874f096 = NULL;
    }

    assertFrameObject(frame_73a5edb400150c87e39b837d9874f096);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_SelfInteger);
    Py_DECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__9_handleIntMul$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    struct Nuitka_FrameObject *frame_8a6ddd3fc2a641f1711f9c55c186af38;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8a6ddd3fc2a641f1711f9c55c186af38 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8a6ddd3fc2a641f1711f9c55c186af38)) {
        Py_XDECREF(cache_frame_8a6ddd3fc2a641f1711f9c55c186af38);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8a6ddd3fc2a641f1711f9c55c186af38 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8a6ddd3fc2a641f1711f9c55c186af38 = MAKE_FUNCTION_FRAME(tstate, codeobj_8a6ddd3fc2a641f1711f9c55c186af38, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8a6ddd3fc2a641f1711f9c55c186af38->m_type_description == NULL);
    frame_8a6ddd3fc2a641f1711f9c55c186af38 = cache_frame_8a6ddd3fc2a641f1711f9c55c186af38;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8a6ddd3fc2a641f1711f9c55c186af38);
    assert(Py_REFCNT(frame_8a6ddd3fc2a641f1711f9c55c186af38) == 2);

    // Framed code:
    {
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_mult_expr_left_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_mult_expr_right_1 = par_y;
        tmp_return_value = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8a6ddd3fc2a641f1711f9c55c186af38, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8a6ddd3fc2a641f1711f9c55c186af38->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8a6ddd3fc2a641f1711f9c55c186af38, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8a6ddd3fc2a641f1711f9c55c186af38,
        type_description_1,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_8a6ddd3fc2a641f1711f9c55c186af38 == cache_frame_8a6ddd3fc2a641f1711f9c55c186af38) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8a6ddd3fc2a641f1711f9c55c186af38);
        cache_frame_8a6ddd3fc2a641f1711f9c55c186af38 = NULL;
    }

    assertFrameObject(frame_8a6ddd3fc2a641f1711f9c55c186af38);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__10_handleIntDiv(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_receiver = python_pars[0];
    PyObject *par_argument_list = python_pars[1];
    PyObject *var_SelfInteger = NULL;
    struct Nuitka_CellObject *var_math = Nuitka_Cell_Empty();
    PyObject *var_div = NULL;
    struct Nuitka_FrameObject *frame_4fee70e6fad91aab4935b01bab785c35;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4fee70e6fad91aab4935b01bab785c35 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4fee70e6fad91aab4935b01bab785c35)) {
        Py_XDECREF(cache_frame_4fee70e6fad91aab4935b01bab785c35);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4fee70e6fad91aab4935b01bab785c35 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4fee70e6fad91aab4935b01bab785c35 = MAKE_FUNCTION_FRAME(tstate, codeobj_4fee70e6fad91aab4935b01bab785c35, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4fee70e6fad91aab4935b01bab785c35->m_type_description == NULL);
    frame_4fee70e6fad91aab4935b01bab785c35 = cache_frame_4fee70e6fad91aab4935b01bab785c35;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4fee70e6fad91aab4935b01bab785c35);
    assert(Py_REFCNT(frame_4fee70e6fad91aab4935b01bab785c35) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[12];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[13];
        tmp_level_value_1 = mod_consts[2];
        frame_4fee70e6fad91aab4935b01bab785c35->m_frame.f_lineno = 38;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[14],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        assert(var_SelfInteger == NULL);
        var_SelfInteger = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[18];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[2];
        frame_4fee70e6fad91aab4935b01bab785c35->m_frame.f_lineno = 39;
        tmp_assign_source_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_math) == NULL);
        PyCell_SET(var_math, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assign_source_3;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var_math;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_3 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__10_handleIntDiv$$$function__1_div(tmp_closure_1);

        assert(var_div == NULL);
        var_div = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_receiver);
        tmp_args_element_value_1 = par_receiver;
        CHECK_OBJECT(par_argument_list);
        tmp_args_element_value_2 = par_argument_list;
        CHECK_OBJECT(var_div);
        tmp_args_element_value_3 = var_div;
        CHECK_OBJECT(var_SelfInteger);
        tmp_args_element_value_4 = var_SelfInteger;
        frame_4fee70e6fad91aab4935b01bab785c35->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4fee70e6fad91aab4935b01bab785c35, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4fee70e6fad91aab4935b01bab785c35->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4fee70e6fad91aab4935b01bab785c35, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4fee70e6fad91aab4935b01bab785c35,
        type_description_1,
        par_receiver,
        par_argument_list,
        var_SelfInteger,
        var_math,
        var_div
    );


    // Release cached frame if used for exception.
    if (frame_4fee70e6fad91aab4935b01bab785c35 == cache_frame_4fee70e6fad91aab4935b01bab785c35) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4fee70e6fad91aab4935b01bab785c35);
        cache_frame_4fee70e6fad91aab4935b01bab785c35 = NULL;
    }

    assertFrameObject(frame_4fee70e6fad91aab4935b01bab785c35);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_SelfInteger);
    Py_DECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    CHECK_OBJECT(var_math);
    Py_DECREF(var_math);
    var_math = NULL;
    CHECK_OBJECT(var_div);
    Py_DECREF(var_div);
    var_div = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    CHECK_OBJECT(var_math);
    Py_DECREF(var_math);
    var_math = NULL;
    Py_XDECREF(var_div);
    var_div = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__10_handleIntDiv$$$function__1_div(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_996abf1c13875851afca0554f55d7539;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_996abf1c13875851afca0554f55d7539 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_996abf1c13875851afca0554f55d7539)) {
        Py_XDECREF(cache_frame_996abf1c13875851afca0554f55d7539);

#if _DEBUG_REFCOUNTS
        if (cache_frame_996abf1c13875851afca0554f55d7539 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_996abf1c13875851afca0554f55d7539 = MAKE_FUNCTION_FRAME(tstate, codeobj_996abf1c13875851afca0554f55d7539, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_996abf1c13875851afca0554f55d7539->m_type_description == NULL);
    frame_996abf1c13875851afca0554f55d7539 = cache_frame_996abf1c13875851afca0554f55d7539;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_996abf1c13875851afca0554f55d7539);
    assert(Py_REFCNT(frame_996abf1c13875851afca0554f55d7539) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_truediv_expr_left_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_truediv_expr_right_1 = par_y;
        tmp_assign_source_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_result);
        tmp_cmp_expr_left_1 = var_result;
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 43;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(var_result);
        tmp_args_element_value_1 = var_result;
        frame_996abf1c13875851afca0554f55d7539->m_frame.f_lineno = 43;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[21], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 45;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(var_result);
        tmp_args_element_value_2 = var_result;
        frame_996abf1c13875851afca0554f55d7539->m_frame.f_lineno = 45;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[22], tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_996abf1c13875851afca0554f55d7539, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_996abf1c13875851afca0554f55d7539->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_996abf1c13875851afca0554f55d7539, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_996abf1c13875851afca0554f55d7539,
        type_description_1,
        par_x,
        par_y,
        var_result,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_996abf1c13875851afca0554f55d7539 == cache_frame_996abf1c13875851afca0554f55d7539) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_996abf1c13875851afca0554f55d7539);
        cache_frame_996abf1c13875851afca0554f55d7539 = NULL;
    }

    assertFrameObject(frame_996abf1c13875851afca0554f55d7539);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_result);
    var_result = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__11_handleIntMod(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_receiver = python_pars[0];
    PyObject *par_argument_list = python_pars[1];
    PyObject *var_SelfInteger = NULL;
    PyObject *var_mod = NULL;
    struct Nuitka_FrameObject *frame_3259be0bd00d987cc9c933c841e6ed82;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3259be0bd00d987cc9c933c841e6ed82 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3259be0bd00d987cc9c933c841e6ed82)) {
        Py_XDECREF(cache_frame_3259be0bd00d987cc9c933c841e6ed82);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3259be0bd00d987cc9c933c841e6ed82 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3259be0bd00d987cc9c933c841e6ed82 = MAKE_FUNCTION_FRAME(tstate, codeobj_3259be0bd00d987cc9c933c841e6ed82, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3259be0bd00d987cc9c933c841e6ed82->m_type_description == NULL);
    frame_3259be0bd00d987cc9c933c841e6ed82 = cache_frame_3259be0bd00d987cc9c933c841e6ed82;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3259be0bd00d987cc9c933c841e6ed82);
    assert(Py_REFCNT(frame_3259be0bd00d987cc9c933c841e6ed82) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[12];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[13];
        tmp_level_value_1 = mod_consts[2];
        frame_3259be0bd00d987cc9c933c841e6ed82->m_frame.f_lineno = 49;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[14],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_SelfInteger == NULL);
        var_SelfInteger = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;


        tmp_assign_source_2 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__11_handleIntMod$$$function__1_mod();

        assert(var_mod == NULL);
        var_mod = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_receiver);
        tmp_args_element_value_1 = par_receiver;
        CHECK_OBJECT(par_argument_list);
        tmp_args_element_value_2 = par_argument_list;
        CHECK_OBJECT(var_mod);
        tmp_args_element_value_3 = var_mod;
        CHECK_OBJECT(var_SelfInteger);
        tmp_args_element_value_4 = var_SelfInteger;
        frame_3259be0bd00d987cc9c933c841e6ed82->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3259be0bd00d987cc9c933c841e6ed82, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3259be0bd00d987cc9c933c841e6ed82->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3259be0bd00d987cc9c933c841e6ed82, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3259be0bd00d987cc9c933c841e6ed82,
        type_description_1,
        par_receiver,
        par_argument_list,
        var_SelfInteger,
        var_mod
    );


    // Release cached frame if used for exception.
    if (frame_3259be0bd00d987cc9c933c841e6ed82 == cache_frame_3259be0bd00d987cc9c933c841e6ed82) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3259be0bd00d987cc9c933c841e6ed82);
        cache_frame_3259be0bd00d987cc9c933c841e6ed82 = NULL;
    }

    assertFrameObject(frame_3259be0bd00d987cc9c933c841e6ed82);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_SelfInteger);
    Py_DECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    CHECK_OBJECT(var_mod);
    Py_DECREF(var_mod);
    var_mod = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    Py_XDECREF(var_mod);
    var_mod = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__11_handleIntMod$$$function__1_mod(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    struct Nuitka_FrameObject *frame_9cdb7b3e5e457e7dbbdea5e5cc588ba3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9cdb7b3e5e457e7dbbdea5e5cc588ba3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9cdb7b3e5e457e7dbbdea5e5cc588ba3)) {
        Py_XDECREF(cache_frame_9cdb7b3e5e457e7dbbdea5e5cc588ba3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9cdb7b3e5e457e7dbbdea5e5cc588ba3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9cdb7b3e5e457e7dbbdea5e5cc588ba3 = MAKE_FUNCTION_FRAME(tstate, codeobj_9cdb7b3e5e457e7dbbdea5e5cc588ba3, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9cdb7b3e5e457e7dbbdea5e5cc588ba3->m_type_description == NULL);
    frame_9cdb7b3e5e457e7dbbdea5e5cc588ba3 = cache_frame_9cdb7b3e5e457e7dbbdea5e5cc588ba3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9cdb7b3e5e457e7dbbdea5e5cc588ba3);
    assert(Py_REFCNT(frame_9cdb7b3e5e457e7dbbdea5e5cc588ba3) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_left_1 = par_x;
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_and_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_y);
        tmp_cmp_expr_left_2 = par_y;
        tmp_cmp_expr_right_2 = mod_consts[2];
        tmp_and_right_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_left_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_left_3 = par_x;
        tmp_cmp_expr_right_3 = mod_consts[2];
        tmp_and_left_value_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_y);
        tmp_cmp_expr_left_4 = par_y;
        tmp_cmp_expr_right_4 = mod_consts[2];
        tmp_and_right_value_2 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_or_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_mod_expr_left_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_mod_expr_right_1 = par_y;
        tmp_sub_expr_left_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_y);
        tmp_sub_expr_right_1 = par_y;
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        CHECK_OBJECT(par_x);
        tmp_mod_expr_left_2 = par_x;
        CHECK_OBJECT(par_y);
        tmp_mod_expr_right_2 = par_y;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9cdb7b3e5e457e7dbbdea5e5cc588ba3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9cdb7b3e5e457e7dbbdea5e5cc588ba3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9cdb7b3e5e457e7dbbdea5e5cc588ba3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9cdb7b3e5e457e7dbbdea5e5cc588ba3,
        type_description_1,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_9cdb7b3e5e457e7dbbdea5e5cc588ba3 == cache_frame_9cdb7b3e5e457e7dbbdea5e5cc588ba3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9cdb7b3e5e457e7dbbdea5e5cc588ba3);
        cache_frame_9cdb7b3e5e457e7dbbdea5e5cc588ba3 = NULL;
    }

    assertFrameObject(frame_9cdb7b3e5e457e7dbbdea5e5cc588ba3);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__12_pythonIntTo30BitSigned(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    nuitka_bool var_has_sign_bit = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_c471f85477bad927f5c0b5b449564122;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c471f85477bad927f5c0b5b449564122 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c471f85477bad927f5c0b5b449564122)) {
        Py_XDECREF(cache_frame_c471f85477bad927f5c0b5b449564122);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c471f85477bad927f5c0b5b449564122 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c471f85477bad927f5c0b5b449564122 = MAKE_FUNCTION_FRAME(tstate, codeobj_c471f85477bad927f5c0b5b449564122, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c471f85477bad927f5c0b5b449564122->m_type_description == NULL);
    frame_c471f85477bad927f5c0b5b449564122 = cache_frame_c471f85477bad927f5c0b5b449564122;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c471f85477bad927f5c0b5b449564122);
    assert(Py_REFCNT(frame_c471f85477bad927f5c0b5b449564122) == 2);

    // Framed code:
    {
        nuitka_bool tmp_assign_source_1;
        PyObject *tmp_value_value_1;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_bitand_expr_left_1 = par_x;
        tmp_bitand_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_bitand_expr_right_1 == NULL)) {
            tmp_bitand_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_bitand_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "obo";
            goto frame_exception_exit_1;
        }
        tmp_value_value_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_value_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "obo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "obo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        var_has_sign_bit = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_bitand_expr_left_2;
        PyObject *tmp_bitand_expr_right_2;
        CHECK_OBJECT(par_x);
        tmp_bitand_expr_left_2 = par_x;
        tmp_bitand_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_bitand_expr_right_2 == NULL)) {
            tmp_bitand_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_bitand_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "obo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "obo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_1;
        assert(var_has_sign_bit != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_1 = var_has_sign_bit == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_res);
        tmp_iadd_expr_left_1 = var_res;
        tmp_operand_value_1 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_operand_value_1 == NULL)) {
            tmp_operand_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "obo";
            goto frame_exception_exit_1;
        }
        tmp_iadd_expr_right_1 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_1);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "obo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "obo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_iadd_expr_left_1;
        var_res = tmp_assign_source_3;

    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c471f85477bad927f5c0b5b449564122, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c471f85477bad927f5c0b5b449564122->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c471f85477bad927f5c0b5b449564122, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c471f85477bad927f5c0b5b449564122,
        type_description_1,
        par_x,
        (int)var_has_sign_bit,
        var_res
    );


    // Release cached frame if used for exception.
    if (frame_c471f85477bad927f5c0b5b449564122 == cache_frame_c471f85477bad927f5c0b5b449564122) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c471f85477bad927f5c0b5b449564122);
        cache_frame_c471f85477bad927f5c0b5b449564122 = NULL;
    }

    assertFrameObject(frame_c471f85477bad927f5c0b5b449564122);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_res);
    tmp_return_value = var_res;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    assert(var_has_sign_bit != NUITKA_BOOL_UNASSIGNED);
    var_has_sign_bit = NUITKA_BOOL_UNASSIGNED;
    CHECK_OBJECT(var_res);
    Py_DECREF(var_res);
    var_res = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    var_has_sign_bit = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_res);
    var_res = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__13_handleIntArithmeticShiftLeft(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_receiver = python_pars[0];
    PyObject *par_argument_list = python_pars[1];
    PyObject *var_SelfInteger = NULL;
    struct Nuitka_FrameObject *frame_3ef5a078061dcb830719edde001cc6df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3ef5a078061dcb830719edde001cc6df = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3ef5a078061dcb830719edde001cc6df)) {
        Py_XDECREF(cache_frame_3ef5a078061dcb830719edde001cc6df);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3ef5a078061dcb830719edde001cc6df == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3ef5a078061dcb830719edde001cc6df = MAKE_FUNCTION_FRAME(tstate, codeobj_3ef5a078061dcb830719edde001cc6df, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3ef5a078061dcb830719edde001cc6df->m_type_description == NULL);
    frame_3ef5a078061dcb830719edde001cc6df = cache_frame_3ef5a078061dcb830719edde001cc6df;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3ef5a078061dcb830719edde001cc6df);
    assert(Py_REFCNT(frame_3ef5a078061dcb830719edde001cc6df) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[12];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[13];
        tmp_level_value_1 = mod_consts[2];
        frame_3ef5a078061dcb830719edde001cc6df->m_frame.f_lineno = 67;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[14],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_SelfInteger == NULL);
        var_SelfInteger = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_receiver);
        tmp_args_element_value_1 = par_receiver;
        CHECK_OBJECT(par_argument_list);
        tmp_args_element_value_2 = par_argument_list;


        tmp_args_element_value_3 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__13_handleIntArithmeticShiftLeft$$$function__1_lambda();

        CHECK_OBJECT(var_SelfInteger);
        tmp_args_element_value_4 = var_SelfInteger;
        frame_3ef5a078061dcb830719edde001cc6df->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3ef5a078061dcb830719edde001cc6df, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3ef5a078061dcb830719edde001cc6df->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3ef5a078061dcb830719edde001cc6df, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3ef5a078061dcb830719edde001cc6df,
        type_description_1,
        par_receiver,
        par_argument_list,
        var_SelfInteger
    );


    // Release cached frame if used for exception.
    if (frame_3ef5a078061dcb830719edde001cc6df == cache_frame_3ef5a078061dcb830719edde001cc6df) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3ef5a078061dcb830719edde001cc6df);
        cache_frame_3ef5a078061dcb830719edde001cc6df = NULL;
    }

    assertFrameObject(frame_3ef5a078061dcb830719edde001cc6df);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_SelfInteger);
    Py_DECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__13_handleIntArithmeticShiftLeft$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    struct Nuitka_FrameObject *frame_648687cbdc0829fd1cd245b3462f1c03;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_648687cbdc0829fd1cd245b3462f1c03 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_648687cbdc0829fd1cd245b3462f1c03)) {
        Py_XDECREF(cache_frame_648687cbdc0829fd1cd245b3462f1c03);

#if _DEBUG_REFCOUNTS
        if (cache_frame_648687cbdc0829fd1cd245b3462f1c03 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_648687cbdc0829fd1cd245b3462f1c03 = MAKE_FUNCTION_FRAME(tstate, codeobj_648687cbdc0829fd1cd245b3462f1c03, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_648687cbdc0829fd1cd245b3462f1c03->m_type_description == NULL);
    frame_648687cbdc0829fd1cd245b3462f1c03 = cache_frame_648687cbdc0829fd1cd245b3462f1c03;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_648687cbdc0829fd1cd245b3462f1c03);
    assert(Py_REFCNT(frame_648687cbdc0829fd1cd245b3462f1c03) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_lshift_expr_left_1;
        PyObject *tmp_lshift_expr_right_1;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_lshift_expr_left_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_bitand_expr_left_1 = par_y;
        tmp_bitand_expr_right_1 = mod_consts[29];
        tmp_lshift_expr_right_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_lshift_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_OBJECT(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
        Py_DECREF(tmp_lshift_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_648687cbdc0829fd1cd245b3462f1c03->m_frame.f_lineno = 68;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_648687cbdc0829fd1cd245b3462f1c03, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_648687cbdc0829fd1cd245b3462f1c03->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_648687cbdc0829fd1cd245b3462f1c03, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_648687cbdc0829fd1cd245b3462f1c03,
        type_description_1,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_648687cbdc0829fd1cd245b3462f1c03 == cache_frame_648687cbdc0829fd1cd245b3462f1c03) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_648687cbdc0829fd1cd245b3462f1c03);
        cache_frame_648687cbdc0829fd1cd245b3462f1c03 = NULL;
    }

    assertFrameObject(frame_648687cbdc0829fd1cd245b3462f1c03);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__14_handleIntArithmeticShiftRight(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_receiver = python_pars[0];
    PyObject *par_argument_list = python_pars[1];
    PyObject *var_SelfInteger = NULL;
    struct Nuitka_FrameObject *frame_3057e3644d41fbe420962d386f37984a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3057e3644d41fbe420962d386f37984a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3057e3644d41fbe420962d386f37984a)) {
        Py_XDECREF(cache_frame_3057e3644d41fbe420962d386f37984a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3057e3644d41fbe420962d386f37984a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3057e3644d41fbe420962d386f37984a = MAKE_FUNCTION_FRAME(tstate, codeobj_3057e3644d41fbe420962d386f37984a, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3057e3644d41fbe420962d386f37984a->m_type_description == NULL);
    frame_3057e3644d41fbe420962d386f37984a = cache_frame_3057e3644d41fbe420962d386f37984a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3057e3644d41fbe420962d386f37984a);
    assert(Py_REFCNT(frame_3057e3644d41fbe420962d386f37984a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[12];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[13];
        tmp_level_value_1 = mod_consts[2];
        frame_3057e3644d41fbe420962d386f37984a->m_frame.f_lineno = 71;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[14],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_SelfInteger == NULL);
        var_SelfInteger = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_receiver);
        tmp_args_element_value_1 = par_receiver;
        CHECK_OBJECT(par_argument_list);
        tmp_args_element_value_2 = par_argument_list;


        tmp_args_element_value_3 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__14_handleIntArithmeticShiftRight$$$function__1_lambda();

        CHECK_OBJECT(var_SelfInteger);
        tmp_args_element_value_4 = var_SelfInteger;
        frame_3057e3644d41fbe420962d386f37984a->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3057e3644d41fbe420962d386f37984a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3057e3644d41fbe420962d386f37984a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3057e3644d41fbe420962d386f37984a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3057e3644d41fbe420962d386f37984a,
        type_description_1,
        par_receiver,
        par_argument_list,
        var_SelfInteger
    );


    // Release cached frame if used for exception.
    if (frame_3057e3644d41fbe420962d386f37984a == cache_frame_3057e3644d41fbe420962d386f37984a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3057e3644d41fbe420962d386f37984a);
        cache_frame_3057e3644d41fbe420962d386f37984a = NULL;
    }

    assertFrameObject(frame_3057e3644d41fbe420962d386f37984a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_SelfInteger);
    Py_DECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__14_handleIntArithmeticShiftRight$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    struct Nuitka_FrameObject *frame_fb72683177c86f747337ffc7ecadc3a5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fb72683177c86f747337ffc7ecadc3a5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fb72683177c86f747337ffc7ecadc3a5)) {
        Py_XDECREF(cache_frame_fb72683177c86f747337ffc7ecadc3a5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fb72683177c86f747337ffc7ecadc3a5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fb72683177c86f747337ffc7ecadc3a5 = MAKE_FUNCTION_FRAME(tstate, codeobj_fb72683177c86f747337ffc7ecadc3a5, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fb72683177c86f747337ffc7ecadc3a5->m_type_description == NULL);
    frame_fb72683177c86f747337ffc7ecadc3a5 = cache_frame_fb72683177c86f747337ffc7ecadc3a5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fb72683177c86f747337ffc7ecadc3a5);
    assert(Py_REFCNT(frame_fb72683177c86f747337ffc7ecadc3a5) == 2);

    // Framed code:
    {
        PyObject *tmp_rshift_expr_left_1;
        PyObject *tmp_rshift_expr_right_1;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_rshift_expr_left_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_bitand_expr_left_1 = par_y;
        tmp_bitand_expr_right_1 = mod_consts[29];
        tmp_rshift_expr_right_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_rshift_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_OBJECT(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
        Py_DECREF(tmp_rshift_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fb72683177c86f747337ffc7ecadc3a5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fb72683177c86f747337ffc7ecadc3a5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fb72683177c86f747337ffc7ecadc3a5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fb72683177c86f747337ffc7ecadc3a5,
        type_description_1,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_fb72683177c86f747337ffc7ecadc3a5 == cache_frame_fb72683177c86f747337ffc7ecadc3a5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fb72683177c86f747337ffc7ecadc3a5);
        cache_frame_fb72683177c86f747337ffc7ecadc3a5 = NULL;
    }

    assertFrameObject(frame_fb72683177c86f747337ffc7ecadc3a5);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__15_handleIntLogicalShiftLeft(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_receiver = python_pars[0];
    PyObject *par_argument_list = python_pars[1];
    PyObject *var_SelfInteger = NULL;
    struct Nuitka_FrameObject *frame_723764ce92c4e96386daa5415276ce2a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_723764ce92c4e96386daa5415276ce2a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_723764ce92c4e96386daa5415276ce2a)) {
        Py_XDECREF(cache_frame_723764ce92c4e96386daa5415276ce2a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_723764ce92c4e96386daa5415276ce2a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_723764ce92c4e96386daa5415276ce2a = MAKE_FUNCTION_FRAME(tstate, codeobj_723764ce92c4e96386daa5415276ce2a, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_723764ce92c4e96386daa5415276ce2a->m_type_description == NULL);
    frame_723764ce92c4e96386daa5415276ce2a = cache_frame_723764ce92c4e96386daa5415276ce2a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_723764ce92c4e96386daa5415276ce2a);
    assert(Py_REFCNT(frame_723764ce92c4e96386daa5415276ce2a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[12];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[13];
        tmp_level_value_1 = mod_consts[2];
        frame_723764ce92c4e96386daa5415276ce2a->m_frame.f_lineno = 75;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[14],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_SelfInteger == NULL);
        var_SelfInteger = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_receiver);
        tmp_args_element_value_1 = par_receiver;
        CHECK_OBJECT(par_argument_list);
        tmp_args_element_value_2 = par_argument_list;


        tmp_args_element_value_3 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__15_handleIntLogicalShiftLeft$$$function__1_lambda();

        CHECK_OBJECT(var_SelfInteger);
        tmp_args_element_value_4 = var_SelfInteger;
        frame_723764ce92c4e96386daa5415276ce2a->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_723764ce92c4e96386daa5415276ce2a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_723764ce92c4e96386daa5415276ce2a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_723764ce92c4e96386daa5415276ce2a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_723764ce92c4e96386daa5415276ce2a,
        type_description_1,
        par_receiver,
        par_argument_list,
        var_SelfInteger
    );


    // Release cached frame if used for exception.
    if (frame_723764ce92c4e96386daa5415276ce2a == cache_frame_723764ce92c4e96386daa5415276ce2a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_723764ce92c4e96386daa5415276ce2a);
        cache_frame_723764ce92c4e96386daa5415276ce2a = NULL;
    }

    assertFrameObject(frame_723764ce92c4e96386daa5415276ce2a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_SelfInteger);
    Py_DECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__15_handleIntLogicalShiftLeft$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    struct Nuitka_FrameObject *frame_e5491edf1a739521a2decaf39fdb6af6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e5491edf1a739521a2decaf39fdb6af6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e5491edf1a739521a2decaf39fdb6af6)) {
        Py_XDECREF(cache_frame_e5491edf1a739521a2decaf39fdb6af6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e5491edf1a739521a2decaf39fdb6af6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e5491edf1a739521a2decaf39fdb6af6 = MAKE_FUNCTION_FRAME(tstate, codeobj_e5491edf1a739521a2decaf39fdb6af6, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e5491edf1a739521a2decaf39fdb6af6->m_type_description == NULL);
    frame_e5491edf1a739521a2decaf39fdb6af6 = cache_frame_e5491edf1a739521a2decaf39fdb6af6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e5491edf1a739521a2decaf39fdb6af6);
    assert(Py_REFCNT(frame_e5491edf1a739521a2decaf39fdb6af6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_lshift_expr_left_1;
        PyObject *tmp_lshift_expr_right_1;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_lshift_expr_left_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_bitand_expr_left_1 = par_y;
        tmp_bitand_expr_right_1 = mod_consts[29];
        tmp_lshift_expr_right_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_lshift_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_OBJECT(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
        Py_DECREF(tmp_lshift_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e5491edf1a739521a2decaf39fdb6af6->m_frame.f_lineno = 76;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e5491edf1a739521a2decaf39fdb6af6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e5491edf1a739521a2decaf39fdb6af6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e5491edf1a739521a2decaf39fdb6af6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e5491edf1a739521a2decaf39fdb6af6,
        type_description_1,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_e5491edf1a739521a2decaf39fdb6af6 == cache_frame_e5491edf1a739521a2decaf39fdb6af6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e5491edf1a739521a2decaf39fdb6af6);
        cache_frame_e5491edf1a739521a2decaf39fdb6af6 = NULL;
    }

    assertFrameObject(frame_e5491edf1a739521a2decaf39fdb6af6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__16_handleIntLogicalShiftRight(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_receiver = python_pars[0];
    PyObject *par_argument_list = python_pars[1];
    PyObject *var_SelfInteger = NULL;
    PyObject *var_logicalShiftRight = NULL;
    struct Nuitka_FrameObject *frame_323cfd750c324bf3fa7c4a999b7349e6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_323cfd750c324bf3fa7c4a999b7349e6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_323cfd750c324bf3fa7c4a999b7349e6)) {
        Py_XDECREF(cache_frame_323cfd750c324bf3fa7c4a999b7349e6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_323cfd750c324bf3fa7c4a999b7349e6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_323cfd750c324bf3fa7c4a999b7349e6 = MAKE_FUNCTION_FRAME(tstate, codeobj_323cfd750c324bf3fa7c4a999b7349e6, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_323cfd750c324bf3fa7c4a999b7349e6->m_type_description == NULL);
    frame_323cfd750c324bf3fa7c4a999b7349e6 = cache_frame_323cfd750c324bf3fa7c4a999b7349e6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_323cfd750c324bf3fa7c4a999b7349e6);
    assert(Py_REFCNT(frame_323cfd750c324bf3fa7c4a999b7349e6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[12];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[13];
        tmp_level_value_1 = mod_consts[2];
        frame_323cfd750c324bf3fa7c4a999b7349e6->m_frame.f_lineno = 79;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[14],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_SelfInteger == NULL);
        var_SelfInteger = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;


        tmp_assign_source_2 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__16_handleIntLogicalShiftRight$$$function__1_logicalShiftRight();

        assert(var_logicalShiftRight == NULL);
        var_logicalShiftRight = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_receiver);
        tmp_args_element_value_1 = par_receiver;
        CHECK_OBJECT(par_argument_list);
        tmp_args_element_value_2 = par_argument_list;
        CHECK_OBJECT(var_logicalShiftRight);
        tmp_args_element_value_3 = var_logicalShiftRight;
        CHECK_OBJECT(var_SelfInteger);
        tmp_args_element_value_4 = var_SelfInteger;
        frame_323cfd750c324bf3fa7c4a999b7349e6->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_323cfd750c324bf3fa7c4a999b7349e6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_323cfd750c324bf3fa7c4a999b7349e6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_323cfd750c324bf3fa7c4a999b7349e6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_323cfd750c324bf3fa7c4a999b7349e6,
        type_description_1,
        par_receiver,
        par_argument_list,
        var_SelfInteger,
        var_logicalShiftRight
    );


    // Release cached frame if used for exception.
    if (frame_323cfd750c324bf3fa7c4a999b7349e6 == cache_frame_323cfd750c324bf3fa7c4a999b7349e6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_323cfd750c324bf3fa7c4a999b7349e6);
        cache_frame_323cfd750c324bf3fa7c4a999b7349e6 = NULL;
    }

    assertFrameObject(frame_323cfd750c324bf3fa7c4a999b7349e6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_SelfInteger);
    Py_DECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    CHECK_OBJECT(var_logicalShiftRight);
    Py_DECREF(var_logicalShiftRight);
    var_logicalShiftRight = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    Py_XDECREF(var_logicalShiftRight);
    var_logicalShiftRight = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__16_handleIntLogicalShiftRight$$$function__1_logicalShiftRight(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    struct Nuitka_FrameObject *frame_4d23e582d9330312bbdaf70c75a219ec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4d23e582d9330312bbdaf70c75a219ec = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4d23e582d9330312bbdaf70c75a219ec)) {
        Py_XDECREF(cache_frame_4d23e582d9330312bbdaf70c75a219ec);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4d23e582d9330312bbdaf70c75a219ec == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4d23e582d9330312bbdaf70c75a219ec = MAKE_FUNCTION_FRAME(tstate, codeobj_4d23e582d9330312bbdaf70c75a219ec, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4d23e582d9330312bbdaf70c75a219ec->m_type_description == NULL);
    frame_4d23e582d9330312bbdaf70c75a219ec = cache_frame_4d23e582d9330312bbdaf70c75a219ec;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4d23e582d9330312bbdaf70c75a219ec);
    assert(Py_REFCNT(frame_4d23e582d9330312bbdaf70c75a219ec) == 2);

    // Framed code:
    {
        PyObject *tmp_rshift_expr_left_1;
        PyObject *tmp_rshift_expr_right_1;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_bitand_expr_left_2;
        PyObject *tmp_bitand_expr_right_2;
        CHECK_OBJECT(par_x);
        tmp_bitand_expr_left_1 = par_x;
        tmp_bitand_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_bitand_expr_right_1 == NULL)) {
            tmp_bitand_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_bitand_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_rshift_expr_left_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_rshift_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_y);
        tmp_bitand_expr_left_2 = par_y;
        tmp_bitand_expr_right_2 = mod_consts[29];
        tmp_rshift_expr_right_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
        if (tmp_rshift_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_rshift_expr_left_1);

            exception_lineno = 81;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_OBJECT(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
        Py_DECREF(tmp_rshift_expr_left_1);
        Py_DECREF(tmp_rshift_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4d23e582d9330312bbdaf70c75a219ec, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4d23e582d9330312bbdaf70c75a219ec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4d23e582d9330312bbdaf70c75a219ec, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4d23e582d9330312bbdaf70c75a219ec,
        type_description_1,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_4d23e582d9330312bbdaf70c75a219ec == cache_frame_4d23e582d9330312bbdaf70c75a219ec) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4d23e582d9330312bbdaf70c75a219ec);
        cache_frame_4d23e582d9330312bbdaf70c75a219ec = NULL;
    }

    assertFrameObject(frame_4d23e582d9330312bbdaf70c75a219ec);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__17_handleIntOr(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_receiver = python_pars[0];
    PyObject *par_argument_list = python_pars[1];
    PyObject *var_SelfInteger = NULL;
    struct Nuitka_FrameObject *frame_bb84ed1da15700ba7004bad55fccd97e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bb84ed1da15700ba7004bad55fccd97e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bb84ed1da15700ba7004bad55fccd97e)) {
        Py_XDECREF(cache_frame_bb84ed1da15700ba7004bad55fccd97e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bb84ed1da15700ba7004bad55fccd97e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bb84ed1da15700ba7004bad55fccd97e = MAKE_FUNCTION_FRAME(tstate, codeobj_bb84ed1da15700ba7004bad55fccd97e, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bb84ed1da15700ba7004bad55fccd97e->m_type_description == NULL);
    frame_bb84ed1da15700ba7004bad55fccd97e = cache_frame_bb84ed1da15700ba7004bad55fccd97e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bb84ed1da15700ba7004bad55fccd97e);
    assert(Py_REFCNT(frame_bb84ed1da15700ba7004bad55fccd97e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[12];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[13];
        tmp_level_value_1 = mod_consts[2];
        frame_bb84ed1da15700ba7004bad55fccd97e->m_frame.f_lineno = 86;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[14],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_SelfInteger == NULL);
        var_SelfInteger = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_receiver);
        tmp_args_element_value_1 = par_receiver;
        CHECK_OBJECT(par_argument_list);
        tmp_args_element_value_2 = par_argument_list;


        tmp_args_element_value_3 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__17_handleIntOr$$$function__1_lambda();

        CHECK_OBJECT(var_SelfInteger);
        tmp_args_element_value_4 = var_SelfInteger;
        frame_bb84ed1da15700ba7004bad55fccd97e->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bb84ed1da15700ba7004bad55fccd97e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bb84ed1da15700ba7004bad55fccd97e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bb84ed1da15700ba7004bad55fccd97e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bb84ed1da15700ba7004bad55fccd97e,
        type_description_1,
        par_receiver,
        par_argument_list,
        var_SelfInteger
    );


    // Release cached frame if used for exception.
    if (frame_bb84ed1da15700ba7004bad55fccd97e == cache_frame_bb84ed1da15700ba7004bad55fccd97e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bb84ed1da15700ba7004bad55fccd97e);
        cache_frame_bb84ed1da15700ba7004bad55fccd97e = NULL;
    }

    assertFrameObject(frame_bb84ed1da15700ba7004bad55fccd97e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_SelfInteger);
    Py_DECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__17_handleIntOr$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    struct Nuitka_FrameObject *frame_6b9388341c9350072b627c2a8a04138c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6b9388341c9350072b627c2a8a04138c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6b9388341c9350072b627c2a8a04138c)) {
        Py_XDECREF(cache_frame_6b9388341c9350072b627c2a8a04138c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6b9388341c9350072b627c2a8a04138c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6b9388341c9350072b627c2a8a04138c = MAKE_FUNCTION_FRAME(tstate, codeobj_6b9388341c9350072b627c2a8a04138c, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6b9388341c9350072b627c2a8a04138c->m_type_description == NULL);
    frame_6b9388341c9350072b627c2a8a04138c = cache_frame_6b9388341c9350072b627c2a8a04138c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6b9388341c9350072b627c2a8a04138c);
    assert(Py_REFCNT(frame_6b9388341c9350072b627c2a8a04138c) == 2);

    // Framed code:
    {
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_bitor_expr_left_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_bitor_expr_right_1 = par_y;
        tmp_return_value = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6b9388341c9350072b627c2a8a04138c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6b9388341c9350072b627c2a8a04138c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6b9388341c9350072b627c2a8a04138c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6b9388341c9350072b627c2a8a04138c,
        type_description_1,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_6b9388341c9350072b627c2a8a04138c == cache_frame_6b9388341c9350072b627c2a8a04138c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6b9388341c9350072b627c2a8a04138c);
        cache_frame_6b9388341c9350072b627c2a8a04138c = NULL;
    }

    assertFrameObject(frame_6b9388341c9350072b627c2a8a04138c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__18_handleIntAnd(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_receiver = python_pars[0];
    PyObject *par_argument_list = python_pars[1];
    PyObject *var_SelfInteger = NULL;
    struct Nuitka_FrameObject *frame_d8b5578d6cf5ebc4fd4ac49f536d1c5e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d8b5578d6cf5ebc4fd4ac49f536d1c5e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d8b5578d6cf5ebc4fd4ac49f536d1c5e)) {
        Py_XDECREF(cache_frame_d8b5578d6cf5ebc4fd4ac49f536d1c5e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d8b5578d6cf5ebc4fd4ac49f536d1c5e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d8b5578d6cf5ebc4fd4ac49f536d1c5e = MAKE_FUNCTION_FRAME(tstate, codeobj_d8b5578d6cf5ebc4fd4ac49f536d1c5e, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d8b5578d6cf5ebc4fd4ac49f536d1c5e->m_type_description == NULL);
    frame_d8b5578d6cf5ebc4fd4ac49f536d1c5e = cache_frame_d8b5578d6cf5ebc4fd4ac49f536d1c5e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d8b5578d6cf5ebc4fd4ac49f536d1c5e);
    assert(Py_REFCNT(frame_d8b5578d6cf5ebc4fd4ac49f536d1c5e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[12];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[13];
        tmp_level_value_1 = mod_consts[2];
        frame_d8b5578d6cf5ebc4fd4ac49f536d1c5e->m_frame.f_lineno = 90;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[14],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_SelfInteger == NULL);
        var_SelfInteger = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_receiver);
        tmp_args_element_value_1 = par_receiver;
        CHECK_OBJECT(par_argument_list);
        tmp_args_element_value_2 = par_argument_list;


        tmp_args_element_value_3 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__18_handleIntAnd$$$function__1_lambda();

        CHECK_OBJECT(var_SelfInteger);
        tmp_args_element_value_4 = var_SelfInteger;
        frame_d8b5578d6cf5ebc4fd4ac49f536d1c5e->m_frame.f_lineno = 91;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d8b5578d6cf5ebc4fd4ac49f536d1c5e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d8b5578d6cf5ebc4fd4ac49f536d1c5e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d8b5578d6cf5ebc4fd4ac49f536d1c5e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d8b5578d6cf5ebc4fd4ac49f536d1c5e,
        type_description_1,
        par_receiver,
        par_argument_list,
        var_SelfInteger
    );


    // Release cached frame if used for exception.
    if (frame_d8b5578d6cf5ebc4fd4ac49f536d1c5e == cache_frame_d8b5578d6cf5ebc4fd4ac49f536d1c5e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d8b5578d6cf5ebc4fd4ac49f536d1c5e);
        cache_frame_d8b5578d6cf5ebc4fd4ac49f536d1c5e = NULL;
    }

    assertFrameObject(frame_d8b5578d6cf5ebc4fd4ac49f536d1c5e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_SelfInteger);
    Py_DECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__18_handleIntAnd$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    struct Nuitka_FrameObject *frame_2c686af224d459d3bf9e9abf907334ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2c686af224d459d3bf9e9abf907334ae = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2c686af224d459d3bf9e9abf907334ae)) {
        Py_XDECREF(cache_frame_2c686af224d459d3bf9e9abf907334ae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2c686af224d459d3bf9e9abf907334ae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2c686af224d459d3bf9e9abf907334ae = MAKE_FUNCTION_FRAME(tstate, codeobj_2c686af224d459d3bf9e9abf907334ae, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2c686af224d459d3bf9e9abf907334ae->m_type_description == NULL);
    frame_2c686af224d459d3bf9e9abf907334ae = cache_frame_2c686af224d459d3bf9e9abf907334ae;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2c686af224d459d3bf9e9abf907334ae);
    assert(Py_REFCNT(frame_2c686af224d459d3bf9e9abf907334ae) == 2);

    // Framed code:
    {
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_bitand_expr_left_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_bitand_expr_right_1 = par_y;
        tmp_return_value = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2c686af224d459d3bf9e9abf907334ae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2c686af224d459d3bf9e9abf907334ae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2c686af224d459d3bf9e9abf907334ae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2c686af224d459d3bf9e9abf907334ae,
        type_description_1,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_2c686af224d459d3bf9e9abf907334ae == cache_frame_2c686af224d459d3bf9e9abf907334ae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2c686af224d459d3bf9e9abf907334ae);
        cache_frame_2c686af224d459d3bf9e9abf907334ae = NULL;
    }

    assertFrameObject(frame_2c686af224d459d3bf9e9abf907334ae);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__19_handleIntXor(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_receiver = python_pars[0];
    PyObject *par_argument_list = python_pars[1];
    PyObject *var_SelfInteger = NULL;
    struct Nuitka_FrameObject *frame_a6833cd103e7732cd6a847485d4025ba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a6833cd103e7732cd6a847485d4025ba = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a6833cd103e7732cd6a847485d4025ba)) {
        Py_XDECREF(cache_frame_a6833cd103e7732cd6a847485d4025ba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a6833cd103e7732cd6a847485d4025ba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a6833cd103e7732cd6a847485d4025ba = MAKE_FUNCTION_FRAME(tstate, codeobj_a6833cd103e7732cd6a847485d4025ba, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a6833cd103e7732cd6a847485d4025ba->m_type_description == NULL);
    frame_a6833cd103e7732cd6a847485d4025ba = cache_frame_a6833cd103e7732cd6a847485d4025ba;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a6833cd103e7732cd6a847485d4025ba);
    assert(Py_REFCNT(frame_a6833cd103e7732cd6a847485d4025ba) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[12];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[13];
        tmp_level_value_1 = mod_consts[2];
        frame_a6833cd103e7732cd6a847485d4025ba->m_frame.f_lineno = 94;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[14],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_SelfInteger == NULL);
        var_SelfInteger = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_receiver);
        tmp_args_element_value_1 = par_receiver;
        CHECK_OBJECT(par_argument_list);
        tmp_args_element_value_2 = par_argument_list;


        tmp_args_element_value_3 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__19_handleIntXor$$$function__1_lambda();

        CHECK_OBJECT(var_SelfInteger);
        tmp_args_element_value_4 = var_SelfInteger;
        frame_a6833cd103e7732cd6a847485d4025ba->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a6833cd103e7732cd6a847485d4025ba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a6833cd103e7732cd6a847485d4025ba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a6833cd103e7732cd6a847485d4025ba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a6833cd103e7732cd6a847485d4025ba,
        type_description_1,
        par_receiver,
        par_argument_list,
        var_SelfInteger
    );


    // Release cached frame if used for exception.
    if (frame_a6833cd103e7732cd6a847485d4025ba == cache_frame_a6833cd103e7732cd6a847485d4025ba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a6833cd103e7732cd6a847485d4025ba);
        cache_frame_a6833cd103e7732cd6a847485d4025ba = NULL;
    }

    assertFrameObject(frame_a6833cd103e7732cd6a847485d4025ba);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_SelfInteger);
    Py_DECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__19_handleIntXor$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    struct Nuitka_FrameObject *frame_920224041ba9b9e89897a08af8438337;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_920224041ba9b9e89897a08af8438337 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_920224041ba9b9e89897a08af8438337)) {
        Py_XDECREF(cache_frame_920224041ba9b9e89897a08af8438337);

#if _DEBUG_REFCOUNTS
        if (cache_frame_920224041ba9b9e89897a08af8438337 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_920224041ba9b9e89897a08af8438337 = MAKE_FUNCTION_FRAME(tstate, codeobj_920224041ba9b9e89897a08af8438337, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_920224041ba9b9e89897a08af8438337->m_type_description == NULL);
    frame_920224041ba9b9e89897a08af8438337 = cache_frame_920224041ba9b9e89897a08af8438337;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_920224041ba9b9e89897a08af8438337);
    assert(Py_REFCNT(frame_920224041ba9b9e89897a08af8438337) == 2);

    // Framed code:
    {
        PyObject *tmp_bitxor_expr_left_1;
        PyObject *tmp_bitxor_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_bitxor_expr_left_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_bitxor_expr_right_1 = par_y;
        tmp_return_value = BINARY_OPERATION_BITXOR_OBJECT_OBJECT_OBJECT(tmp_bitxor_expr_left_1, tmp_bitxor_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_920224041ba9b9e89897a08af8438337, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_920224041ba9b9e89897a08af8438337->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_920224041ba9b9e89897a08af8438337, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_920224041ba9b9e89897a08af8438337,
        type_description_1,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_920224041ba9b9e89897a08af8438337 == cache_frame_920224041ba9b9e89897a08af8438337) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_920224041ba9b9e89897a08af8438337);
        cache_frame_920224041ba9b9e89897a08af8438337 = NULL;
    }

    assertFrameObject(frame_920224041ba9b9e89897a08af8438337);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__20_handleIntOperator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_receiver = python_pars[0];
    PyObject *par_argument = python_pars[1];
    PyObject *par_operator = python_pars[2];
    PyObject *par_object_type = python_pars[3];
    PyObject *var_int1 = NULL;
    PyObject *var_int2 = NULL;
    PyObject *var_integer_result = NULL;
    struct Nuitka_FrameObject *frame_4f840c6e7cf5725993e458aa43f7da49;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4f840c6e7cf5725993e458aa43f7da49 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4f840c6e7cf5725993e458aa43f7da49)) {
        Py_XDECREF(cache_frame_4f840c6e7cf5725993e458aa43f7da49);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4f840c6e7cf5725993e458aa43f7da49 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4f840c6e7cf5725993e458aa43f7da49 = MAKE_FUNCTION_FRAME(tstate, codeobj_4f840c6e7cf5725993e458aa43f7da49, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4f840c6e7cf5725993e458aa43f7da49->m_type_description == NULL);
    frame_4f840c6e7cf5725993e458aa43f7da49 = cache_frame_4f840c6e7cf5725993e458aa43f7da49;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4f840c6e7cf5725993e458aa43f7da49);
    assert(Py_REFCNT(frame_4f840c6e7cf5725993e458aa43f7da49) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_receiver);
        tmp_called_instance_1 = par_receiver;
        frame_4f840c6e7cf5725993e458aa43f7da49->m_frame.f_lineno = 98;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[37]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_int1 == NULL);
        var_int1 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_argument);
        tmp_called_instance_2 = par_argument;
        frame_4f840c6e7cf5725993e458aa43f7da49->m_frame.f_lineno = 99;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[37]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_int2 == NULL);
        var_int2 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_operator);
        tmp_called_value_1 = par_operator;
        CHECK_OBJECT(var_int1);
        tmp_args_element_value_1 = var_int1;
        CHECK_OBJECT(var_int2);
        tmp_args_element_value_2 = var_int2;
        frame_4f840c6e7cf5725993e458aa43f7da49->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_integer_result == NULL);
        var_integer_result = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_object_type);
        tmp_called_value_2 = par_object_type;
        CHECK_OBJECT(var_integer_result);
        tmp_args_element_value_3 = var_integer_result;
        frame_4f840c6e7cf5725993e458aa43f7da49->m_frame.f_lineno = 102;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4f840c6e7cf5725993e458aa43f7da49, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4f840c6e7cf5725993e458aa43f7da49->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4f840c6e7cf5725993e458aa43f7da49, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4f840c6e7cf5725993e458aa43f7da49,
        type_description_1,
        par_receiver,
        par_argument,
        par_operator,
        par_object_type,
        var_int1,
        var_int2,
        var_integer_result
    );


    // Release cached frame if used for exception.
    if (frame_4f840c6e7cf5725993e458aa43f7da49 == cache_frame_4f840c6e7cf5725993e458aa43f7da49) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4f840c6e7cf5725993e458aa43f7da49);
        cache_frame_4f840c6e7cf5725993e458aa43f7da49 = NULL;
    }

    assertFrameObject(frame_4f840c6e7cf5725993e458aa43f7da49);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_int1);
    Py_DECREF(var_int1);
    var_int1 = NULL;
    CHECK_OBJECT(var_int2);
    Py_DECREF(var_int2);
    var_int2 = NULL;
    CHECK_OBJECT(var_integer_result);
    Py_DECREF(var_integer_result);
    var_integer_result = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_int1);
    var_int1 = NULL;
    Py_XDECREF(var_int2);
    var_int2 = NULL;
    Py_XDECREF(var_integer_result);
    var_integer_result = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument);
    Py_DECREF(par_argument);
    CHECK_OBJECT(par_operator);
    Py_DECREF(par_operator);
    CHECK_OBJECT(par_object_type);
    Py_DECREF(par_object_type);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument);
    Py_DECREF(par_argument);
    CHECK_OBJECT(par_operator);
    Py_DECREF(par_operator);
    CHECK_OBJECT(par_object_type);
    Py_DECREF(par_object_type);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__21_handleIntIfFail(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_receiver = python_pars[0];
    PyObject *par_argument_list = python_pars[1];
    PyObject *par_method = python_pars[2];
    PyObject *par_primitive_name = python_pars[3];
    PyObject *var_SelfException = NULL;
    PyObject *var_SelfInteger = NULL;
    PyObject *var_SelfString = NULL;
    PyObject *var_SelfObject = NULL;
    PyObject *var_Messages = NULL;
    PyObject *var_argument = NULL;
    PyObject *var_if_fail = NULL;
    struct Nuitka_FrameObject *frame_4feb14758cd11d65f93a6178f55ab66b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4feb14758cd11d65f93a6178f55ab66b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4feb14758cd11d65f93a6178f55ab66b)) {
        Py_XDECREF(cache_frame_4feb14758cd11d65f93a6178f55ab66b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4feb14758cd11d65f93a6178f55ab66b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4feb14758cd11d65f93a6178f55ab66b = MAKE_FUNCTION_FRAME(tstate, codeobj_4feb14758cd11d65f93a6178f55ab66b, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4feb14758cd11d65f93a6178f55ab66b->m_type_description == NULL);
    frame_4feb14758cd11d65f93a6178f55ab66b = cache_frame_4feb14758cd11d65f93a6178f55ab66b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4feb14758cd11d65f93a6178f55ab66b);
    assert(Py_REFCNT(frame_4feb14758cd11d65f93a6178f55ab66b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[38];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[39];
        tmp_level_value_1 = mod_consts[2];
        frame_4feb14758cd11d65f93a6178f55ab66b->m_frame.f_lineno = 105;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[40],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[40]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_SelfException == NULL);
        var_SelfException = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[12];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[13];
        tmp_level_value_2 = mod_consts[2];
        frame_4feb14758cd11d65f93a6178f55ab66b->m_frame.f_lineno = 106;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[14],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_SelfInteger == NULL);
        var_SelfInteger = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[41];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[42];
        tmp_level_value_3 = mod_consts[2];
        frame_4feb14758cd11d65f93a6178f55ab66b->m_frame.f_lineno = 107;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[43],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[43]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_SelfString == NULL);
        var_SelfString = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[44];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[45];
        tmp_level_value_4 = mod_consts[2];
        frame_4feb14758cd11d65f93a6178f55ab66b->m_frame.f_lineno = 108;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[46],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[46]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_SelfObject == NULL);
        var_SelfObject = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[47];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[48];
        tmp_level_value_5 = mod_consts[2];
        frame_4feb14758cd11d65f93a6178f55ab66b->m_frame.f_lineno = 109;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[47],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[47]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_Messages == NULL);
        var_Messages = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_argument_list);
        tmp_expression_value_1 = par_argument_list;
        tmp_subscript_value_1 = mod_consts[2];
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_argument == NULL);
        var_argument = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_None;
        assert(var_if_fail == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_if_fail = tmp_assign_source_7;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_argument_list);
        tmp_len_arg_1 = par_argument_list;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 1;
        tmp_condition_result_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_argument_list);
        tmp_expression_value_2 = par_argument_list;
        tmp_subscript_value_2 = mod_consts[49];
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 1);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_if_fail;
            assert(old != NULL);
            var_if_fail = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_type_arg_2;
        CHECK_OBJECT(par_receiver);
        tmp_type_arg_1 = par_receiver;
        tmp_cmp_expr_left_2 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_cmp_expr_left_2 == NULL));
        CHECK_OBJECT(var_SelfInteger);
        tmp_cmp_expr_right_2 = var_SelfInteger;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_argument);
        tmp_type_arg_2 = var_argument;
        tmp_cmp_expr_left_3 = BUILTIN_TYPE1(tmp_type_arg_2);
        assert(!(tmp_cmp_expr_left_3 == NULL));
        CHECK_OBJECT(var_SelfInteger);
        tmp_cmp_expr_right_3 = var_SelfInteger;
        tmp_or_right_value_1 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_3);
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_type_arg_3;
        CHECK_OBJECT(var_if_fail);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_if_fail);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_if_fail);
        tmp_type_arg_3 = var_if_fail;
        tmp_cmp_expr_left_4 = BUILTIN_TYPE1(tmp_type_arg_3);
        assert(!(tmp_cmp_expr_left_4 == NULL));
        CHECK_OBJECT(var_SelfObject);
        tmp_cmp_expr_right_4 = var_SelfObject;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_cmp_expr_left_4);
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(var_if_fail);
        tmp_expression_value_3 = var_if_fail;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[50]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[51];
        CHECK_OBJECT(var_SelfString);
        tmp_called_value_2 = var_SelfString;
        frame_4feb14758cd11d65f93a6178f55ab66b->m_frame.f_lineno = 118;
        tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[52]);

        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 118;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_3;
            PyList_SET_ITEM(tmp_args_element_value_2, 0, tmp_list_element_1);
            CHECK_OBJECT(var_SelfString);
            tmp_called_value_3 = var_SelfString;
            CHECK_OBJECT(par_primitive_name);
            tmp_args_element_value_3 = par_primitive_name;
            frame_4feb14758cd11d65f93a6178f55ab66b->m_frame.f_lineno = 118;
            tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_1 = "ooooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_4feb14758cd11d65f93a6178f55ab66b->m_frame.f_lineno = 118;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(var_SelfException);
        tmp_called_value_4 = var_SelfException;
        CHECK_OBJECT(var_Messages);
        tmp_expression_value_6 = var_Messages;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[53]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[54]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[55]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_primitive_name);
        tmp_args_element_value_5 = par_primitive_name;
        CHECK_OBJECT(par_receiver);
        tmp_args_element_value_6 = par_receiver;
        CHECK_OBJECT(var_argument);
        tmp_args_element_value_7 = var_argument;
        frame_4feb14758cd11d65f93a6178f55ab66b->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4feb14758cd11d65f93a6178f55ab66b->m_frame.f_lineno = 120;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 120;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_3:;
    branch_no_2:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(par_method);
        tmp_called_value_6 = par_method;
        CHECK_OBJECT(par_receiver);
        tmp_args_element_value_8 = par_receiver;
        CHECK_OBJECT(var_argument);
        tmp_args_element_value_9 = var_argument;
        frame_4feb14758cd11d65f93a6178f55ab66b->m_frame.f_lineno = 122;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4feb14758cd11d65f93a6178f55ab66b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4feb14758cd11d65f93a6178f55ab66b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4feb14758cd11d65f93a6178f55ab66b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4feb14758cd11d65f93a6178f55ab66b,
        type_description_1,
        par_receiver,
        par_argument_list,
        par_method,
        par_primitive_name,
        var_SelfException,
        var_SelfInteger,
        var_SelfString,
        var_SelfObject,
        var_Messages,
        var_argument,
        var_if_fail
    );


    // Release cached frame if used for exception.
    if (frame_4feb14758cd11d65f93a6178f55ab66b == cache_frame_4feb14758cd11d65f93a6178f55ab66b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4feb14758cd11d65f93a6178f55ab66b);
        cache_frame_4feb14758cd11d65f93a6178f55ab66b = NULL;
    }

    assertFrameObject(frame_4feb14758cd11d65f93a6178f55ab66b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_SelfException);
    Py_DECREF(var_SelfException);
    var_SelfException = NULL;
    CHECK_OBJECT(var_SelfInteger);
    Py_DECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    CHECK_OBJECT(var_SelfString);
    Py_DECREF(var_SelfString);
    var_SelfString = NULL;
    CHECK_OBJECT(var_SelfObject);
    Py_DECREF(var_SelfObject);
    var_SelfObject = NULL;
    CHECK_OBJECT(var_Messages);
    Py_DECREF(var_Messages);
    var_Messages = NULL;
    Py_XDECREF(var_argument);
    var_argument = NULL;
    CHECK_OBJECT(var_if_fail);
    Py_DECREF(var_if_fail);
    var_if_fail = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_SelfException);
    var_SelfException = NULL;
    Py_XDECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    Py_XDECREF(var_SelfString);
    var_SelfString = NULL;
    Py_XDECREF(var_SelfObject);
    var_SelfObject = NULL;
    Py_XDECREF(var_Messages);
    var_Messages = NULL;
    Py_XDECREF(var_argument);
    var_argument = NULL;
    Py_XDECREF(var_if_fail);
    var_if_fail = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_primitive_name);
    Py_DECREF(par_primitive_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_primitive_name);
    Py_DECREF(par_primitive_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__22_handleIntAsFloat(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_receiver = python_pars[0];
    PyObject *par_argument_list = python_pars[1];
    PyObject *var_SelfException = NULL;
    PyObject *var_SelfInteger = NULL;
    PyObject *var_SelfFloat = NULL;
    PyObject *var_Messages = NULL;
    struct Nuitka_FrameObject *frame_739080655681ab1dc9312701397440cf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_739080655681ab1dc9312701397440cf = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_739080655681ab1dc9312701397440cf)) {
        Py_XDECREF(cache_frame_739080655681ab1dc9312701397440cf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_739080655681ab1dc9312701397440cf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_739080655681ab1dc9312701397440cf = MAKE_FUNCTION_FRAME(tstate, codeobj_739080655681ab1dc9312701397440cf, module_interpreting$primitive_methods$SmallIntPrimitives, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_739080655681ab1dc9312701397440cf->m_type_description == NULL);
    frame_739080655681ab1dc9312701397440cf = cache_frame_739080655681ab1dc9312701397440cf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_739080655681ab1dc9312701397440cf);
    assert(Py_REFCNT(frame_739080655681ab1dc9312701397440cf) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[38];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[39];
        tmp_level_value_1 = mod_consts[2];
        frame_739080655681ab1dc9312701397440cf->m_frame.f_lineno = 125;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[40],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[40]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_SelfException == NULL);
        var_SelfException = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[12];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[13];
        tmp_level_value_2 = mod_consts[2];
        frame_739080655681ab1dc9312701397440cf->m_frame.f_lineno = 126;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[14],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_SelfInteger == NULL);
        var_SelfInteger = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[56];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[57];
        tmp_level_value_3 = mod_consts[2];
        frame_739080655681ab1dc9312701397440cf->m_frame.f_lineno = 127;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[58],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[58]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_SelfFloat == NULL);
        var_SelfFloat = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[47];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[48];
        tmp_level_value_4 = mod_consts[2];
        frame_739080655681ab1dc9312701397440cf->m_frame.f_lineno = 128;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                mod_consts[47],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[47]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_Messages == NULL);
        var_Messages = tmp_assign_source_4;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_receiver);
        tmp_type_arg_1 = par_receiver;
        tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_cmp_expr_left_1 == NULL));
        CHECK_OBJECT(var_SelfInteger);
        tmp_cmp_expr_right_1 = var_SelfInteger;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_SelfException);
        tmp_called_value_1 = var_SelfException;
        CHECK_OBJECT(var_Messages);
        tmp_expression_value_3 = var_Messages;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[59]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[54]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[55]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_739080655681ab1dc9312701397440cf->m_frame.f_lineno = 131;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[60]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_739080655681ab1dc9312701397440cf->m_frame.f_lineno = 131;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 131;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_SelfFloat);
        tmp_called_value_3 = var_SelfFloat;
        CHECK_OBJECT(par_receiver);
        tmp_expression_value_4 = par_receiver;
        tmp_float_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[54]);
        if (tmp_float_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = TO_FLOAT(tmp_float_arg_1);
        Py_DECREF(tmp_float_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_739080655681ab1dc9312701397440cf->m_frame.f_lineno = 132;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_739080655681ab1dc9312701397440cf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_739080655681ab1dc9312701397440cf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_739080655681ab1dc9312701397440cf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_739080655681ab1dc9312701397440cf,
        type_description_1,
        par_receiver,
        par_argument_list,
        var_SelfException,
        var_SelfInteger,
        var_SelfFloat,
        var_Messages
    );


    // Release cached frame if used for exception.
    if (frame_739080655681ab1dc9312701397440cf == cache_frame_739080655681ab1dc9312701397440cf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_739080655681ab1dc9312701397440cf);
        cache_frame_739080655681ab1dc9312701397440cf = NULL;
    }

    assertFrameObject(frame_739080655681ab1dc9312701397440cf);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_SelfException);
    Py_DECREF(var_SelfException);
    var_SelfException = NULL;
    CHECK_OBJECT(var_SelfInteger);
    Py_DECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    CHECK_OBJECT(var_SelfFloat);
    Py_DECREF(var_SelfFloat);
    var_SelfFloat = NULL;
    CHECK_OBJECT(var_Messages);
    Py_DECREF(var_Messages);
    var_Messages = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_SelfException);
    var_SelfException = NULL;
    Py_XDECREF(var_SelfInteger);
    var_SelfInteger = NULL;
    Py_XDECREF(var_SelfFloat);
    var_SelfFloat = NULL;
    Py_XDECREF(var_Messages);
    var_Messages = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_receiver);
    Py_DECREF(par_receiver);
    CHECK_OBJECT(par_argument_list);
    Py_DECREF(par_argument_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__10_handleIntDiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__10_handleIntDiv,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4fee70e6fad91aab4935b01bab785c35,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__10_handleIntDiv$$$function__1_div(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__10_handleIntDiv$$$function__1_div,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[20],
#endif
        codeobj_996abf1c13875851afca0554f55d7539,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__11_handleIntMod() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__11_handleIntMod,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3259be0bd00d987cc9c933c841e6ed82,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__11_handleIntMod$$$function__1_mod() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__11_handleIntMod$$$function__1_mod,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[24],
#endif
        codeobj_9cdb7b3e5e457e7dbbdea5e5cc588ba3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__12_pythonIntTo30BitSigned() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__12_pythonIntTo30BitSigned,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c471f85477bad927f5c0b5b449564122,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__13_handleIntArithmeticShiftLeft() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__13_handleIntArithmeticShiftLeft,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3ef5a078061dcb830719edde001cc6df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__13_handleIntArithmeticShiftLeft$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__13_handleIntArithmeticShiftLeft$$$function__1_lambda,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[27],
#endif
        codeobj_648687cbdc0829fd1cd245b3462f1c03,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__14_handleIntArithmeticShiftRight() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__14_handleIntArithmeticShiftRight,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3057e3644d41fbe420962d386f37984a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__14_handleIntArithmeticShiftRight$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__14_handleIntArithmeticShiftRight$$$function__1_lambda,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[30],
#endif
        codeobj_fb72683177c86f747337ffc7ecadc3a5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__15_handleIntLogicalShiftLeft() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__15_handleIntLogicalShiftLeft,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_723764ce92c4e96386daa5415276ce2a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__15_handleIntLogicalShiftLeft$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__15_handleIntLogicalShiftLeft$$$function__1_lambda,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[31],
#endif
        codeobj_e5491edf1a739521a2decaf39fdb6af6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__16_handleIntLogicalShiftRight() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__16_handleIntLogicalShiftRight,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_323cfd750c324bf3fa7c4a999b7349e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__16_handleIntLogicalShiftRight$$$function__1_logicalShiftRight() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__16_handleIntLogicalShiftRight$$$function__1_logicalShiftRight,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[33],
#endif
        codeobj_4d23e582d9330312bbdaf70c75a219ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__17_handleIntOr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__17_handleIntOr,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bb84ed1da15700ba7004bad55fccd97e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__17_handleIntOr$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__17_handleIntOr$$$function__1_lambda,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[34],
#endif
        codeobj_6b9388341c9350072b627c2a8a04138c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__18_handleIntAnd() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__18_handleIntAnd,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d8b5578d6cf5ebc4fd4ac49f536d1c5e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__18_handleIntAnd$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__18_handleIntAnd$$$function__1_lambda,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[35],
#endif
        codeobj_2c686af224d459d3bf9e9abf907334ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__19_handleIntXor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__19_handleIntXor,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a6833cd103e7732cd6a847485d4025ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__19_handleIntXor$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__19_handleIntXor$$$function__1_lambda,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[36],
#endif
        codeobj_920224041ba9b9e89897a08af8438337,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__1_handleIntNE() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__1_handleIntNE,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7e0d6fd1b28fab0ffbf8e558c17ebd9c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__1_handleIntNE$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__1_handleIntNE$$$function__1_lambda,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[6],
#endif
        codeobj_f53292d69af8b248ee7ebb6950a0f19f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__20_handleIntOperator() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__20_handleIntOperator,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4f840c6e7cf5725993e458aa43f7da49,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__21_handleIntIfFail() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__21_handleIntIfFail,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4feb14758cd11d65f93a6178f55ab66b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__22_handleIntAsFloat() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__22_handleIntAsFloat,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_739080655681ab1dc9312701397440cf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__2_handleIntLT() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__2_handleIntLT,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4f958168339a0df62354f1e4352dd5fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__2_handleIntLT$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__2_handleIntLT$$$function__1_lambda,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[7],
#endif
        codeobj_904437bca160e104a298205f033bc3b8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__3_handleIntLE() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__3_handleIntLE,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_26fb615d6f516637daa00bf7e423f3f7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__3_handleIntLE$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__3_handleIntLE$$$function__1_lambda,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[8],
#endif
        codeobj_3f7ffdf79fce059d77fd7b07d03c904f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__4_handleIntEQ() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__4_handleIntEQ,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1d833c27d4cae1c5ee9dbcbb01fa27e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__4_handleIntEQ$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__4_handleIntEQ$$$function__1_lambda,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[9],
#endif
        codeobj_5f42dee2c66d35e22b88c19adb121c7d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__5_handleIntGT() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__5_handleIntGT,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_216b4d5517e8cf635820b818779a9f7d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__5_handleIntGT$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__5_handleIntGT$$$function__1_lambda,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[10],
#endif
        codeobj_247d37d2de6121479479624952a322b8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__6_handleIntGE() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__6_handleIntGE,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_411fe0e8b9e0be4180f2fe90bb6f211c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__6_handleIntGE$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__6_handleIntGE$$$function__1_lambda,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[11],
#endif
        codeobj_b7ac9629989602d30c43b9a811248e86,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__7_handleIntAdd() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__7_handleIntAdd,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aa5249e20417f8d6f92f6a4e509b46f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__7_handleIntAdd$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__7_handleIntAdd$$$function__1_lambda,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[15],
#endif
        codeobj_572fcb5eafff556a5fb53d9aa73083b9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__8_handleIntSub() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__8_handleIntSub,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7f6ee7b859edc4a758ea8243e5cbd240,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__8_handleIntSub$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__8_handleIntSub$$$function__1_lambda,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[16],
#endif
        codeobj_96cae2ae7ab3d3364ca9b832210ff9ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__9_handleIntMul() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__9_handleIntMul,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_73a5edb400150c87e39b837d9874f096,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__9_handleIntMul$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__9_handleIntMul$$$function__1_lambda,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[17],
#endif
        codeobj_8a6ddd3fc2a641f1711f9c55c186af38,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_interpreting$primitive_methods$SmallIntPrimitives,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_interpreting$primitive_methods$SmallIntPrimitives[] = {
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__1_handleIntNE$$$function__1_lambda,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__2_handleIntLT$$$function__1_lambda,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__3_handleIntLE$$$function__1_lambda,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__4_handleIntEQ$$$function__1_lambda,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__5_handleIntGT$$$function__1_lambda,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__6_handleIntGE$$$function__1_lambda,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__7_handleIntAdd$$$function__1_lambda,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__8_handleIntSub$$$function__1_lambda,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__9_handleIntMul$$$function__1_lambda,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__10_handleIntDiv$$$function__1_div,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__11_handleIntMod$$$function__1_mod,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__13_handleIntArithmeticShiftLeft$$$function__1_lambda,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__14_handleIntArithmeticShiftRight$$$function__1_lambda,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__15_handleIntLogicalShiftLeft$$$function__1_lambda,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__16_handleIntLogicalShiftRight$$$function__1_logicalShiftRight,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__17_handleIntOr$$$function__1_lambda,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__18_handleIntAnd$$$function__1_lambda,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__19_handleIntXor$$$function__1_lambda,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__1_handleIntNE,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__2_handleIntLT,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__3_handleIntLE,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__4_handleIntEQ,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__5_handleIntGT,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__6_handleIntGE,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__7_handleIntAdd,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__8_handleIntSub,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__9_handleIntMul,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__10_handleIntDiv,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__11_handleIntMod,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__12_pythonIntTo30BitSigned,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__13_handleIntArithmeticShiftLeft,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__14_handleIntArithmeticShiftRight,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__15_handleIntLogicalShiftLeft,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__16_handleIntLogicalShiftRight,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__17_handleIntOr,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__18_handleIntAnd,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__19_handleIntXor,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__20_handleIntOperator,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__21_handleIntIfFail,
    impl_interpreting$primitive_methods$SmallIntPrimitives$$$function__22_handleIntAsFloat,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_interpreting$primitive_methods$SmallIntPrimitives);

    if (unlikely(offset == -1)) {
        PyThreadState *tstate = PyThreadState_GET();
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);


    PyObject *result = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM0(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM0(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM0(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM0(result, 6, Py_None);
#endif

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;

    if (!PyArg_ParseTuple(args, "OOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_interpreting$primitive_methods$SmallIntPrimitives,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_interpreting$primitive_methods$SmallIntPrimitives,
        sizeof(function_table_interpreting$primitive_methods$SmallIntPrimitives) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_interpreting$primitive_methods$SmallIntPrimitives(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("interpreting$primitive_methods$SmallIntPrimitives");

    // Store the module for future use.
    module_interpreting$primitive_methods$SmallIntPrimitives = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("interpreting$primitive_methods$SmallIntPrimitives: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("interpreting$primitive_methods$SmallIntPrimitives: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initinterpreting$primitive_methods$SmallIntPrimitives\n");

    moduledict_interpreting$primitive_methods$SmallIntPrimitives = MODULE_DICT(module_interpreting$primitive_methods$SmallIntPrimitives);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }




#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_interpreting$primitive_methods$SmallIntPrimitives,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_interpreting$primitive_methods$SmallIntPrimitives,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[103]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_interpreting$primitive_methods$SmallIntPrimitives,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_interpreting$primitive_methods$SmallIntPrimitives,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_interpreting$primitive_methods$SmallIntPrimitives);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_interpreting$primitive_methods$SmallIntPrimitives);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_6c015201f4dcd13a144c60bcfa4fcb0d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_2);
    }
    frame_6c015201f4dcd13a144c60bcfa4fcb0d = MAKE_MODULE_FRAME(codeobj_6c015201f4dcd13a144c60bcfa4fcb0d, module_interpreting$primitive_methods$SmallIntPrimitives);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6c015201f4dcd13a144c60bcfa4fcb0d);
    assert(Py_REFCNT(frame_6c015201f4dcd13a144c60bcfa4fcb0d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[62];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[65], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[66], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6c015201f4dcd13a144c60bcfa4fcb0d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6c015201f4dcd13a144c60bcfa4fcb0d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6c015201f4dcd13a144c60bcfa4fcb0d, exception_lineno);
    }



    assertFrameObject(frame_6c015201f4dcd13a144c60bcfa4fcb0d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;


        tmp_assign_source_4 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__1_handleIntNE();

        UPDATE_STRING_DICT1(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;


        tmp_assign_source_5 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__2_handleIntLT();

        UPDATE_STRING_DICT1(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__3_handleIntLE();

        UPDATE_STRING_DICT1(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__4_handleIntEQ();

        UPDATE_STRING_DICT1(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__5_handleIntGT();

        UPDATE_STRING_DICT1(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__6_handleIntGE();

        UPDATE_STRING_DICT1(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__7_handleIntAdd();

        UPDATE_STRING_DICT1(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__8_handleIntSub();

        UPDATE_STRING_DICT1(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__9_handleIntMul();

        UPDATE_STRING_DICT1(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__10_handleIntDiv();

        UPDATE_STRING_DICT1(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__11_handleIntMod();

        UPDATE_STRING_DICT1(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[80];
        UPDATE_STRING_DICT0(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__12_pythonIntTo30BitSigned();

        UPDATE_STRING_DICT1(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__13_handleIntArithmeticShiftLeft();

        UPDATE_STRING_DICT1(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__14_handleIntArithmeticShiftRight();

        UPDATE_STRING_DICT1(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__15_handleIntLogicalShiftLeft();

        UPDATE_STRING_DICT1(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__16_handleIntLogicalShiftRight();

        UPDATE_STRING_DICT1(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__17_handleIntOr();

        UPDATE_STRING_DICT1(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__18_handleIntAnd();

        UPDATE_STRING_DICT1(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__19_handleIntXor();

        UPDATE_STRING_DICT1(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__20_handleIntOperator();

        UPDATE_STRING_DICT1(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__21_handleIntIfFail();

        UPDATE_STRING_DICT1(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_interpreting$primitive_methods$SmallIntPrimitives$$$function__22_handleIntAsFloat();

        UPDATE_STRING_DICT1(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_27);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("interpreting$primitive_methods$SmallIntPrimitives", false);

    Py_INCREF(module_interpreting$primitive_methods$SmallIntPrimitives);
    return module_interpreting$primitive_methods$SmallIntPrimitives;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_interpreting$primitive_methods$SmallIntPrimitives, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("interpreting$primitive_methods$SmallIntPrimitives", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
