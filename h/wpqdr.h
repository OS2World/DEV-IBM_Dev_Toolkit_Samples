
/*
 * This file was generated by the SOM Compiler.
 * FileName: G:\cwpsh\rel\os2c\include\base\os2\wpqdr.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.14
 *     SOM Emitter emith: 2.43
 */

/*
 *   Module Header
 * 
 *   Module Name: WPQDR
 * 
 *   OS/2 Presentation Manager Workplace class definitions
 * 
 *   Copyright (c) International Business Machines Corporation 1991, 1992
 * 
 */


#ifndef SOM_WPQdr_h
#define SOM_WPQdr_h


/*
 * Passthru lines: File: "C.h", "before"
 */

/* common context menu ids    */
#define WPPOIDM_QDR_INSTALL         8001


#include <som.h>

/*
 * -- This emitter normally treats Method Tokens as Thunks,
 * -- but the sc modifier "nothunks" was used, so somResolve will be called.
 */
#undef somresolve_
#define somresolve_(obj,mToken) (somResolve(obj,mToken))

/*
 * Define the class name as an object type
 */
#ifndef WPQdr
#define WPQdr SOMObject
#endif
#include <wptrans.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef WPFolder
    #define WPFolder SOMObject
#endif /* WPFolder */
#ifndef M_WPObject
    #define M_WPObject SOMObject
#endif /* M_WPObject */
#ifndef WPObject
    #define WPObject SOMObject
#endif /* WPObject */
#ifndef WPImageFile
    #define WPImageFile SOMObject
#endif /* WPImageFile */
#ifndef M_WPTransient
    #define M_WPTransient SOMObject
#endif /* M_WPTransient */
#ifndef M_WPQdr
    #define M_WPQdr SOMObject
#endif /* M_WPQdr */

/*
 * End of bindings for IDL types.
 */

#define WPQdr_MajorVersion 1
#define WPQdr_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define WPQdrNewClass WPqdrc
#define WPQdrClassData WPqdrd
#define WPQdrCClassData WPqdrx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the meta class file
 */
#include <wpqdr.h>
/*--------------Migration------------*/
#define WPQdr_classObj WPQdrClassData.classObject
#define _WPQdr WPQdr_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK WPQdrNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);

/*
 * Declare the class data structure
 */
SOMEXTERN struct WPQdrClassDataStructure {
	SOMClass *classObject;
	somMToken prtGetQDriverInfo;
	somMToken prtSetQDriverInfo;
	somMToken prtSetQdrIcon;
	somMToken prtSetQDriverDiscardhwndDlg;
	somMToken prtSetQDriverInstallhwndDlg;
} SOMDLINK WPQdrClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct WPQdrCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK WPQdrCClassData;

/*
 * New and Renew macros for WPQdr
 */
#define WPQdrNew() \
   ( _WPQdr ? \
	_somNew(_WPQdr) \
	: ( WPQdrNewClass(\
		WPQdr_MajorVersion, \
		WPQdr_MinorVersion),\
	   _somNew(_WPQdr)))
#define WPQdrRenew(buf) \
   ( _WPQdr ? \
	_somRenew(_WPQdr, buf) \
	: ( WPQdrNewClass(\
		WPQdr_MajorVersion, \
		WPQdr_MinorVersion),\
	   _somRenew(_WPQdr, buf)))

/*
 * Override method: wpInitData
 */
#define WPQdr_wpInitData(somSelf) \
	WPObject_wpInitData(somSelf)

/*
 * Override method: wpUnInitData
 */
#define WPQdr_wpUnInitData(somSelf) \
	WPObject_wpUnInitData(somSelf)

/*
 * Override method: wpSetup
 */
#define WPQdr_wpSetup(somSelf,pszSetupString) \
	WPObject_wpSetup(somSelf,pszSetupString)

/*
 * Override method: somDumpSelfInt
 */
#define WPQdr_somDumpSelfInt(somSelf,level) \
	SOMObject_somDumpSelfInt(somSelf,level)

/*
 * Override method: wpAddSettingsPages
 */
