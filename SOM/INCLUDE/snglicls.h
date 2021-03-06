
/*
 * This file was generated by the SOM Compiler.
 * FileName: snglicls.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *    COMPONENT_NAME: somu
 * 
 *    ORIGINS: 27
 * 
 * 
 *    10H9767, 10H9769  (C) COPYRIGHT International Business Machines Corp. 1992,1994
 *    All Rights Reserved
 *    Licensed Materials - Property of IBM
 *    US Government Users Restricted Rights - Use, duplication or
 *    disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 * 
 */


#ifndef SOM_SOMMSingleInstance_h
#define SOM_SOMMSingleInstance_h


#include <som.h>

/*
 * -- This emitter treats Method Tokens as Thunks by default.
 * -- Use the sc modifier "nothunks" to change this default
 */
#undef somresolve_
#define somresolve_(obj,mToken) ((somMethodProc*)((void)obj, mToken))

/*
 * Define the class name as an object type
 */
#ifndef SOMMSingleInstance
#define SOMMSingleInstance SOMObject
#endif
/*
 *  This class is a metaclass for classes which wish to enforce a
 *  single instance rule.  That is, classes which specify this class
 *  as their metaclass will only be allowed to have a single instance.
 * 
 *  For example, if a class named dog specified this class as its
 *  metaclass, only one dog object could be instantiated. Repeated
 *  calls to _somNew on the dog class would simply return the same
 *  dog repeatedly.
 * 
 *  There are two ways to retrieve the single intance of the using
 *  class:
 * 
 *   1) Invoke sommGetSingleInstance on the class object of the using class.
 *      This is the preferred way.
 * 
 *   2) Invoke somNew or somNewNoInit on the class object of the using class.
 * 
 */
#include <somcls.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */

/*
 * End of bindings for IDL types.
 */

#define SOMMSingleInstance_MajorVersion 2
#define SOMMSingleInstance_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define SOMMSingleInstanceNewClass c
#pragma linkage(c, system)
#define SOMMSingleInstanceClassData d
#define SOMMSingleInstanceCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define SOMMSingleInstance_classObj SOMMSingleInstanceClassData.classObject
#define _SOMMSingleInstance SOMMSingleInstance_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK SOMMSingleInstanceNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(SOMMSingleInstanceNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct SOMMSingleInstanceClassDataStructure {
	SOMClass *classObject;
	somMToken sommGetSingleInstance;
	somMToken sommFreeSingleInstance;
} SOMDLINK SOMMSingleInstanceClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct SOMMSingleInstanceCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK SOMMSingleInstanceCClassData;

/*
 * New and Renew macros for SOMMSingleInstance
 */
#define SOMMSingleInstanceNew() \
   ( _SOMMSingleInstance ? \
	_somNew(_SOMMSingleInstance) \
	: ( SOMMSingleInstanceNewClass(\
		SOMMSingleInstance_MajorVersion, \
		SOMMSingleInstance_MinorVersion),\
	   _somNew(_SOMMSingleInstance)))
#define SOMMSingleInstanceRenew(buf) \
   ( _SOMMSingleInstance ? \
	_somRenew(_SOMMSingleInstance, buf) \
	: ( SOMMSingleInstanceNewClass(\
		SOMMSingleInstance_MajorVersion, \
		SOMMSingleInstance_MinorVersion),\
	   _somRenew(_SOMMSingleInstance, buf)))

/*
 * New Method: sommGetSingleInstance
 */
typedef SOMObject*   SOMLINK somTP_SOMMSingleInstance_sommGetSingleInstance(SOMMSingleInstance *somSelf, Environment *ev);
#pragma linkage(somTP_SOMMSingleInstance_sommGetSingleInstance, system)
typedef somTP_SOMMSingleInstance_sommGetSingleInstance *somTD_SOMMSingleInstance_sommGetSingleInstance;
/*
 *  Returns the single instance of the using class.
 *  If there isn't one, then it creates one first with somNew.
 */
