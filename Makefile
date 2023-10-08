#############################################################################
# Makefile for building: NewProject002
# Generated by qmake (3.0) (Qt 5.2.0)
# Project:  NewProject002.pro
# Template: app
# Command: D:\9T\5.2.0\mingw48_32\bin\qmake.exe -spec win32-g++ CONFIG+=debug CONFIG+=declarative_debug CONFIG+=qml_debug -o Makefile NewProject002.pro
#############################################################################

MAKEFILE      = Makefile

first: debug
install: debug-install
uninstall: debug-uninstall
QMAKE         = D:\9T\5.2.0\mingw48_32\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = $(COPY)
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = $(COPY_FILE)
INSTALL_PROGRAM = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = del
SYMLINK       = copy /y
DEL_DIR       = rmdir
MOVE          = move
SUBTARGETS    =  \
		debug \
		release


debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall
release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall

Makefile: NewProject002.pro ../../../../9T/5.2.0/mingw48_32/mkspecs/win32-g++/qmake.conf ../../../../9T/5.2.0/mingw48_32/mkspecs/features/spec_pre.prf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/qdevice.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/features/device_config.prf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/common/shell-win32.conf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/qconfig.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_axbase.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_axbase_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_axcontainer.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_axcontainer_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_axserver.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_axserver_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_bluetooth.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_bluetooth_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_bootstrap_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_clucene_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_concurrent.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_concurrent_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_core.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_core_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_declarative.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_declarative_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_designer.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_designer_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_designercomponents_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_gui.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_gui_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_help.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_help_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_multimedia.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_multimedia_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_multimediawidgets.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_network.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_network_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_nfc.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_nfc_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_opengl.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_opengl_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_openglextensions.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_openglextensions_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_platformsupport_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_positioning.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_positioning_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_printsupport.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_printsupport_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_qml.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_qml_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_qmltest.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_qmltest_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_quick.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_quick_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_quickparticles_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_script.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_script_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_scripttools.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_scripttools_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_sensors.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_sensors_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_serialport.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_serialport_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_sql.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_sql_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_svg.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_svg_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_testlib.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_testlib_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_uitools.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_uitools_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_webkit.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_webkit_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_webkitwidgets.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_webkitwidgets_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_widgets.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_widgets_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_winextras.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_winextras_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_xml.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_xml_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_xmlpatterns.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		../../../../9T/5.2.0/mingw48_32/mkspecs/features/qt_functions.prf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/features/qt_config.prf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/win32-g++/qmake.conf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/features/spec_post.prf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/features/exclusive_builds.prf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/features/default_pre.prf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/features/win32/default_pre.prf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/features/resolve_config.prf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/features/exclusive_builds_post.prf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/features/default_post.prf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/features/qml_debug.prf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/features/declarative_debug.prf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/features/win32/rtti.prf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/features/warn_on.prf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/features/qt.prf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/features/resources.prf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/features/moc.prf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/features/win32/opengl.prf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/features/uic.prf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/features/win32/windows.prf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/features/testcase_targets.prf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/features/exceptions.prf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/features/yacc.prf \
		../../../../9T/5.2.0/mingw48_32/mkspecs/features/lex.prf \
		NewProject002.pro \
		D:/9T/5.2.0/mingw48_32/lib/Qt5Widgets.prl \
		D:/9T/5.2.0/mingw48_32/lib/Qt5Sql.prl \
		D:/9T/5.2.0/mingw48_32/lib/Qt5Gui.prl \
		D:/9T/5.2.0/mingw48_32/lib/Qt5Core.prl
	$(QMAKE) -spec win32-g++ CONFIG+=debug CONFIG+=declarative_debug CONFIG+=qml_debug -o Makefile NewProject002.pro
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\spec_pre.prf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\qdevice.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\device_config.prf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\common\shell-win32.conf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\qconfig.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_axbase.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_axbase_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_axcontainer.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_axcontainer_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_axserver.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_axserver_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_bluetooth.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_bluetooth_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_bootstrap_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_clucene_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_concurrent.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_concurrent_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_core.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_core_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_declarative.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_declarative_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_designer.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_designer_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_designercomponents_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_gui.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_gui_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_help.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_help_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_multimedia.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_multimedia_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_multimediawidgets.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_multimediawidgets_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_network.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_network_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_nfc.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_nfc_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_opengl.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_opengl_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_openglextensions.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_openglextensions_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_platformsupport_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_positioning.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_positioning_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_printsupport.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_printsupport_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_qml.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_qml_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_qmldevtools_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_qmltest.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_qmltest_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_qtmultimediaquicktools_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_quick.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_quick_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_quickparticles_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_script.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_script_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_scripttools.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_scripttools_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_sensors.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_sensors_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_serialport.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_serialport_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_sql.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_sql_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_svg.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_svg_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_testlib.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_testlib_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_uitools.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_uitools_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_webkit.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_webkit_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_webkitwidgets.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_webkitwidgets_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_widgets.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_widgets_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_winextras.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_winextras_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_xml.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_xml_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_xmlpatterns.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\modules\qt_lib_xmlpatterns_private.pri:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\qt_functions.prf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\qt_config.prf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\win32-g++\qmake.conf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\spec_post.prf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\exclusive_builds.prf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\default_pre.prf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\win32\default_pre.prf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\resolve_config.prf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\exclusive_builds_post.prf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\default_post.prf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\qml_debug.prf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\declarative_debug.prf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\win32\rtti.prf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\warn_on.prf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\qt.prf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\resources.prf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\moc.prf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\win32\opengl.prf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\uic.prf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\win32\windows.prf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\testcase_targets.prf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\exceptions.prf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\yacc.prf:
..\..\..\..\9T\5.2.0\mingw48_32\mkspecs\features\lex.prf:
NewProject002.pro:
D:/9T/5.2.0/mingw48_32/lib/Qt5Widgets.prl:
D:/9T/5.2.0/mingw48_32/lib/Qt5Sql.prl:
D:/9T/5.2.0/mingw48_32/lib/Qt5Gui.prl:
D:/9T/5.2.0/mingw48_32/lib/Qt5Core.prl:
qmake: FORCE
	@$(QMAKE) -spec win32-g++ CONFIG+=debug CONFIG+=declarative_debug CONFIG+=qml_debug -o Makefile NewProject002.pro

qmake_all: FORCE

make_first: debug-make_first release-make_first FORCE
all: debug-all release-all FORCE
clean: debug-clean release-clean FORCE
distclean: debug-distclean release-distclean FORCE
	-$(DEL_FILE) Makefile

debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
mocclean: debug-mocclean release-mocclean

debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
mocables: debug-mocables release-mocables

check: first
FORCE:

$(MAKEFILE).Debug: Makefile
$(MAKEFILE).Release: Makefile