#define WPQdr_wpAddSettingsPages(somSelf,hwndNotebook) \
	WPObject_wpAddSettingsPages(somSelf,hwndNotebook)

/*
 * Override method: wpQueryTitle
 */
#define WPQdr_wpQueryTitle(somSelf) \
	WPObject_wpQueryTitle(somSelf)

/*
 * Override method: wpQueryIcon
 */
#define WPQdr_wpQueryIcon(somSelf) \
	WPObject_wpQueryIcon(somSelf)

/*
 * Override method: wpFilterPopupMenu
 */
#define WPQdr_wpFilterPopupMenu(somSelf,ulFlags,hwndCnr,fMultiSelect) \
	WPObject_wpFilterPopupMenu(somSelf,ulFlags,hwndCnr,fMultiSelect)

/*
 * Override method: wpFree
 */
#define WPQdr_wpFree(somSelf) \
	WPObject_wpFree(somSelf)

/*
 * Override method: wpConfirmDelete
 */
#define WPQdr_wpConfirmDelete(somSelf,fConfirmations) \
	WPObject_wpConfirmDelete(somSelf,fConfirmations)

/*
 * Override method: wpModifyPopupMenu
 */
#define WPQdr_wpModifyPopupMenu(somSelf,hwndMenu,hwndCnr,iPosition) \
	WPObject_wpModifyPopupMenu(somSelf,hwndMenu,hwndCnr,iPosition)

/*
 * Override method: wpMenuItemSelected
 */
#define WPQdr_wpMenuItemSelected(somSelf,hwndFrame,ulMenuId) \
	WPObject_wpMenuItemSelected(somSelf,hwndFrame,ulMenuId)

/*
 * Override method: wpMenuItemHelpSelected
 */
#define WPQdr_wpMenuItemHelpSelected(somSelf,MenuId) \
	WPObject_wpMenuItemHelpSelected(somSelf,MenuId)

/*
 * Override method: wpOpen
 */
#define WPQdr_wpOpen(somSelf,hwndCnr,ulView,param) \
	WPObject_wpOpen(somSelf,hwndCnr,ulView,param)

/*
 * Override method: wpDrop
 */
#define WPQdr_wpDrop(somSelf,hwndCnr,pdrgInfo,pdrgItem) \
	WPObject_wpDrop(somSelf,hwndCnr,pdrgInfo,pdrgItem)

/*
 * Override method: wpDragOver
 */
#define WPQdr_wpDragOver(somSelf,hwndCnr,pdrgInfo) \
	WPObject_wpDragOver(somSelf,hwndCnr,pdrgInfo)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define WPQdr_wpQueryHandle WPObject_wpQueryHandle