#define somMD_SOMMSingleInstance_sommGetSingleInstance "::SOMMSingleInstance::sommGetSingleInstance"
#define SOMMSingleInstance_sommGetSingleInstance(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMMSingleInstance, sommGetSingleInstance) \
	(somSelf,ev))
#ifndef SOMGD_sommGetSingleInstance
    #if (defined(_sommGetSingleInstance) || defined(__sommGetSingleInstance))
        #undef _sommGetSingleInstance
        #undef __sommGetSingleInstance
        #define SOMGD_sommGetSingleInstance 1
    #else
        #define _sommGetSingleInstance SOMMSingleInstance_sommGetSingleInstance
    #endif /* _sommGetSingleInstance */
#endif /* SOMGD_sommGetSingleInstance */

/*
 * New Method: sommFreeSingleInstance
 */
typedef void   SOMLINK somTP_SOMMSingleInstance_sommFreeSingleInstance(SOMMSingleInstance *somSelf, Environment *ev);
#pragma linkage(somTP_SOMMSingleInstance_sommFreeSingleInstance, system)
typedef somTP_SOMMSingleInstance_sommFreeSingleInstance *somTD_SOMMSingleInstance_sommFreeSingleInstance;
/*
 *  If there isn't one, then the method does nothing.
 *  Frees single instance of the class
 */
#define somMD_SOMMSingleInstance_sommFreeSingleInstance "::SOMMSingleInstance::sommFreeSingleInstance"
#define SOMMSingleInstance_sommFreeSingleInstance(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMMSingleInstance, sommFreeSingleInstance) \
	(somSelf,ev))
#ifndef SOMGD_sommFreeSingleInstance
    #if (defined(_sommFreeSingleInstance) || defined(__sommFreeSingleInstance))
        #undef _sommFreeSingleInstance
        #undef __sommFreeSingleInstance
        #define SOMGD_sommFreeSingleInstance 1
    #else
        #define _sommFreeSingleInstance SOMMSingleInstance_sommFreeSingleInstance
    #endif /* _sommFreeSingleInstance */
