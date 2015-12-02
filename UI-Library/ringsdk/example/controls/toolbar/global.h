#ifndef _INC_TOOLBARDEMO_GLOBAL
#define _INC_TOOLBARDEMO_GLOBAL
#include "ringmain.h"
#include "resource.h"

BEGIN_SETUPMAINWINDOW(IS_MDIFRAME)
	BEGIN_DEF_VAR(NO_INIT)
		RingCoolMenu* rm;
		RingToolBar *toolbar;
		RingMenuBar* menubar;
		RingIPAddr* m_ipAddr;
		RingEdit* m_edPort;
	END_DEF_VAR

	BEGIN_DEFMSG
		DEFCMD(OnFileNew)
		DEFCMD(OnFileOpen)
		DEFCMD(OnAbout)
		DEFCMD(OnExit)
		DEFCMD(OnConnect)
		DEFCMD(OnDisConnect)

		DEFMSG(WM_CREATE)
		DEFMSG(WM_SYSCOMMAND)
		DEFMSG(WM_SHOWWINDOW)
		DEFMSG(WM_RINGTOOLHELP)
		//DEFMSG(WM_RINGTOOLTIP)
		DEFMSG(WM_DESTROY)
	END_DEFMAINMSG
END_SETUPMAINWINDOW

BEGIN_SETUPWINDOW(child,IS_MDICHILD)
	BEGIN_DEFMSG
		DEFMSG(WM_CREATE)
	END_DEFMSG(child)
END_SETUPWINDOW(child)

BEGIN_SETUPWINDOW(tooldlg,IS_DIALOG)
	BINDID(IDD_DOCKDLG)
	BEGIN_DEF_VAR(NEED_INIT)
		RECT m_vrc,m_hrc;
	END_DEF_VAR

	BEGIN_DEFMSG
		DEFMSG(WM_INITDIALOG)
		DEFMSG(WM_GETDRAGRECTS)
		DEFMSG(WM_DOCKSTATECHANGE)
		DEFMSGEX(OnIcon)
	END_DEFMSG(tooldlg)
END_SETUPWINDOW(tooldlg)

#endif