#define WPQdr_wpCopyObject WPObject_wpCopyObject
#define WPQdr_somDefaultInit SOMObject_somDefaultInit
#define WPQdr_somDestruct SOMObject_somDestruct
#define WPQdr_wpSaveImmediate WPObject_wpSaveImmediate
#define WPQdr_wpIdentify WPObject_wpIdentify
#define WPQdr_wpAddObjectGeneralPage WPObject_wpAddObjectGeneralPage
#define WPQdr_wpAddObjectGeneralPage2 WPObject_wpAddObjectGeneralPage2
#define WPQdr_wpAddObjectWindowPage WPObject_wpAddObjectWindowPage
#define WPQdr_wpAddToObjUseList WPObject_wpAddToObjUseList
#define WPQdr_wpAllocMem WPObject_wpAllocMem
#define WPQdr_wpAppendObject WPObject_wpAppendObject
#define WPQdr_wpAssertObjectMutexSem WPObject_wpAssertObjectMutexSem
#define WPQdr_wpClose WPObject_wpClose
#define WPQdr_wpCnrInsertObject WPObject_wpCnrInsertObject
#define WPQdr_wpCnrRemoveObject WPObject_wpCnrRemoveObject
#define WPQdr_wpCnrSetEmphasis WPObject_wpCnrSetEmphasis
#define WPQdr_wpConfirmObjectTitle WPObject_wpConfirmObjectTitle
#define WPQdr_wpCopiedFromTemplate WPObject_wpCopiedFromTemplate
#define WPQdr_wpCreateAnother WPObject_wpCreateAnother
#define WPQdr_wpCreateFromTemplate WPObject_wpCreateFromTemplate
#define WPQdr_wpCreateShadowObject WPObject_wpCreateShadowObject
#define WPQdr_wpDelete WPObject_wpDelete
#define WPQdr_wpDeleteFromObjUseList WPObject_wpDeleteFromObjUseList
#define WPQdr_wpDisplayHelp WPObject_wpDisplayHelp
#define WPQdr_wpDisplayMenu WPObject_wpDisplayMenu
#define WPQdr_wpDoesObjectMatch WPObject_wpDoesObjectMatch
#define WPQdr_wpDraggedOverObject WPObject_wpDraggedOverObject
#define WPQdr_wpDroppedOnObject WPObject_wpDroppedOnObject
#define WPQdr_wpEndConversation WPObject_wpEndConversation
#define WPQdr_wpFilterMenu WPObject_wpFilterMenu
#define WPQdr_wpFindUseItem WPObject_wpFindUseItem
#define WPQdr_wpFormatDragItem WPObject_wpFormatDragItem
#define WPQdr_wpFreeMem WPObject_wpFreeMem
#define WPQdr_wpHide WPObject_wpHide
#define WPQdr_wpInsertPopupMenuItems WPObject_wpInsertPopupMenuItems
#define WPQdr_wpInsertMenuItems WPObject_wpInsertMenuItems
#define WPQdr_wpInsertSettingsPage WPObject_wpInsertSettingsPage
#define WPQdr_wpModifyMenu WPObject_wpModifyMenu
#define WPQdr_wpMoveObject WPObject_wpMoveObject
#define WPQdr_wpPrintObject WPObject_wpPrintObject
#define WPQdr_wpQueryConcurrentView WPObject_wpQueryConcurrentView
#define WPQdr_wpQueryButtonAppearance WPObject_wpQueryButtonAppearance
#define WPQdr_wpQueryConfirmations WPObject_wpQueryConfirmations
#define WPQdr_wpQueryDefaultHelp WPObject_wpQueryDefaultHelp
#define WPQdr_wpQueryDefaultView WPObject_wpQueryDefaultView
#define WPQdr_wpQueryDetailsData WPObject_wpQueryDetailsData
#define WPQdr_wpQueryError WPObject_wpQueryError
#define WPQdr_wpSetFolder WPObject_wpSetFolder
#define WPQdr_wpQueryFolder WPObject_wpQueryFolder
#define WPQdr_wpQueryIconData WPObject_wpQueryIconData
#define WPQdr_wpQueryMinWindow WPObject_wpQueryMinWindow
#define WPQdr_wpQueryNameClashOptions WPObject_wpQueryNameClashOptions
#define WPQdr_wpQueryStyle WPObject_wpQueryStyle
#define WPQdr_wpSetTaskRec WPObject_wpSetTaskRec
#define WPQdr_wpFindTaskRec WPObject_wpFindTaskRec
#define WPQdr_wpRegisterView WPObject_wpRegisterView
#define WPQdr_wpReleaseObjectMutexSem WPObject_wpReleaseObjectMutexSem
#define WPQdr_wpRender WPObject_wpRender
#define WPQdr_wpRenderComplete WPObject_wpRenderComplete
#define WPQdr_wpReplaceObject WPObject_wpReplaceObject
#define WPQdr_wpRequestObjectMutexSem WPObject_wpRequestObjectMutexSem
#define WPQdr_wpRestore WPObject_wpRestore
#define WPQdr_wpRestoreData WPObject_wpRestoreData
#define WPQdr_wpRestoreLong WPObject_wpRestoreLong
#define WPQdr_wpRestoreState WPObject_wpRestoreState
#define WPQdr_wpRestoreString WPObject_wpRestoreString
#define WPQdr_wpSaveData WPObject_wpSaveData
#define WPQdr_wpSaveDeferred WPObject_wpSaveDeferred
#define WPQdr_wpSaveLong WPObject_wpSaveLong
#define WPQdr_wpSaveState WPObject_wpSaveState
#define WPQdr_wpSaveString WPObject_wpSaveString
#define WPQdr_wpScanSetupString WPObject_wpScanSetupString
#define WPQdr_wpSetConcurrentView WPObject_wpSetConcurrentView
#define WPQdr_wpSetButtonAppearance WPObject_wpSetButtonAppearance
#define WPQdr_wpSetDefaultHelp WPObject_wpSetDefaultHelp
#define WPQdr_wpSetDefaultView WPObject_wpSetDefaultView
#define WPQdr_wpSetError WPObject_wpSetError
#define WPQdr_wpQueryScreenGroupID WPObject_wpQueryScreenGroupID
#define WPQdr_wpSetupOnce WPObject_wpSetupOnce
#define WPQdr_wpSetIcon WPObject_wpSetIcon
#define WPQdr_wpSetIconData WPObject_wpSetIconData
#define WPQdr_wpSetMinWindow WPObject_wpSetMinWindow
#define WPQdr_wpModifyStyle WPObject_wpModifyStyle
#define WPQdr_wpSetTitle WPObject_wpSetTitle
#define WPQdr_wpSwitchTo WPObject_wpSwitchTo
#define WPQdr_wpViewObject WPObject_wpViewObject
#define WPQdr_wpQueryTrueStyle WPObject_wpQueryTrueStyle
#define WPQdr_wpUnlockObject WPObject_wpUnlockObject
#define WPQdr_wpObjectReady WPObject_wpObjectReady
#define WPQdr_wpIsObjectInitialized WPObject_wpIsObjectInitialized
#define WPQdr_wpCreateShadowObjectExt WPObject_wpCreateShadowObjectExt
#define WPQdr_wpCnrDeleteUseItem WPObject_wpCnrDeleteUseItem
#define WPQdr_wpIsDeleteable WPObject_wpIsDeleteable
#define WPQdr_wpQueryCoreRecord WPObject_wpQueryCoreRecord
#define WPQdr_wpSetObjectID WPObject_wpSetObjectID
#define WPQdr_wpQueryObjectID WPObject_wpQueryObjectID
#define WPQdr_wpSetDefaultIconPos WPObject_wpSetDefaultIconPos
#define WPQdr_wpQueryDefaultIconPos WPObject_wpQueryDefaultIconPos
#define WPQdr_wpCnrRefreshDetails WPObject_wpCnrRefreshDetails
#define WPQdr_wpFindViewItem WPObject_wpFindViewItem
#define WPQdr_wpLockObject WPObject_wpLockObject
#define WPQdr_wpIsLocked WPObject_wpIsLocked
#define WPQdr_wpQueryContainerFlagPtr WPObject_wpQueryContainerFlagPtr
#define WPQdr_wpWaitForClose WPObject_wpWaitForClose
#define WPQdr_wpSetMenuStyle WPObject_wpSetMenuStyle
#define WPQdr_wpQueryMenuStyle WPObject_wpQueryMenuStyle
#define WPQdr_wpSetStyle WPObject_wpSetStyle
#define WPQdr_somInit SOMObject_somInit
#define WPQdr_somUninit SOMObject_somUninit
#define WPQdr_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define WPQdr_somDefaultAssign SOMObject_somDefaultAssign
#define WPQdr_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define WPQdr_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define WPQdr_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define WPQdr_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define WPQdr_somDefaultVAssign SOMObject_somDefaultVAssign
#define WPQdr_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define WPQdr_somFree SOMObject_somFree
#define WPQdr_somGetClass SOMObject_somGetClass
#define WPQdr_somGetClassName SOMObject_somGetClassName
#define WPQdr_somGetSize SOMObject_somGetSize
#define WPQdr_somIsA SOMObject_somIsA
#define WPQdr_somIsInstanceOf SOMObject_somIsInstanceOf
#define WPQdr_somRespondsTo SOMObject_somRespondsTo
#define WPQdr_somDispatch SOMObject_somDispatch
#define WPQdr_somClassDispatch SOMObject_somClassDispatch
#define WPQdr_somCastObj SOMObject_somCastObj
#define WPQdr_somResetObj SOMObject_somResetObj
#define WPQdr_somDispatchV SOMObject_somDispatchV
#define WPQdr_somDispatchL SOMObject_somDispatchL
#define WPQdr_somDispatchA SOMObject_somDispatchA
#define WPQdr_somDispatchD SOMObject_somDispatchD
#define WPQdr_somPrintSelf SOMObject_somPrintSelf
#define WPQdr_somDumpSelf SOMObject_somDumpSelf
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_WPQdr_h */