#endif /* SOMGD_sommFreeSingleInstance */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define SOMMSingleInstance__get_somDataAlignment SOMClass__get_somDataAlignment
#define SOMMSingleInstance__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define SOMMSingleInstance__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define SOMMSingleInstance_somNew SOMClass_somNew
#define SOMMSingleInstance_somNewNoInit SOMClass_somNewNoInit
#define SOMMSingleInstance_somRenew SOMClass_somRenew
#define SOMMSingleInstance_somRenewNoInit SOMClass_somRenewNoInit
#define SOMMSingleInstance_somRenewNoZero SOMClass_somRenewNoZero
#define SOMMSingleInstance_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define SOMMSingleInstance_somAllocate SOMClass_somAllocate
#define SOMMSingleInstance_somDeallocate SOMClass_somDeallocate
#define SOMMSingleInstance_somInitClass SOMClass_somInitClass
#define SOMMSingleInstance_somInitMIClass SOMClass_somInitMIClass
#define SOMMSingleInstance_somAddStaticMethod SOMClass_somAddStaticMethod
#define SOMMSingleInstance_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define SOMMSingleInstance_somOverrideSMethod SOMClass_somOverrideSMethod
#define SOMMSingleInstance_somClassReady SOMClass_somClassReady
#define SOMMSingleInstance_somGetApplyStub SOMClass_somGetApplyStub
#define SOMMSingleInstance_somGetClassData SOMClass_somGetClassData
#define SOMMSingleInstance_somSetClassData SOMClass_somSetClassData
#define SOMMSingleInstance_somGetClassMtab SOMClass_somGetClassMtab
#define SOMMSingleInstance_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define SOMMSingleInstance_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define SOMMSingleInstance_somGetInstanceSize SOMClass_somGetInstanceSize
#define SOMMSingleInstance_somGetInstanceToken SOMClass_somGetInstanceToken
#define SOMMSingleInstance_somGetMemberToken SOMClass_somGetMemberToken
#define SOMMSingleInstance_somGetMethodData SOMClass_somGetMethodData
#define SOMMSingleInstance_somGetRdStub SOMClass_somGetRdStub
#define SOMMSingleInstance_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define SOMMSingleInstance_somGetMethodIndex SOMClass_somGetMethodIndex
#define SOMMSingleInstance_somGetMethodToken SOMClass_somGetMethodToken
#define SOMMSingleInstance_somGetName SOMClass_somGetName
#define SOMMSingleInstance_somGetNthMethodData SOMClass_somGetNthMethodData
#define SOMMSingleInstance_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define SOMMSingleInstance_somGetNumMethods SOMClass_somGetNumMethods
#define SOMMSingleInstance_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define SOMMSingleInstance_somGetParent SOMClass_somGetParent
#define SOMMSingleInstance_somGetParents SOMClass_somGetParents
#define SOMMSingleInstance_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define SOMMSingleInstance_somFindMethod SOMClass_somFindMethod
#define SOMMSingleInstance_somFindMethodOk SOMClass_somFindMethodOk
#define SOMMSingleInstance_somFindSMethod SOMClass_somFindSMethod
#define SOMMSingleInstance_somFindSMethodOk SOMClass_somFindSMethodOk
#define SOMMSingleInstance_somLookupMethod SOMClass_somLookupMethod
#define SOMMSingleInstance_somCheckVersion SOMClass_somCheckVersion
#define SOMMSingleInstance_somDescendedFrom SOMClass_somDescendedFrom
#define SOMMSingleInstance_somSupportsMethod SOMClass_somSupportsMethod
#define SOMMSingleInstance_somDefinedMethod SOMClass_somDefinedMethod
#define SOMMSingleInstance_somOverrideMtab SOMClass_somOverrideMtab
#define SOMMSingleInstance_somDefaultInit SOMObject_somDefaultInit
#define SOMMSingleInstance_somDestruct SOMObject_somDestruct
#define SOMMSingleInstance_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define SOMMSingleInstance_somDefaultAssign SOMObject_somDefaultAssign
#define SOMMSingleInstance_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define SOMMSingleInstance_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define SOMMSingleInstance_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define SOMMSingleInstance_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define SOMMSingleInstance_somDefaultVAssign SOMObject_somDefaultVAssign
#define SOMMSingleInstance_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define SOMMSingleInstance_somInit SOMObject_somInit
#define SOMMSingleInstance_somFree SOMObject_somFree
#define SOMMSingleInstance_somUninit SOMObject_somUninit
#define SOMMSingleInstance_somGetClass SOMObject_somGetClass
#define SOMMSingleInstance_somGetClassName SOMObject_somGetClassName
#define SOMMSingleInstance_somGetSize SOMObject_somGetSize
#define SOMMSingleInstance_somIsA SOMObject_somIsA
#define SOMMSingleInstance_somIsInstanceOf SOMObject_somIsInstanceOf
#define SOMMSingleInstance_somRespondsTo SOMObject_somRespondsTo
#define SOMMSingleInstance_somDispatch SOMObject_somDispatch
#define SOMMSingleInstance_somClassDispatch SOMObject_somClassDispatch
#define SOMMSingleInstance_somCastObj SOMObject_somCastObj
#define SOMMSingleInstance_somResetObj SOMObject_somResetObj
#define SOMMSingleInstance_somDispatchV SOMObject_somDispatchV
#define SOMMSingleInstance_somDispatchL SOMObject_somDispatchL
#define SOMMSingleInstance_somDispatchA SOMObject_somDispatchA
#define SOMMSingleInstance_somDispatchD SOMObject_somDispatchD
#define SOMMSingleInstance_somPrintSelf SOMObject_somPrintSelf
#define SOMMSingleInstance_somDumpSelf SOMObject_somDumpSelf
#define SOMMSingleInstance_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_SOMMSingleInstance_h */
