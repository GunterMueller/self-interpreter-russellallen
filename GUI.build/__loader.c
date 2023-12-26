
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
extern PyObject *modulecode_PIL(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BlpImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BmpImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BufrStubImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$CurImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$DcxImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$DdsImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$EpsImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FitsStubImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FliImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FpxImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FtexImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GbrImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GifImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpGradientFile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpPaletteFile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GribStubImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Hdf5StubImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IcnsImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IcoImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Image(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageChops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageColor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFilter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageMode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageOps(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImagePalette(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageSequence(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageShow(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImtImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IptcImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Jpeg2KImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegPresets(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$McIdasImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MicImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MpegImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MpoImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MspImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PaletteFile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PalmImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PcdImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PcxImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PdfImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PdfParser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PixarImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PngImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PpmImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PsdImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PyAccess(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SgiImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SpiderImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SunImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TgaImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffTags(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$WebPImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$WmfImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XVThumbImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XbmImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XpmImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_binary(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$features(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___main__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
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
extern PyObject *modulecode_kivy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$animation(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$app(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$atlas(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$cache(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$clock(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$config(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$context(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$core$clipboard(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$core$gl(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$core$image(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$core$text(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$core$text$markup(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$core$text$text_pango(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$core$window(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$deps(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$effects(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$effects$dampedscroll(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$effects$kinetic(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$effects$scroll(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$event(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$eventmanager(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$factory(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$factory_registers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$graphics(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input$factory(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input$motionevent(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input$postproc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input$postproc$calibration(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input$postproc$dejitter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input$postproc$doubletap(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input$postproc$ignorelist(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input$postproc$retaintouch(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input$postproc$tripletap(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input$provider(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input$providers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input$providers$androidjoystick(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input$providers$hidinput(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input$providers$leapfinger(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input$providers$linuxwacom(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input$providers$mactouch(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input$providers$mouse(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input$providers$mtdev(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input$providers$probesysfs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input$providers$tuio(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input$providers$wm_common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input$providers$wm_pen(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input$providers$wm_touch(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$input$shape(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$lang(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$lang$builder(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$lang$parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$lib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$lib$mtdev(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$loader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$logger(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$metrics(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$modules(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$resources(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$setupconfig(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$anchorlayout(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$behaviors(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$behaviors$button(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$behaviors$codenavigation(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$behaviors$compoundselection(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$behaviors$cover(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$behaviors$drag(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$behaviors$emacs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$behaviors$focus(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$behaviors$togglebutton(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$behaviors$touchripple(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$boxlayout(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$bubble(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$button(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$colorpicker(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$filechooser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$floatlayout(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$gridlayout(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$image(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$label(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$layout(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$modalview(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$popup(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$relativelayout(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$scatter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$screenmanager(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$scrollview(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$settings(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$stencilview(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$tabbedpanel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$textinput(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$togglebutton(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$vkeyboard(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$uix$widget(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kivy$vector(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
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
    {"PIL", modulecode_PIL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/__init__.py"
#endif
},
    {"PIL.BlpImagePlugin", modulecode_PIL$BlpImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/BlpImagePlugin.py"
#endif
},
    {"PIL.BmpImagePlugin", modulecode_PIL$BmpImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/BmpImagePlugin.py"
#endif
},
    {"PIL.BufrStubImagePlugin", modulecode_PIL$BufrStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/BufrStubImagePlugin.py"
#endif
},
    {"PIL.CurImagePlugin", modulecode_PIL$CurImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/CurImagePlugin.py"
#endif
},
    {"PIL.DcxImagePlugin", modulecode_PIL$DcxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/DcxImagePlugin.py"
#endif
},
    {"PIL.DdsImagePlugin", modulecode_PIL$DdsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/DdsImagePlugin.py"
#endif
},
    {"PIL.EpsImagePlugin", modulecode_PIL$EpsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/EpsImagePlugin.py"
#endif
},
    {"PIL.FitsStubImagePlugin", modulecode_PIL$FitsStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/FitsStubImagePlugin.py"
#endif
},
    {"PIL.FliImagePlugin", modulecode_PIL$FliImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/FliImagePlugin.py"
#endif
},
    {"PIL.FpxImagePlugin", modulecode_PIL$FpxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/FpxImagePlugin.py"
#endif
},
    {"PIL.FtexImagePlugin", modulecode_PIL$FtexImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/FtexImagePlugin.py"
#endif
},
    {"PIL.GbrImagePlugin", modulecode_PIL$GbrImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/GbrImagePlugin.py"
#endif
},
    {"PIL.GifImagePlugin", modulecode_PIL$GifImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/GifImagePlugin.py"
#endif
},
    {"PIL.GimpGradientFile", modulecode_PIL$GimpGradientFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/GimpGradientFile.py"
#endif
},
    {"PIL.GimpPaletteFile", modulecode_PIL$GimpPaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/GimpPaletteFile.py"
#endif
},
    {"PIL.GribStubImagePlugin", modulecode_PIL$GribStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/GribStubImagePlugin.py"
#endif
},
    {"PIL.Hdf5StubImagePlugin", modulecode_PIL$Hdf5StubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/Hdf5StubImagePlugin.py"
#endif
},
    {"PIL.IcnsImagePlugin", modulecode_PIL$IcnsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/IcnsImagePlugin.py"
#endif
},
    {"PIL.IcoImagePlugin", modulecode_PIL$IcoImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/IcoImagePlugin.py"
#endif
},
    {"PIL.ImImagePlugin", modulecode_PIL$ImImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/ImImagePlugin.py"
#endif
},
    {"PIL.Image", modulecode_PIL$Image, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/Image.py"
#endif
},
    {"PIL.ImageChops", modulecode_PIL$ImageChops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/ImageChops.py"
#endif
},
    {"PIL.ImageColor", modulecode_PIL$ImageColor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/ImageColor.py"
#endif
},
    {"PIL.ImageFile", modulecode_PIL$ImageFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/ImageFile.py"
#endif
},
    {"PIL.ImageFilter", modulecode_PIL$ImageFilter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/ImageFilter.py"
#endif
},
    {"PIL.ImageMode", modulecode_PIL$ImageMode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/ImageMode.py"
#endif
},
    {"PIL.ImageOps", modulecode_PIL$ImageOps, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/ImageOps.py"
#endif
},
    {"PIL.ImagePalette", modulecode_PIL$ImagePalette, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/ImagePalette.py"
#endif
},
    {"PIL.ImageSequence", modulecode_PIL$ImageSequence, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/ImageSequence.py"
#endif
},
    {"PIL.ImageShow", modulecode_PIL$ImageShow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/ImageShow.py"
#endif
},
    {"PIL.ImtImagePlugin", modulecode_PIL$ImtImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/ImtImagePlugin.py"
#endif
},
    {"PIL.IptcImagePlugin", modulecode_PIL$IptcImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/IptcImagePlugin.py"
#endif
},
    {"PIL.Jpeg2KImagePlugin", modulecode_PIL$Jpeg2KImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/Jpeg2KImagePlugin.py"
#endif
},
    {"PIL.JpegImagePlugin", modulecode_PIL$JpegImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/JpegImagePlugin.py"
#endif
},
    {"PIL.JpegPresets", modulecode_PIL$JpegPresets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/JpegPresets.py"
#endif
},
    {"PIL.McIdasImagePlugin", modulecode_PIL$McIdasImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/McIdasImagePlugin.py"
#endif
},
    {"PIL.MicImagePlugin", modulecode_PIL$MicImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/MicImagePlugin.py"
#endif
},
    {"PIL.MpegImagePlugin", modulecode_PIL$MpegImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/MpegImagePlugin.py"
#endif
},
    {"PIL.MpoImagePlugin", modulecode_PIL$MpoImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/MpoImagePlugin.py"
#endif
},
    {"PIL.MspImagePlugin", modulecode_PIL$MspImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/MspImagePlugin.py"
#endif
},
    {"PIL.PaletteFile", modulecode_PIL$PaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/PaletteFile.py"
#endif
},
    {"PIL.PalmImagePlugin", modulecode_PIL$PalmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/PalmImagePlugin.py"
#endif
},
    {"PIL.PcdImagePlugin", modulecode_PIL$PcdImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/PcdImagePlugin.py"
#endif
},
    {"PIL.PcxImagePlugin", modulecode_PIL$PcxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/PcxImagePlugin.py"
#endif
},
    {"PIL.PdfImagePlugin", modulecode_PIL$PdfImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/PdfImagePlugin.py"
#endif
},
    {"PIL.PdfParser", modulecode_PIL$PdfParser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/PdfParser.py"
#endif
},
    {"PIL.PixarImagePlugin", modulecode_PIL$PixarImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/PixarImagePlugin.py"
#endif
},
    {"PIL.PngImagePlugin", modulecode_PIL$PngImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/PngImagePlugin.py"
#endif
},
    {"PIL.PpmImagePlugin", modulecode_PIL$PpmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/PpmImagePlugin.py"
#endif
},
    {"PIL.PsdImagePlugin", modulecode_PIL$PsdImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/PsdImagePlugin.py"
#endif
},
    {"PIL.PyAccess", modulecode_PIL$PyAccess, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/PyAccess.py"
#endif
},
    {"PIL.SgiImagePlugin", modulecode_PIL$SgiImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/SgiImagePlugin.py"
#endif
},
    {"PIL.SpiderImagePlugin", modulecode_PIL$SpiderImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/SpiderImagePlugin.py"
#endif
},
    {"PIL.SunImagePlugin", modulecode_PIL$SunImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/SunImagePlugin.py"
#endif
},
    {"PIL.TgaImagePlugin", modulecode_PIL$TgaImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/TgaImagePlugin.py"
#endif
},
    {"PIL.TiffImagePlugin", modulecode_PIL$TiffImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/TiffImagePlugin.py"
#endif
},
    {"PIL.TiffTags", modulecode_PIL$TiffTags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/TiffTags.py"
#endif
},
    {"PIL.WebPImagePlugin", modulecode_PIL$WebPImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/WebPImagePlugin.py"
#endif
},
    {"PIL.WmfImagePlugin", modulecode_PIL$WmfImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/WmfImagePlugin.py"
#endif
},
    {"PIL.XVThumbImagePlugin", modulecode_PIL$XVThumbImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/XVThumbImagePlugin.py"
#endif
},
    {"PIL.XbmImagePlugin", modulecode_PIL$XbmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/XbmImagePlugin.py"
#endif
},
    {"PIL.XpmImagePlugin", modulecode_PIL$XpmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/XpmImagePlugin.py"
#endif
},
    {"PIL._binary", modulecode_PIL$_binary, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/_binary.py"
#endif
},
    {"PIL._util", modulecode_PIL$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/_util.py"
#endif
},
    {"PIL._version", modulecode_PIL$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/_version.py"
#endif
},
    {"PIL.features", modulecode_PIL$features, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/PIL/features.py"
#endif
},
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/GM_Programming/Languages/Self/self-interpreter-russellallen/src/GUI.py"
#endif
},
    {"certifi", modulecode_certifi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/certifi/__init__.py"
#endif
},
    {"certifi.core", modulecode_certifi$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/certifi/core.py"
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
    {"kivy", modulecode_kivy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/__init__.py"
#endif
},
    {"kivy._version", modulecode_kivy$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/_version.py"
#endif
},
    {"kivy.animation", modulecode_kivy$animation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/animation.py"
#endif
},
    {"kivy.app", modulecode_kivy$app, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/app.py"
#endif
},
    {"kivy.atlas", modulecode_kivy$atlas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/atlas.py"
#endif
},
    {"kivy.base", modulecode_kivy$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/base.py"
#endif
},
    {"kivy.cache", modulecode_kivy$cache, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/cache.py"
#endif
},
    {"kivy.clock", modulecode_kivy$clock, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/clock.py"
#endif
},
    {"kivy.compat", modulecode_kivy$compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/compat.py"
#endif
},
    {"kivy.config", modulecode_kivy$config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/config.py"
#endif
},
    {"kivy.context", modulecode_kivy$context, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/context.py"
#endif
},
    {"kivy.core", modulecode_kivy$core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/core/__init__.py"
#endif
},
    {"kivy.core.clipboard", modulecode_kivy$core$clipboard, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/core/clipboard/__init__.py"
#endif
},
    {"kivy.core.gl", modulecode_kivy$core$gl, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/core/gl/__init__.py"
#endif
},
    {"kivy.core.image", modulecode_kivy$core$image, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/core/image/__init__.py"
#endif
},
    {"kivy.core.text", modulecode_kivy$core$text, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/core/text/__init__.py"
#endif
},
    {"kivy.core.text.markup", modulecode_kivy$core$text$markup, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/core/text/markup.py"
#endif
},
    {"kivy.core.text.text_pango", modulecode_kivy$core$text$text_pango, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/core/text/text_pango.py"
#endif
},
    {"kivy.core.window", modulecode_kivy$core$window, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/core/window/__init__.py"
#endif
},
    {"kivy.deps", modulecode_kivy$deps, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/deps/__init__.py"
#endif
},
    {"kivy.effects", modulecode_kivy$effects, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/effects/__init__.py"
#endif
},
    {"kivy.effects.dampedscroll", modulecode_kivy$effects$dampedscroll, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/effects/dampedscroll.py"
#endif
},
    {"kivy.effects.kinetic", modulecode_kivy$effects$kinetic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/effects/kinetic.py"
#endif
},
    {"kivy.effects.scroll", modulecode_kivy$effects$scroll, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/effects/scroll.py"
#endif
},
    {"kivy.event", modulecode_kivy$event, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/event.py"
#endif
},
    {"kivy.eventmanager", modulecode_kivy$eventmanager, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/eventmanager/__init__.py"
#endif
},
    {"kivy.factory", modulecode_kivy$factory, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/factory.py"
#endif
},
    {"kivy.factory_registers", modulecode_kivy$factory_registers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/factory_registers.py"
#endif
},
    {"kivy.graphics", modulecode_kivy$graphics, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/graphics/__init__.py"
#endif
},
    {"kivy.input", modulecode_kivy$input, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/__init__.py"
#endif
},
    {"kivy.input.factory", modulecode_kivy$input$factory, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/factory.py"
#endif
},
    {"kivy.input.motionevent", modulecode_kivy$input$motionevent, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/motionevent.py"
#endif
},
    {"kivy.input.postproc", modulecode_kivy$input$postproc, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/postproc/__init__.py"
#endif
},
    {"kivy.input.postproc.calibration", modulecode_kivy$input$postproc$calibration, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/postproc/calibration.py"
#endif
},
    {"kivy.input.postproc.dejitter", modulecode_kivy$input$postproc$dejitter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/postproc/dejitter.py"
#endif
},
    {"kivy.input.postproc.doubletap", modulecode_kivy$input$postproc$doubletap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/postproc/doubletap.py"
#endif
},
    {"kivy.input.postproc.ignorelist", modulecode_kivy$input$postproc$ignorelist, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/postproc/ignorelist.py"
#endif
},
    {"kivy.input.postproc.retaintouch", modulecode_kivy$input$postproc$retaintouch, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/postproc/retaintouch.py"
#endif
},
    {"kivy.input.postproc.tripletap", modulecode_kivy$input$postproc$tripletap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/postproc/tripletap.py"
#endif
},
    {"kivy.input.provider", modulecode_kivy$input$provider, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/provider.py"
#endif
},
    {"kivy.input.providers", modulecode_kivy$input$providers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/providers/__init__.py"
#endif
},
    {"kivy.input.providers.androidjoystick", modulecode_kivy$input$providers$androidjoystick, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/providers/androidjoystick.py"
#endif
},
    {"kivy.input.providers.hidinput", modulecode_kivy$input$providers$hidinput, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/providers/hidinput.py"
#endif
},
    {"kivy.input.providers.leapfinger", modulecode_kivy$input$providers$leapfinger, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/providers/leapfinger.py"
#endif
},
    {"kivy.input.providers.linuxwacom", modulecode_kivy$input$providers$linuxwacom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/providers/linuxwacom.py"
#endif
},
    {"kivy.input.providers.mactouch", modulecode_kivy$input$providers$mactouch, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/providers/mactouch.py"
#endif
},
    {"kivy.input.providers.mouse", modulecode_kivy$input$providers$mouse, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/providers/mouse.py"
#endif
},
    {"kivy.input.providers.mtdev", modulecode_kivy$input$providers$mtdev, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/providers/mtdev.py"
#endif
},
    {"kivy.input.providers.probesysfs", modulecode_kivy$input$providers$probesysfs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/providers/probesysfs.py"
#endif
},
    {"kivy.input.providers.tuio", modulecode_kivy$input$providers$tuio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/providers/tuio.py"
#endif
},
    {"kivy.input.providers.wm_common", modulecode_kivy$input$providers$wm_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/providers/wm_common.py"
#endif
},
    {"kivy.input.providers.wm_pen", modulecode_kivy$input$providers$wm_pen, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/providers/wm_pen.py"
#endif
},
    {"kivy.input.providers.wm_touch", modulecode_kivy$input$providers$wm_touch, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/providers/wm_touch.py"
#endif
},
    {"kivy.input.shape", modulecode_kivy$input$shape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/input/shape.py"
#endif
},
    {"kivy.lang", modulecode_kivy$lang, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/lang/__init__.py"
#endif
},
    {"kivy.lang.builder", modulecode_kivy$lang$builder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/lang/builder.py"
#endif
},
    {"kivy.lang.parser", modulecode_kivy$lang$parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/lang/parser.py"
#endif
},
    {"kivy.lib", modulecode_kivy$lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/lib/__init__.py"
#endif
},
    {"kivy.lib.mtdev", modulecode_kivy$lib$mtdev, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/lib/mtdev.py"
#endif
},
    {"kivy.loader", modulecode_kivy$loader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/loader.py"
#endif
},
    {"kivy.logger", modulecode_kivy$logger, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/logger.py"
#endif
},
    {"kivy.metrics", modulecode_kivy$metrics, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/metrics.py"
#endif
},
    {"kivy.modules", modulecode_kivy$modules, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/modules/__init__.py"
#endif
},
    {"kivy.parser", modulecode_kivy$parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/parser.py"
#endif
},
    {"kivy.resources", modulecode_kivy$resources, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/resources.py"
#endif
},
    {"kivy.setupconfig", modulecode_kivy$setupconfig, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/setupconfig.py"
#endif
},
    {"kivy.uix", modulecode_kivy$uix, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/__init__.py"
#endif
},
    {"kivy.uix.anchorlayout", modulecode_kivy$uix$anchorlayout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/anchorlayout.py"
#endif
},
    {"kivy.uix.behaviors", modulecode_kivy$uix$behaviors, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/behaviors/__init__.py"
#endif
},
    {"kivy.uix.behaviors.button", modulecode_kivy$uix$behaviors$button, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/behaviors/button.py"
#endif
},
    {"kivy.uix.behaviors.codenavigation", modulecode_kivy$uix$behaviors$codenavigation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/behaviors/codenavigation.py"
#endif
},
    {"kivy.uix.behaviors.compoundselection", modulecode_kivy$uix$behaviors$compoundselection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/behaviors/compoundselection.py"
#endif
},
    {"kivy.uix.behaviors.cover", modulecode_kivy$uix$behaviors$cover, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/behaviors/cover.py"
#endif
},
    {"kivy.uix.behaviors.drag", modulecode_kivy$uix$behaviors$drag, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/behaviors/drag.py"
#endif
},
    {"kivy.uix.behaviors.emacs", modulecode_kivy$uix$behaviors$emacs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/behaviors/emacs.py"
#endif
},
    {"kivy.uix.behaviors.focus", modulecode_kivy$uix$behaviors$focus, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/behaviors/focus.py"
#endif
},
    {"kivy.uix.behaviors.togglebutton", modulecode_kivy$uix$behaviors$togglebutton, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/behaviors/togglebutton.py"
#endif
},
    {"kivy.uix.behaviors.touchripple", modulecode_kivy$uix$behaviors$touchripple, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/behaviors/touchripple.py"
#endif
},
    {"kivy.uix.boxlayout", modulecode_kivy$uix$boxlayout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/boxlayout.py"
#endif
},
    {"kivy.uix.bubble", modulecode_kivy$uix$bubble, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/bubble.py"
#endif
},
    {"kivy.uix.button", modulecode_kivy$uix$button, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/button.py"
#endif
},
    {"kivy.uix.colorpicker", modulecode_kivy$uix$colorpicker, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/colorpicker.py"
#endif
},
    {"kivy.uix.filechooser", modulecode_kivy$uix$filechooser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/filechooser.py"
#endif
},
    {"kivy.uix.floatlayout", modulecode_kivy$uix$floatlayout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/floatlayout.py"
#endif
},
    {"kivy.uix.gridlayout", modulecode_kivy$uix$gridlayout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/gridlayout.py"
#endif
},
    {"kivy.uix.image", modulecode_kivy$uix$image, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/image.py"
#endif
},
    {"kivy.uix.label", modulecode_kivy$uix$label, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/label.py"
#endif
},
    {"kivy.uix.layout", modulecode_kivy$uix$layout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/layout.py"
#endif
},
    {"kivy.uix.modalview", modulecode_kivy$uix$modalview, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/modalview.py"
#endif
},
    {"kivy.uix.popup", modulecode_kivy$uix$popup, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/popup.py"
#endif
},
    {"kivy.uix.relativelayout", modulecode_kivy$uix$relativelayout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/relativelayout.py"
#endif
},
    {"kivy.uix.scatter", modulecode_kivy$uix$scatter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/scatter.py"
#endif
},
    {"kivy.uix.screenmanager", modulecode_kivy$uix$screenmanager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/screenmanager.py"
#endif
},
    {"kivy.uix.scrollview", modulecode_kivy$uix$scrollview, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/scrollview.py"
#endif
},
    {"kivy.uix.settings", modulecode_kivy$uix$settings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/settings.py"
#endif
},
    {"kivy.uix.stencilview", modulecode_kivy$uix$stencilview, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/stencilview.py"
#endif
},
    {"kivy.uix.tabbedpanel", modulecode_kivy$uix$tabbedpanel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/tabbedpanel.py"
#endif
},
    {"kivy.uix.textinput", modulecode_kivy$uix$textinput, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/textinput.py"
#endif
},
    {"kivy.uix.togglebutton", modulecode_kivy$uix$togglebutton, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/togglebutton.py"
#endif
},
    {"kivy.uix.vkeyboard", modulecode_kivy$uix$vkeyboard, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/vkeyboard.py"
#endif
},
    {"kivy.uix.widget", modulecode_kivy$uix$widget, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/uix/widget.py"
#endif
},
    {"kivy.utils", modulecode_kivy$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/utils.py"
#endif
},
    {"kivy.vector", modulecode_kivy$vector, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gunter/.local/lib/python3.10/site-packages/kivy/vector.py"
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