#ifndef SOM_M_WPQdr_h
#define SOM_M_WPQdr_h


#include <som.h>

/*
 * -- This emitter normally treats Method Tokens as Thunks,
 * -- but the sc modifier "nothunks" was used, so somResolve will be called.
 */
#undef somresolve_
#define somresolve_(obj,mToken) (somResolve(obj,mToken))

/*
 * Define the class name as an object type
 */
#ifndef M_WPQdr
#define M_WPQdr SOMObject
#endif
#include <wptrans.h>

/*
 * Start of bindings for IDL types
 */


/*
 * End of bindings for IDL types.
 */

#define M_WPQdr_MajorVersion 1
#define M_WPQdr_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define M_WPQdrNewClass WPqdrc
#define M_WPQdrClassData WPqdrd
#define M_WPQdrCClassData WPqdrx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define M_WPQdr_classObj M_WPQdrClassData.classObject
#define _M_WPQdr M_WPQdr_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK M_WPQdrNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);

/*
 * Declare the class data structure
 */
SOMEXTERN struct M_WPQdrClassDataStructure {
	SOMClass *classObject;
} SOMDLINK M_WPQdrClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct M_WPQdrCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK M_WPQdrCClassData;

/*
 * New and Renew macros for M_WPQdr
 */
#define M_WPQdrNew() \
   ( _M_WPQdr ? \
	_somNew(_M_WPQdr) \
	: ( M_WPQdrNewClass(\
		M_WPQdr_MajorVersion, \
		M_WPQdr_MinorVersion),\
	   _somNew(_M_WPQdr)))
