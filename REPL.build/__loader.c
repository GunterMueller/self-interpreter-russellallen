
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/tracing.h"
#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 0 > 0
static unsigned char *bytecode_data[0];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode_Messages(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___main__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting$Interpreter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting$objects(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting$objects$SelfException(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting$objects$SelfObject(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting$objects$SelfSlot(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting$objects$primitive_objects(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting$objects$primitive_objects$SelfBooleans(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting$objects$primitive_objects$SelfByteVector(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting$objects$primitive_objects$SelfFloat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting$objects$primitive_objects$SelfInteger(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting$objects$primitive_objects$SelfLobby(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting$objects$primitive_objects$SelfObjectVector(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting$objects$primitive_objects$SelfString(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting$primitive_methods(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting$primitive_methods$FloatPrimitives(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting$primitive_methods$GraphicsPrimitives(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting$primitive_methods$ObjectPrimitives(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting$primitive_methods$ObjectVectorPrimitives(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting$primitive_methods$PrimitiveDictionary(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting$primitive_methods$SmallIntPrimitives(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting$primitive_methods$StringPrimitives(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting$printingutils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting$printingutils$PrinterConfig(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_interpreting$printingutils$SelfObjectPrinter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$Parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$SelfParsingError(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$nodes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$nodes$CodeNode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$nodes$Node(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$nodes$message_nodes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$nodes$message_nodes$BinaryMessageNode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$nodes$message_nodes$KeywordMessageNode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$nodes$message_nodes$ResendNode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$nodes$message_nodes$UnaryMessageNode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$nodes$object_nodes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$nodes$object_nodes$BlockNode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$nodes$object_nodes$FloatNode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$nodes$object_nodes$IntegerNode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$nodes$object_nodes$RegularObjectNode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$nodes$object_nodes$StringNode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$nodes$slot_nodes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$nodes$slot_nodes$ArgumentSlotNode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$nodes$slot_nodes$BinarySlotNode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$nodes$slot_nodes$DataSlotNode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$nodes$slot_nodes$KeywordSlotNode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$nodes$slot_nodes$ParentSlotNode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$utils$AnnotatedList(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_parsing$utils$ParsingUtils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ply(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ply$lex(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ply$yacc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"Messages", modulecode_Messages, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/Messages.py"
#endif
},
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/REPL.py"
#endif
},
    {"interpreting", modulecode_interpreting, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting"
#endif
},
    {"interpreting.Interpreter", modulecode_interpreting$Interpreter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting/Interpreter.py"
#endif
},
    {"interpreting.objects", modulecode_interpreting$objects, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting/objects"
#endif
},
    {"interpreting.objects.SelfException", modulecode_interpreting$objects$SelfException, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting/objects/SelfException.py"
#endif
},
    {"interpreting.objects.SelfObject", modulecode_interpreting$objects$SelfObject, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting/objects/SelfObject.py"
#endif
},
    {"interpreting.objects.SelfSlot", modulecode_interpreting$objects$SelfSlot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting/objects/SelfSlot.py"
#endif
},
    {"interpreting.objects.primitive_objects", modulecode_interpreting$objects$primitive_objects, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting/objects/primitive_objects"
#endif
},
    {"interpreting.objects.primitive_objects.SelfBooleans", modulecode_interpreting$objects$primitive_objects$SelfBooleans, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting/objects/primitive_objects/SelfBooleans.py"
#endif
},
    {"interpreting.objects.primitive_objects.SelfByteVector", modulecode_interpreting$objects$primitive_objects$SelfByteVector, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting/objects/primitive_objects/SelfByteVector.py"
#endif
},
    {"interpreting.objects.primitive_objects.SelfFloat", modulecode_interpreting$objects$primitive_objects$SelfFloat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting/objects/primitive_objects/SelfFloat.py"
#endif
},
    {"interpreting.objects.primitive_objects.SelfInteger", modulecode_interpreting$objects$primitive_objects$SelfInteger, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting/objects/primitive_objects/SelfInteger.py"
#endif
},
    {"interpreting.objects.primitive_objects.SelfLobby", modulecode_interpreting$objects$primitive_objects$SelfLobby, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting/objects/primitive_objects/SelfLobby.py"
#endif
},
    {"interpreting.objects.primitive_objects.SelfObjectVector", modulecode_interpreting$objects$primitive_objects$SelfObjectVector, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting/objects/primitive_objects/SelfObjectVector.py"
#endif
},
    {"interpreting.objects.primitive_objects.SelfString", modulecode_interpreting$objects$primitive_objects$SelfString, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting/objects/primitive_objects/SelfString.py"
#endif
},
    {"interpreting.primitive_methods", modulecode_interpreting$primitive_methods, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting/primitive_methods"
#endif
},
    {"interpreting.primitive_methods.FloatPrimitives", modulecode_interpreting$primitive_methods$FloatPrimitives, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting/primitive_methods/FloatPrimitives.py"
#endif
},
    {"interpreting.primitive_methods.GraphicsPrimitives", modulecode_interpreting$primitive_methods$GraphicsPrimitives, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting/primitive_methods/GraphicsPrimitives.py"
#endif
},
    {"interpreting.primitive_methods.ObjectPrimitives", modulecode_interpreting$primitive_methods$ObjectPrimitives, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting/primitive_methods/ObjectPrimitives.py"
#endif
},
    {"interpreting.primitive_methods.ObjectVectorPrimitives", modulecode_interpreting$primitive_methods$ObjectVectorPrimitives, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting/primitive_methods/ObjectVectorPrimitives.py"
#endif
},
    {"interpreting.primitive_methods.PrimitiveDictionary", modulecode_interpreting$primitive_methods$PrimitiveDictionary, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting/primitive_methods/PrimitiveDictionary.py"
#endif
},
    {"interpreting.primitive_methods.SmallIntPrimitives", modulecode_interpreting$primitive_methods$SmallIntPrimitives, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting/primitive_methods/SmallIntPrimitives.py"
#endif
},
    {"interpreting.primitive_methods.StringPrimitives", modulecode_interpreting$primitive_methods$StringPrimitives, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting/primitive_methods/StringPrimitives.py"
#endif
},
    {"interpreting.printingutils", modulecode_interpreting$printingutils, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting/printingutils"
#endif
},
    {"interpreting.printingutils.PrinterConfig", modulecode_interpreting$printingutils$PrinterConfig, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting/printingutils/PrinterConfig.py"
#endif
},
    {"interpreting.printingutils.SelfObjectPrinter", modulecode_interpreting$printingutils$SelfObjectPrinter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/interpreting/printingutils/SelfObjectPrinter.py"
#endif
},
    {"parsing", modulecode_parsing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing"
#endif
},
    {"parsing.Parser", modulecode_parsing$Parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/Parser.py"
#endif
},
    {"parsing.SelfParsingError", modulecode_parsing$SelfParsingError, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/SelfParsingError.py"
#endif
},
    {"parsing.nodes", modulecode_parsing$nodes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/nodes"
#endif
},
    {"parsing.nodes.CodeNode", modulecode_parsing$nodes$CodeNode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/nodes/CodeNode.py"
#endif
},
    {"parsing.nodes.Node", modulecode_parsing$nodes$Node, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/nodes/Node.py"
#endif
},
    {"parsing.nodes.message_nodes", modulecode_parsing$nodes$message_nodes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/nodes/message_nodes"
#endif
},
    {"parsing.nodes.message_nodes.BinaryMessageNode", modulecode_parsing$nodes$message_nodes$BinaryMessageNode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/nodes/message_nodes/BinaryMessageNode.py"
#endif
},
    {"parsing.nodes.message_nodes.KeywordMessageNode", modulecode_parsing$nodes$message_nodes$KeywordMessageNode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/nodes/message_nodes/KeywordMessageNode.py"
#endif
},
    {"parsing.nodes.message_nodes.ResendNode", modulecode_parsing$nodes$message_nodes$ResendNode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/nodes/message_nodes/ResendNode.py"
#endif
},
    {"parsing.nodes.message_nodes.UnaryMessageNode", modulecode_parsing$nodes$message_nodes$UnaryMessageNode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/nodes/message_nodes/UnaryMessageNode.py"
#endif
},
    {"parsing.nodes.object_nodes", modulecode_parsing$nodes$object_nodes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/nodes/object_nodes"
#endif
},
    {"parsing.nodes.object_nodes.BlockNode", modulecode_parsing$nodes$object_nodes$BlockNode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/nodes/object_nodes/BlockNode.py"
#endif
},
    {"parsing.nodes.object_nodes.FloatNode", modulecode_parsing$nodes$object_nodes$FloatNode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/nodes/object_nodes/FloatNode.py"
#endif
},
    {"parsing.nodes.object_nodes.IntegerNode", modulecode_parsing$nodes$object_nodes$IntegerNode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/nodes/object_nodes/IntegerNode.py"
#endif
},
    {"parsing.nodes.object_nodes.RegularObjectNode", modulecode_parsing$nodes$object_nodes$RegularObjectNode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/nodes/object_nodes/RegularObjectNode.py"
#endif
},
    {"parsing.nodes.object_nodes.StringNode", modulecode_parsing$nodes$object_nodes$StringNode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/nodes/object_nodes/StringNode.py"
#endif
},
    {"parsing.nodes.slot_nodes", modulecode_parsing$nodes$slot_nodes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/nodes/slot_nodes"
#endif
},
    {"parsing.nodes.slot_nodes.ArgumentSlotNode", modulecode_parsing$nodes$slot_nodes$ArgumentSlotNode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/nodes/slot_nodes/ArgumentSlotNode.py"
#endif
},
    {"parsing.nodes.slot_nodes.BinarySlotNode", modulecode_parsing$nodes$slot_nodes$BinarySlotNode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/nodes/slot_nodes/BinarySlotNode.py"
#endif
},
    {"parsing.nodes.slot_nodes.DataSlotNode", modulecode_parsing$nodes$slot_nodes$DataSlotNode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/nodes/slot_nodes/DataSlotNode.py"
#endif
},
    {"parsing.nodes.slot_nodes.KeywordSlotNode", modulecode_parsing$nodes$slot_nodes$KeywordSlotNode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/nodes/slot_nodes/KeywordSlotNode.py"
#endif
},
    {"parsing.nodes.slot_nodes.ParentSlotNode", modulecode_parsing$nodes$slot_nodes$ParentSlotNode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/nodes/slot_nodes/ParentSlotNode.py"
#endif
},
    {"parsing.utils", modulecode_parsing$utils, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/utils"
#endif
},
    {"parsing.utils.AnnotatedList", modulecode_parsing$utils$AnnotatedList, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/utils/AnnotatedList.py"
#endif
},
    {"parsing.utils.ParsingUtils", modulecode_parsing$utils$ParsingUtils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/parsing/utils/ParsingUtils.py"
#endif
},
    {"ply", modulecode_ply, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/ply/__init__.py"
#endif
},
    {"ply.lex", modulecode_ply$lex, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/ply/lex.py"
#endif
},
    {"ply.yacc", modulecode_ply$yacc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/ply/yacc.py"
#endif
},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob(PyThreadState *tstate) {
    static bool init_done = false;

    if (init_done == false) {
        // Note needed for mere data.
        loadConstantsBlob(tstate, (PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(PyThreadState *tstate) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob(tstate);
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }
}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    NUITKA_PRINT_TIMING("copyFrozenModulesTo(): Calling _loadBytesCodesBlob.");
    _loadBytesCodesBlob(NULL);

    NUITKA_PRINT_TIMING("copyFrozenModulesTo(): Updating frozen module table sizes.");

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;
#if PYTHON_VERSION >= 0x3b0
        destination->is_package = current->size < 0;
        destination->size = Py_ABS(destination->size);
        destination->get_code = NULL;
#endif
        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