#define M_WPQdrRenew(buf) \
   ( _M_WPQdr ? \
	_somRenew(_M_WPQdr, buf) \
	: ( M_WPQdrNewClass(\
		M_WPQdr_MajorVersion, \
		M_WPQdr_MinorVersion),\
	   _somRenew(_M_WPQdr, buf)))

/*
 * Override method: wpclsQueryTitle
 */
#define M_WPQdr_wpclsQueryTitle(somSelf) \
	M_WPObject_wpclsQueryTitle(somSelf)

/*
 * Override method: wpclsQueryIcon
 */
#define M_WPQdr_wpclsQueryIcon(somSelf) \
	M_WPObject_wpclsQueryIcon(somSelf)

/*
 * Override method: wpclsQueryDefaultHelp
 */
#define M_WPQdr_wpclsQueryDefaultHelp(somSelf,pHelpPanelId,pszHelpLibrary) \
	M_WPObject_wpclsQueryDefaultHelp(somSelf,pHelpPanelId,pszHelpLibrary)

/*
 * Override method: wpclsQueryDefaultView
 */
#define M_WPQdr_wpclsQueryDefaultView(somSelf) \
	M_WPObject_wpclsQueryDefaultView(somSelf)

/*
 * Override method: wpclsQueryStyle
 */
#define M_WPQdr_wpclsQueryStyle(somSelf) \
	M_WPObject_wpclsQueryStyle(somSelf)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define M_WPQdr_wpclsObjectFromHandle M_WPObject_wpclsObjectFromHandle
#define M_WPQdr_wpclsCreateDefaultTemplates M_WPObject_wpclsCreateDefaultTemplates
#define M_WPQdr_wpclsInitData M_WPObject_wpclsInitData
#define M_WPQdr_wpclsMakeAwake M_WPObject_wpclsMakeAwake
#define M_WPQdr_wpclsNew M_WPObject_wpclsNew
#define M_WPQdr_wpclsQueryDetails M_WPObject_wpclsQueryDetails
#define M_WPQdr_wpclsQueryDetailsInfo M_WPObject_wpclsQueryDetailsInfo
#define M_WPQdr_wpclsQueryExtendedCriteria M_WPObject_wpclsQueryExtendedCriteria
#define M_WPQdr_wpclsQueryFolder M_WPObject_wpclsQueryFolder
#define M_WPQdr_wpclsQuerySearchInfo M_WPObject_wpclsQuerySearchInfo
#define M_WPQdr_wpclsUnInitData M_WPObject_wpclsUnInitData
#define M_WPQdr_wpclsFindObjectFirst M_WPObject_wpclsFindObjectFirst
#define M_WPQdr_wpclsFindObjectNext M_WPObject_wpclsFindObjectNext
#define M_WPQdr_wpclsFindObjectEnd M_WPObject_wpclsFindObjectEnd
#define M_WPQdr_wpclsSetError M_WPObject_wpclsSetError
#define M_WPQdr_wpclsQueryError M_WPObject_wpclsQueryError
#define M_WPQdr_wpclsQuerySettingsPageSize M_WPObject_wpclsQuerySettingsPageSize
#define M_WPQdr_wpclsQueryIconData M_WPObject_wpclsQueryIconData
#define M_WPQdr_wpclsQueryObject M_WPObject_wpclsQueryObject
#define M_WPQdr_wpclsQueryButtonAppearance M_WPObject_wpclsQueryButtonAppearance
#define M_WPQdr_wpclsDecUsage M_WPObject_wpclsDecUsage
#define M_WPQdr_wpclsIncUsage M_WPObject_wpclsIncUsage
#define M_WPQdr_wpclsInsertMultipleObjects M_WPObject_wpclsInsertMultipleObjects
#define M_WPQdr_wpclsFindOneObject M_WPObject_wpclsFindOneObject
#define M_WPQdr_wpclsSetSettingsPageSize M_WPObject_wpclsSetSettingsPageSize
#define M_WPQdr_wpclsSetIconData M_WPObject_wpclsSetIconData
#define M_WPQdr_wpclsSetIcon M_WPObject_wpclsSetIcon
#define M_WPQdr_wpclsRemoveObjects M_WPObject_wpclsRemoveObjects
#define M_WPQdr_somUninit SOMObject_somUninit
#define M_WPQdr_somClassReady SOMClass_somClassReady
#define M_WPQdr_somNew SOMClass_somNew
#define M_WPQdr_somRenew SOMClass_somRenew
#define M_WPQdr__get_somDataAlignment SOMClass__get_somDataAlignment
#define M_WPQdr__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define M_WPQdr__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define M_WPQdr__set_somDirectInitClasses SOMClass__set_somDirectInitClasses
#define M_WPQdr_somNewNoInit SOMClass_somNewNoInit
#define M_WPQdr_somRenewNoInit SOMClass_somRenewNoInit
#define M_WPQdr_somRenewNoZero SOMClass_somRenewNoZero
#define M_WPQdr_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define M_WPQdr_somAllocate SOMClass_somAllocate
#define M_WPQdr_somDeallocate SOMClass_somDeallocate
#define M_WPQdr__get_somClassAllocate SOMClass__get_somClassAllocate
#define M_WPQdr__get_somClassDeallocate SOMClass__get_somClassDeallocate
#define M_WPQdr_somGetInstanceInitMask SOMClass_somGetInstanceInitMask
#define M_WPQdr_somGetInstanceDestructionMask SOMClass_somGetInstanceDestructionMask
#define M_WPQdr_somGetInstanceAssignmentMask SOMClass_somGetInstanceAssignmentMask
#define M_WPQdr_somInitClass SOMClass_somInitClass
#define M_WPQdr_somInitMIClass SOMClass_somInitMIClass
#define M_WPQdr_somAddStaticMethod SOMClass_somAddStaticMethod
#define M_WPQdr_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define M_WPQdr_somOverrideSMethod SOMClass_somOverrideSMethod
#define M_WPQdr_somGetApplyStub SOMClass_somGetApplyStub
#define M_WPQdr_somGetClassData SOMClass_somGetClassData
#define M_WPQdr_somSetClassData SOMClass_somSetClassData
#define M_WPQdr_somGetClassMtab SOMClass_somGetClassMtab
#define M_WPQdr_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define M_WPQdr_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define M_WPQdr_somGetInstanceSize SOMClass_somGetInstanceSize
#define M_WPQdr_somGetInstanceToken SOMClass_somGetInstanceToken
#define M_WPQdr_somGetMemberToken SOMClass_somGetMemberToken
#define M_WPQdr_somGetMethodData SOMClass_somGetMethodData
#define M_WPQdr_somGetRdStub SOMClass_somGetRdStub
#define M_WPQdr_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define M_WPQdr_somGetMethodIndex SOMClass_somGetMethodIndex
#define M_WPQdr_somGetMethodToken SOMClass_somGetMethodToken
#define M_WPQdr_somGetName SOMClass_somGetName
#define M_WPQdr_somGetNthMethodData SOMClass_somGetNthMethodData
#define M_WPQdr_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define M_WPQdr_somGetNumMethods SOMClass_somGetNumMethods
#define M_WPQdr_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define M_WPQdr_somGetParent SOMClass_somGetParent
#define M_WPQdr_somGetParents SOMClass_somGetParents
#define M_WPQdr_somGetPClsMtab SOMClass_somGetPClsMtab
#define M_WPQdr_somGetPClsMtabs SOMClass_somGetPClsMtabs
#define M_WPQdr_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define M_WPQdr_somSetMethodDescriptor SOMClass_somSetMethodDescriptor
#define M_WPQdr_somFindMethod SOMClass_somFindMethod
#define M_WPQdr_somFindMethodOk SOMClass_somFindMethodOk
#define M_WPQdr_somFindSMethod SOMClass_somFindSMethod
#define M_WPQdr_somFindSMethodOk SOMClass_somFindSMethodOk
#define M_WPQdr_somLookupMethod SOMClass_somLookupMethod
#define M_WPQdr_somCheckVersion SOMClass_somCheckVersion
#define M_WPQdr_somDescendedFrom SOMClass_somDescendedFrom
#define M_WPQdr_somSupportsMethod SOMClass_somSupportsMethod
#define M_WPQdr_somDefinedMethod SOMClass_somDefinedMethod
#define M_WPQdr_somOverrideMtab SOMClass_somOverrideMtab
#define M_WPQdr_somDefaultInit SOMObject_somDefaultInit
#define M_WPQdr_somDestruct SOMObject_somDestruct
#define M_WPQdr_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define M_WPQdr_somDefaultAssign SOMObject_somDefaultAssign
#define M_WPQdr_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define M_WPQdr_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define M_WPQdr_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define M_WPQdr_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define M_WPQdr_somDefaultVAssign SOMObject_somDefaultVAssign
#define M_WPQdr_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define M_WPQdr_somInit SOMObject_somInit
#define M_WPQdr_somFree SOMObject_somFree
#define M_WPQdr_somGetClass SOMObject_somGetClass
#define M_WPQdr_somGetClassName SOMObject_somGetClassName
#define M_WPQdr_somGetSize SOMObject_somGetSize
#define M_WPQdr_somIsA SOMObject_somIsA
#define M_WPQdr_somIsInstanceOf SOMObject_somIsInstanceOf
#define M_WPQdr_somRespondsTo SOMObject_somRespondsTo
#define M_WPQdr_somDispatch SOMObject_somDispatch
#define M_WPQdr_somClassDispatch SOMObject_somClassDispatch
#define M_WPQdr_somCastObj SOMObject_somCastObj
#define M_WPQdr_somResetObj SOMObject_somResetObj
#define M_WPQdr_somDispatchV SOMObject_somDispatchV
#define M_WPQdr_somDispatchL SOMObject_somDispatchL
#define M_WPQdr_somDispatchA SOMObject_somDispatchA
#define M_WPQdr_somDispatchD SOMObject_somDispatchD
#define M_WPQdr_somPrintSelf SOMObject_somPrintSelf
#define M_WPQdr_somDumpSelf SOMObject_somDumpSelf
#define M_WPQdr_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_M_WPQdr_h */
