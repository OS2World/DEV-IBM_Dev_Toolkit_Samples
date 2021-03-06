ifndef __BSEDOS__
INCL_DOSINCLUDED	EQU	1

ifdef INCL_DOS
INCL_DOSPROCESS	EQU	1

INCL_DOSFILEMGR	EQU	1

INCL_DOSMEMMGR	EQU	1

INCL_DOSSEMAPHORES	EQU	1

INCL_DOSDATETIME	EQU	1

INCL_DOSMODULEMGR	EQU	1

INCL_DOSRESOURCES	EQU	1

INCL_DOSNLS	EQU	1

INCL_DOSEXCEPTIONS	EQU	1

INCL_DOSMISC	EQU	1

INCL_DOSMONITORS	EQU	1

INCL_DOSQUEUES	EQU	1

INCL_DOSSESMGR	EQU	1

INCL_DOSDEVICES	EQU	1

INCL_DOSNMPIPES	EQU	1

INCL_DOSPROFILE	EQU	1

INCL_DOSMVDM	EQU	1

endif 
ifdef INCL_ERRORS
INCL_DOSERRORS	EQU	1

endif 
IFTEMP00 = 0
IFDEF INCL_DOSPROCESS
IFTEMP00 = 1
ENDIF
IFNDEF INCL_NOCOMMON
IFTEMP00 = 1
ENDIF
IF IFTEMP00
EXIT_THREAD	EQU	0 
EXIT_PROCESS	EQU	1 
endif 
ifdef INCL_DOSPROCESS
INCLUDE bsetib.INC

THREADCREATE	STRUC
F150593_cbSize	DD	?
F150593_pTid	DD	?
F150593_pfnStart	DD	?
F150593_lParam	DD	?
F150593_lFlag	DD	?
F150593_pStack	DD	?
F150593_cbStack	DD	?
THREADCREATE	ENDS
PT_FULLSCREEN	EQU	0  
PT_REALMODE	EQU	1  
PT_WINDOWABLEVIO	EQU	2  
PT_PM	EQU	3  
PT_DETACHED	EQU	4  
PS_EXITLIST	EQU	1  
DCWA_PROCESS	EQU	0 
DCWA_PROCESSTREE	EQU	1 
DCWW_WAIT	EQU	0 
DCWW_NOWAIT	EQU	1 
CREATE_READY	EQU	0                    
CREATE_SUSPENDED	EQU	1 
STACK_SPARSE	EQU	0 
STACK_COMMITTED	EQU	2 

RESULTCODES	STRUC
resc_codeTerminate	DD	?
resc_codeResult	DD	?
RESULTCODES	ENDS

MPAFFINITY	STRUC
afnty_mask	DD	2 DUP (?)
MPAFFINITY	ENDS
AFNTY_THREAD	EQU	0 
AFNTY_SYSTEM	EQU	1 
ifndef DBG_INCL_DOSDEBUG
DBG_INCL_DOSDEBUG	EQU	1


uDB	STRUC
uDB_Pid	DD	?
uDB_Tid	DD	?
uDB_Cmd	DD	?
uDB_Value	DD	?
uDB_Addr	DD	?
uDB_Buffer	DD	?
uDB_Len	DD	?
uDB_Index	DD	?
uDB_MTE	DD	?
uDB_EAX	DD	?
uDB_ECX	DD	?
uDB_EDX	DD	?
uDB_EBX	DD	?
uDB_ESP	DD	?
uDB_EBP	DD	?
uDB_ESI	DD	?
uDB_EDI	DD	?
uDB_EFlags	DD	?
uDB_EIP	DD	?
uDB_CSLim	DD	?
uDB_CSBase	DD	?
uDB_CSAcc	DB	?
uDB_CSAtr	DB	?
uDB_CS	DW	?
uDB_DSLim	DD	?
uDB_DSBase	DD	?
uDB_DSAcc	DB	?
uDB_DSAtr	DB	?
uDB_DS	DW	?
uDB_ESLim	DD	?
uDB_ESBase	DD	?
uDB_ESAcc	DB	?
uDB_ESAtr	DB	?
uDB_ES	DW	?
uDB_FSLim	DD	?
uDB_FSBase	DD	?
uDB_FSAcc	DB	?
uDB_FSAtr	DB	?
uDB_FS	DW	?
uDB_GSLim	DD	?
uDB_GSBase	DD	?
uDB_GSAcc	DB	?
uDB_GSAtr	DB	?
uDB_GS	DW	?
uDB_SSLim	DD	?
uDB_SSBase	DD	?
uDB_SSAcc	DB	?
uDB_SSAtr	DB	?
uDB_SS	DW	?
uDB	ENDS
DBG_C_Null	EQU	0        
DBG_C_ReadMem	EQU	1        
DBG_C_ReadMem_I	EQU	1        
DBG_C_ReadMem_D	EQU	2        
DBG_C_ReadReg	EQU	3        
DBG_C_WriteMem	EQU	4        
DBG_C_WriteMem_I	EQU	4        
DBG_C_WriteMem_D	EQU	5        
DBG_C_WriteReg	EQU	6        
DBG_C_Go	EQU	7        
DBG_C_Term	EQU	8        
DBG_C_SStep	EQU	9        
DBG_C_Stop	EQU	10       
DBG_C_Freeze	EQU	11       
DBG_C_Resume	EQU	12       
DBG_C_NumToAddr	EQU	13       
DBG_C_ReadCoRegs	EQU	14       
DBG_C_WriteCoRegs	EQU	15       
DBG_C_ThrdStat	EQU	17       
DBG_C_MapROAlias	EQU	18       
DBG_C_MapRWAlias	EQU	19       
DBG_C_UnMapAlias	EQU	20       
DBG_C_Connect	EQU	21       
DBG_C_ReadMemBuf	EQU	22       
DBG_C_WriteMemBuf	EQU	23       
DBG_C_SetWatch	EQU	24       
DBG_C_ClearWatch	EQU	25       
DBG_C_RangeStep	EQU	26       
DBG_C_Continue	EQU	27       
DBG_C_AddrToObject	EQU	28       
DBG_C_XchgOpcode	EQU	29       
DBG_C_LinToSel	EQU	30       
DBG_C_SelToLin	EQU	31       
DBG_C_RegisterSemList	EQU	32       
DBG_C_Attach	EQU	33       
DBG_C_Detach	EQU	34       
DBG_C_RegDebug	EQU	35       
DBG_C_QueryDebug	EQU	36       
JIT_REG_INHERIT	EQU	00010000H 
JIT_REG_NOINHERIT	EQU	00020000H 
JIT_REG_DETACH	EQU	00030000H 
JIT_REG_FG	EQU	00040000H 
DBGQ_JIT_GLOBAL	EQU	10000000H 
DBGQ_JIT_PERPROC	EQU	20000000H 
DBG_N_Success	EQU	0       
DBG_N_Error	EQU	-1      
DBG_N_ProcTerm	EQU	-6      
DBG_N_Exception	EQU	-7      
DBG_N_ModuleLoad	EQU	-8      
DBG_N_CoError	EQU	-9      
DBG_N_ThreadTerm	EQU	-10     
DBG_N_AsyncStop	EQU	-11     
DBG_N_NewProc	EQU	-12     
DBG_N_AliasFree	EQU	-13     
DBG_N_Watchpoint	EQU	-14     
DBG_N_ThreadCreate	EQU	-15     
DBG_N_ModuleFree	EQU	-16     
DBG_N_RangeStep	EQU	-17     

TStat	STRUC
TS_DbgState	DB	?
TS_TState	DB	?
TS_TPriority	DW	?
TStat	ENDS
DBG_D_Thawed	EQU	0 
DBG_D_Frozen	EQU	1 
DBG_T_Runnable	EQU	0 
DBG_T_Suspended	EQU	1 
DBG_T_Blocked	EQU	2 
DBG_T_CritSec	EQU	3 
DBG_CO_387	EQU	1 
DBG_LEN_387	EQU	108 
DBG_L_386	EQU	1 
DBG_W_Global	EQU	00000001H 
DBG_W_Local	EQU	00000002H 
DBG_W_Execute	EQU	00010000H 
DBG_W_Write	EQU	00020000H 
DBG_W_ReadWrite	EQU	00030000H 
DBG_O_OBJMTE	EQU	10000000H 
DBG_X_PRE_FIRST_CHANCE	EQU	00000000H 
DBG_X_FIRST_CHANCE	EQU	00000001H 
DBG_X_LAST_CHANCE	EQU	00000002H 
DBG_X_STACK_INVALID	EQU	00000003H 
endif 
TC_EXIT	EQU	0 
TC_HARDERROR	EQU	1 
TC_TRAP	EQU	2 
TC_KILLPROCESS	EQU	3 
TC_EXCEPTION	EQU	4 
EXLST_ADD	EQU	1 
EXLST_REMOVE	EQU	2 
EXLST_EXIT	EQU	3 
EXEC_SYNC	EQU	0 
EXEC_ASYNC	EQU	1 
EXEC_ASYNCRESULT	EQU	2 
EXEC_TRACE	EQU	3 
EXEC_BACKGROUND	EQU	4 
EXEC_LOAD	EQU	5 
EXEC_ASYNCRESULTDB	EQU	6 
PRTYS_PROCESS	EQU	0 
PRTYS_PROCESSTREE	EQU	1 
PRTYS_THREAD	EQU	2 
PRTYC_NOCHANGE	EQU	0 
PRTYC_IDLETIME	EQU	1 
PRTYC_REGULAR	EQU	2 
PRTYC_TIMECRITICAL	EQU	3 
PRTYC_FOREGROUNDSERVER	EQU	4 
PRTYD_MINIMUM	EQU	-31 
PRTYD_MAXIMUM	EQU	31 
DKP_PROCESSTREE	EQU	0 
DKP_PROCESS	EQU	1 
endif 
ifndef INCL_SAADEFS
CCHMAXPATH	EQU	260 
CCHMAXPATHCOMP	EQU	256 
endif  
IFTEMP01 = 0
IFDEF INCL_DOSFILEMGR
IFTEMP01 = 1
ENDIF
IFNDEF INCL_NOCOMMON
IFTEMP01 = 1
ENDIF
IF IFTEMP01
FILE_BEGIN	EQU	0000H    
FILE_CURRENT	EQU	0001H    
FILE_END	EQU	0002H    
FILE_SECTOR	EQU	8000H    
LISTIO_READ	EQU	0004H   
LISTIO_WRITE	EQU	0008H   
LISTIO_ORDERED	EQU	0001H   
LISTIO_UNORDERED	EQU	0002H   
HDIR_SYSTEM	EQU	1      
HDIR_CREATE	EQU	(-1 )    
DCPY_EXISTING	EQU	0001H    
DCPY_APPEND	EQU	0002H    
DCPY_FAILEAS	EQU	0004H    
FILE_NORMAL	EQU	0000H 
FILE_READONLY	EQU	0001H 
FILE_HIDDEN	EQU	0002H 
FILE_SYSTEM	EQU	0004H 
FILE_DIRECTORY	EQU	0010H 
FILE_ARCHIVED	EQU	0020H 
FILE_IGNORE	EQU	10000H      
MUST_HAVE_READONLY	EQU	( (FILE_READONLY   SHL  8 )  OR  FILE_READONLY  )
MUST_HAVE_HIDDEN	EQU	( (FILE_HIDDEN     SHL  8 )  OR  FILE_HIDDEN    )
MUST_HAVE_SYSTEM	EQU	( (FILE_SYSTEM     SHL  8 )  OR  FILE_SYSTEM    )
MUST_HAVE_DIRECTORY	EQU	( (FILE_DIRECTORY  SHL  8 )  OR  FILE_DIRECTORY )
MUST_HAVE_ARCHIVED	EQU	( (FILE_ARCHIVED   SHL  8 )  OR  FILE_ARCHIVED  )
FILE_EXISTED	EQU	0001H 
FILE_CREATED	EQU	0002H 
FILE_TRUNCATED	EQU	0003H 
FILE_OPEN	EQU	0001H 
FILE_TRUNCATE	EQU	0002H 
FILE_CREATE	EQU	0010H 
OPEN_ACTION_FAIL_IF_EXISTS	EQU	0000H   
OPEN_ACTION_OPEN_IF_EXISTS	EQU	0001H   
OPEN_ACTION_REPLACE_IF_EXISTS	EQU	0002H   
OPEN_ACTION_FAIL_IF_NEW	EQU	0000H   
OPEN_ACTION_CREATE_IF_NEW	EQU	0010H   
OPEN_ACCESS_READONLY	EQU	0000H   
OPEN_ACCESS_WRITEONLY	EQU	0001H   
OPEN_ACCESS_READWRITE	EQU	0002H   
OPEN_SHARE_DENYREADWRITE	EQU	0010H   
OPEN_SHARE_DENYWRITE	EQU	0020H   
OPEN_SHARE_DENYREAD	EQU	0030H   
OPEN_SHARE_DENYNONE	EQU	0040H   
OPEN_FLAGS_NOINHERIT	EQU	0080H   
OPEN_FLAGS_NO_LOCALITY	EQU	0000H   
OPEN_FLAGS_SEQUENTIAL	EQU	0100H   
OPEN_FLAGS_RANDOM	EQU	0200H   
OPEN_FLAGS_RANDOMSEQUENTIAL	EQU	0300H   
OPEN_FLAGS_NO_CACHE	EQU	1000H   
OPEN_FLAGS_FAIL_ON_ERROR	EQU	2000H   
OPEN_FLAGS_WRITE_THROUGH	EQU	4000H   
OPEN_FLAGS_DASD	EQU	8000H   
OPEN_FLAGS_NONSPOOLED	EQU	00040000H 
OPEN_SHARE_DENYLEGACY	EQU	10000000H    
OPEN_FLAGS_PROTECTED_HANDLE	EQU	40000000H 
SEARCH_PATH	EQU	0000H 
SEARCH_CUR_DIRECTORY	EQU	0001H 
SEARCH_ENVIRONMENT	EQU	0002H 
SEARCH_IGNORENETERRS	EQU	0004H 
FIL_STANDARD	EQU	1      
FIL_QUERYEASIZE	EQU	2      
FIL_QUERYEASFROMLIST	EQU	3      
FIL_STANDARDL	EQU	11      
FIL_QUERYEASIZEL	EQU	12      
FIL_QUERYEASFROMLISTL	EQU	13      
FIL_QUERYFULLNAME	EQU	5      
FS_ATTACH	EQU	0      
FS_DETACH	EQU	1      
FS_SPOOLATTACH	EQU	2      
FS_SPOOLDETACH	EQU	3      
FSCTL_HANDLE	EQU	1      
FSCTL_PATHNAME	EQU	2      
FSCTL_FSDNAME	EQU	3      
FSCTL_ERROR_INFO	EQU	1   
FSCTL_MAX_EASIZE	EQU	2   
FSCTL_GET_NEXT_ROUTE_NAME	EQU	3   
FSCTL_DAEMON_QUERY	EQU	4   
FSCTL_QUERY_COMPLETE	EQU	0000H 
FSCTL_QUERY_AGAIN	EQU	0001H 

EASIZEBUF	STRUC
easizebuf_cbMaxEASize	DW	?
easizebuf_cbMaxEAListSize	DD	?
EASIZEBUF	ENDS

ROUTENAMEBUF	STRUC
routenamebuf_hRouteHandle	DD	?
routenamebuf_szRouteName	DB	?
ROUTENAMEBUF	ENDS

FSDTHREAD	STRUC
fsdthread_usFunc	DW	?
fsdthread_usStackSize	DW	?
fsdthread_ulPriorityClass	DD	?
fsdthread_lPriorityLevel	DD	?
FSDTHREAD	ENDS

FSDDAEMON	STRUC
fsddaemon_usNumThreads	DW	?
fsddaemon_usMoreFlag	DW	?
fsddaemon_usCallInstance	DW	?
fsddaemon_tdThrds	DB	SIZE FSDTHREAD * 16 DUP (?)
FSDDAEMON	ENDS
FSAIL_QUERYNAME	EQU	1      
FSAIL_DEVNUMBER	EQU	2      
FSAIL_DRVNUMBER	EQU	3      
FSAT_CHARDEV	EQU	1      
FSAT_PSEUDODEV	EQU	2      
FSAT_LOCALDRV	EQU	3      
FSAT_REMOTEDRV	EQU	4      

FSQBUFFER	STRUC
fsqbuf_iType	DW	?
fsqbuf_cbName	DW	?
fsqbuf_szName	DB	1 DUP (?)
fsqbuf_cbFSDName	DW	?
fsqbuf_szFSDName	DB	1 DUP (?)
fsqbuf_cbFSAData	DW	?
fsqbuf_rgFSAData	DB	1 DUP (?)
FSQBUFFER	ENDS

FSQBUFFER2	STRUC
fsqbuf2_iType	DW	?
fsqbuf2_cbName	DW	?
fsqbuf2_cbFSDName	DW	?
fsqbuf2_cbFSAData	DW	?
fsqbuf2_szName	DB	1 DUP (?)
fsqbuf2_szFSDName	DB	1 DUP (?)
fsqbuf2_rgFSAData	DB	1 DUP (?)
FSQBUFFER2	ENDS

SPOOLATTACH	STRUC
spool_hNmPipe	DW	?
spool_ulKey	DD	?
SPOOLATTACH	ENDS
FSIL_ALLOC	EQU	1      
FSIL_VOLSER	EQU	2      
FHT_DISKFILE	EQU	0000H    
FHT_CHRDEV	EQU	0001H    
FHT_PIPE	EQU	0002H    
FHB_DSKREMOTE	EQU	8000H    
FHB_CHRDEVREMOTE	EQU	8000H    
FHB_PIPEREMOTE	EQU	8000H    
ifndef INCL_SAADEFS
ifdef __IBMC__

FTIME	STRUC
	ftime_fs	DW  ?
FTIME	ENDS
ftime_twosecs	EQU	01fh
ftime_minutes	EQU	07e0h
ftime_hours	EQU	0f800h
else

FTIME	STRUC
	ftime_fs	DW  ?
FTIME	ENDS
ftime_twosecs	EQU	01fh
ftime_minutes	EQU	07e0h
ftime_hours	EQU	0f800h
endif
ifdef __IBMC__

FDATE	STRUC
	fdate_fs	DW  ?
FDATE	ENDS
fdate_day	EQU	01fh
fdate_month	EQU	01e0h
fdate_year	EQU	0fe00h
else

FDATE	STRUC
	fdate_fs	DW  ?
FDATE	ENDS
fdate_day	EQU	01fh
fdate_month	EQU	01e0h
fdate_year	EQU	0fe00h
endif
endif 

VOLUMELABEL	STRUC
vol_cch	DB	?
vol_szVolLabel	DB	12 DUP (?)
VOLUMELABEL	ENDS

FSINFO	STRUC
fsinf_fdateCreation	DB	SIZE FDATE DUP (?)
fsinf_ftimeCreation	DB	SIZE FTIME DUP (?)
fsinf_vol	DB	SIZE VOLUMELABEL DUP (?)
FSINFO	ENDS
HANDTYPE_FILE	EQU	0000H 
HANDTYPE_DEVICE	EQU	0001H 
HANDTYPE_PIPE	EQU	0002H 
HANDTYPE_PROTECTED	EQU	4000H 
HANDTYPE_NETWORK	EQU	8000H 

FILELOCK	STRUC
flock_lOffset	DD	?
flock_lRange	DD	?
FILELOCK	ENDS

FILELOCKL	STRUC
flock_lOffset	DB	SIZE LONGLONG DUP (?)
flock_lRange	DB	SIZE LONGLONG DUP (?)
FILELOCKL	ENDS
ifndef __HEV__            
__HEV__	EQU	1

endif
ifndef INCL_SAADEFS

FILEFINDBUF	STRUC
findbuf_fdateCreation	DB	SIZE FDATE DUP (?)
findbuf_ftimeCreation	DB	SIZE FTIME DUP (?)
findbuf_fdateLastAccess	DB	SIZE FDATE DUP (?)
findbuf_ftimeLastAccess	DB	SIZE FTIME DUP (?)
findbuf_fdateLastWrite	DB	SIZE FDATE DUP (?)
findbuf_ftimeLastWrite	DB	SIZE FTIME DUP (?)
findbuf_cbFile	DD	?
findbuf_cbFileAlloc	DD	?
findbuf_attrFile	DW	?
findbuf_cchName	DB	?
findbuf_achName	DB	CCHMAXPATHCOMP DUP (?)
FILEFINDBUF	ENDS

FILEFINDBUF2	STRUC
findbuf2_fdateCreation	DB	SIZE FDATE DUP (?)
findbuf2_ftimeCreation	DB	SIZE FTIME DUP (?)
findbuf2_fdateLastAccess	DB	SIZE FDATE DUP (?)
findbuf2_ftimeLastAccess	DB	SIZE FTIME DUP (?)
findbuf2_fdateLastWrite	DB	SIZE FDATE DUP (?)
findbuf2_ftimeLastWrite	DB	SIZE FTIME DUP (?)
findbuf2_cbFile	DD	?
findbuf2_cbFileAlloc	DD	?
findbuf2_attrFile	DW	?
findbuf2_cbList	DD	?
findbuf2_cchName	DB	?
findbuf2_achName	DB	CCHMAXPATHCOMP DUP (?)
FILEFINDBUF2	ENDS

FILEFINDBUF3	STRUC
findbuf3_oNextEntryOffset	DD	?
findbuf3_fdateCreation	DB	SIZE FDATE DUP (?)
findbuf3_ftimeCreation	DB	SIZE FTIME DUP (?)
findbuf3_fdateLastAccess	DB	SIZE FDATE DUP (?)
findbuf3_ftimeLastAccess	DB	SIZE FTIME DUP (?)
findbuf3_fdateLastWrite	DB	SIZE FDATE DUP (?)
findbuf3_ftimeLastWrite	DB	SIZE FTIME DUP (?)
findbuf3_cbFile	DD	?
findbuf3_cbFileAlloc	DD	?
findbuf3_attrFile	DD	?
findbuf3_cchName	DB	?
findbuf3_achName	DB	CCHMAXPATHCOMP DUP (?)
FILEFINDBUF3	ENDS

FILEFINDBUF4	STRUC
findbuf4_oNextEntryOffset	DD	?
findbuf4_fdateCreation	DB	SIZE FDATE DUP (?)
findbuf4_ftimeCreation	DB	SIZE FTIME DUP (?)
findbuf4_fdateLastAccess	DB	SIZE FDATE DUP (?)
findbuf4_ftimeLastAccess	DB	SIZE FTIME DUP (?)
findbuf4_fdateLastWrite	DB	SIZE FDATE DUP (?)
findbuf4_ftimeLastWrite	DB	SIZE FTIME DUP (?)
findbuf4_cbFile	DD	?
findbuf4_cbFileAlloc	DD	?
findbuf4_attrFile	DD	?
findbuf4_cbList	DD	?
findbuf4_cchName	DB	?
findbuf4_achName	DB	CCHMAXPATHCOMP DUP (?)
FILEFINDBUF4	ENDS

FILEFINDBUF3L	STRUC
findbuf3l_oNextEntryOffset	DD	?
findbuf3l_fdateCreation	DB	SIZE FDATE DUP (?)
findbuf3l_ftimeCreation	DB	SIZE FTIME DUP (?)
findbuf3l_fdateLastAccess	DB	SIZE FDATE DUP (?)
findbuf3l_ftimeLastAccess	DB	SIZE FTIME DUP (?)
findbuf3l_fdateLastWrite	DB	SIZE FDATE DUP (?)
findbuf3l_ftimeLastWrite	DB	SIZE FTIME DUP (?)
findbuf3l_cbFile	DB	SIZE LONGLONG DUP (?)
findbuf3l_cbFileAlloc	DB	SIZE LONGLONG DUP (?)
findbuf3l_attrFile	DD	?
findbuf3l_cchName	DB	?
findbuf3l_achName	DB	CCHMAXPATHCOMP DUP (?)
FILEFINDBUF3L	ENDS

FILEFINDBUF4L	STRUC
findbuf4l_oNextEntryOffset	DD	?
findbuf4l_fdateCreation	DB	SIZE FDATE DUP (?)
findbuf4l_ftimeCreation	DB	SIZE FTIME DUP (?)
findbuf4l_fdateLastAccess	DB	SIZE FDATE DUP (?)
findbuf4l_ftimeLastAccess	DB	SIZE FTIME DUP (?)
findbuf4l_fdateLastWrite	DB	SIZE FDATE DUP (?)
findbuf4l_ftimeLastWrite	DB	SIZE FTIME DUP (?)
findbuf4l_cbFile	DB	SIZE LONGLONG DUP (?)
findbuf4l_cbFileAlloc	DB	SIZE LONGLONG DUP (?)
findbuf4l_attrFile	DD	?
findbuf4l_cbList	DD	?
findbuf4l_cchName	DB	?
findbuf4l_achName	DB	CCHMAXPATHCOMP DUP (?)
FILEFINDBUF4L	ENDS

GEA	STRUC
gea_cbName	DB	?
gea_szName	DB	1 DUP (?)
GEA	ENDS

GEALIST	STRUC
geal_cbList	DD	?
geal_list	DB	SIZE GEA * 1 DUP (?)
GEALIST	ENDS

FEA	STRUC
fea_fEA	DB	?
fea_cbName	DB	?
fea_cbValue	DW	?
FEA	ENDS
FEA_NEEDEA	EQU	80H      

FEALIST	STRUC
feal_cbList	DD	?
feal_list	DB	SIZE FEA * 1 DUP (?)
FEALIST	ENDS

EAOP	STRUC
eaop_fpGEAList	DD	?
eaop_fpFEAList	DD	?
eaop_oError	DD	?
EAOP	ENDS

FEA2	STRUC
fea2_oNextEntryOffset	DD	?
fea2_fEA	DB	?
fea2_cbName	DB	?
fea2_cbValue	DW	?
fea2_szName	DB	1 DUP (?)
FEA2	ENDS

FEA2LIST	STRUC
fea2l_cbList	DD	?
fea2l_list	DB	SIZE FEA2 * 1 DUP (?)
FEA2LIST	ENDS

GEA2	STRUC
gea2_oNextEntryOffset	DD	?
gea2_cbName	DB	?
gea2_szName	DB	1 DUP (?)
GEA2	ENDS

GEA2LIST	STRUC
gea2l_cbList	DD	?
gea2l_list	DB	SIZE GEA2 * 1 DUP (?)
GEA2LIST	ENDS

EAOP2	STRUC
eaop2_fpGEA2List	DD	?
eaop2_fpFEA2List	DD	?
eaop2_oError	DD	?
EAOP2	ENDS
EAT_BINARY	EQU	0FFFEH       
EAT_ASCII	EQU	0FFFDH       
EAT_BITMAP	EQU	0FFFBH       
EAT_METAFILE	EQU	0FFFAH       
EAT_ICON	EQU	0FFF9H       
EAT_EA	EQU	0FFEEH       
EAT_MVMT	EQU	0FFDFH       
EAT_MVST	EQU	0FFDEH       
EAT_ASN1	EQU	0FFDDH       
endif  

LISTIO_CB	STRUC
LIO_hFile	DD	?
LIO_CmdFlag	DD	?
LIO_Offset	DD	?
LIO_pBuffer	DD	?
LIO_NumBytes	DD	?
LIO_Actual	DD	?
LIO_RetCode	DD	?
LIO_Reserved	DD	?
LIO_Reserved2	DD	3 DUP (?)
LIO_Reserved3	DD	2 DUP (?)
LISTIO_CB	ENDS

LISTIO_CBL	STRUC
LIO_hFile	DD	?
LIO_CmdFlag	DD	?
LIO_Offset	DB	SIZE LONGLONG DUP (?)
LIO_pBuffer	DD	?
LIO_NumBytes	DD	?
LIO_Actual	DD	?
LIO_RetCode	DD	?
LIO_Reserved	DD	?
LIO_Reserved2	DD	3 DUP (?)
LIO_Reserved3	DD	2 DUP (?)
LISTIO_CBL	ENDS

FILESTATUS	STRUC
fsts_fdateCreation	DB	SIZE FDATE DUP (?)
fsts_ftimeCreation	DB	SIZE FTIME DUP (?)
fsts_fdateLastAccess	DB	SIZE FDATE DUP (?)
fsts_ftimeLastAccess	DB	SIZE FTIME DUP (?)
fsts_fdateLastWrite	DB	SIZE FDATE DUP (?)
fsts_ftimeLastWrite	DB	SIZE FTIME DUP (?)
fsts_cbFile	DD	?
fsts_cbFileAlloc	DD	?
fsts_attrFile	DW	?
FILESTATUS	ENDS

FILESTATUS2	STRUC
fsts2_fdateCreation	DB	SIZE FDATE DUP (?)
fsts2_ftimeCreation	DB	SIZE FTIME DUP (?)
fsts2_fdateLastAccess	DB	SIZE FDATE DUP (?)
fsts2_ftimeLastAccess	DB	SIZE FTIME DUP (?)
fsts2_fdateLastWrite	DB	SIZE FDATE DUP (?)
fsts2_ftimeLastWrite	DB	SIZE FTIME DUP (?)
fsts2_cbFile	DD	?
fsts2_cbFileAlloc	DD	?
fsts2_attrFile	DW	?
fsts2_cbList	DD	?
FILESTATUS2	ENDS

FILESTATUS3	STRUC
fsts3_fdateCreation	DB	SIZE FDATE DUP (?)
fsts3_ftimeCreation	DB	SIZE FTIME DUP (?)
fsts3_fdateLastAccess	DB	SIZE FDATE DUP (?)
fsts3_ftimeLastAccess	DB	SIZE FTIME DUP (?)
fsts3_fdateLastWrite	DB	SIZE FDATE DUP (?)
fsts3_ftimeLastWrite	DB	SIZE FTIME DUP (?)
fsts3_cbFile	DD	?
fsts3_cbFileAlloc	DD	?
fsts3_attrFile	DD	?
FILESTATUS3	ENDS

FILESTATUS4	STRUC
fsts4_fdateCreation	DB	SIZE FDATE DUP (?)
fsts4_ftimeCreation	DB	SIZE FTIME DUP (?)
fsts4_fdateLastAccess	DB	SIZE FDATE DUP (?)
fsts4_ftimeLastAccess	DB	SIZE FTIME DUP (?)
fsts4_fdateLastWrite	DB	SIZE FDATE DUP (?)
fsts4_ftimeLastWrite	DB	SIZE FTIME DUP (?)
fsts4_cbFile	DD	?
fsts4_cbFileAlloc	DD	?
fsts4_attrFile	DD	?
fsts4_cbList	DD	?
FILESTATUS4	ENDS

FILESTATUS3L	STRUC
fsts3L_fdateCreation	DB	SIZE FDATE DUP (?)
fsts3L_ftimeCreation	DB	SIZE FTIME DUP (?)
fsts3L_fdateLastAccess	DB	SIZE FDATE DUP (?)
fsts3L_ftimeLastAccess	DB	SIZE FTIME DUP (?)
fsts3L_fdateLastWrite	DB	SIZE FDATE DUP (?)
fsts3L_ftimeLastWrite	DB	SIZE FTIME DUP (?)
fsts3L_cbFile	DB	SIZE LONGLONG DUP (?)
fsts3L_cbFileAlloc	DB	SIZE LONGLONG DUP (?)
fsts3L_attrFile	DD	?
FILESTATUS3L	ENDS

FILESTATUS4L	STRUC
fsts4L_fdateCreation	DB	SIZE FDATE DUP (?)
fsts4L_ftimeCreation	DB	SIZE FTIME DUP (?)
fsts4L_fdateLastAccess	DB	SIZE FDATE DUP (?)
fsts4L_ftimeLastAccess	DB	SIZE FTIME DUP (?)
fsts4L_fdateLastWrite	DB	SIZE FDATE DUP (?)
fsts4L_ftimeLastWrite	DB	SIZE FTIME DUP (?)
fsts4L_cbFile	DB	SIZE LONGLONG DUP (?)
fsts4L_cbFileAlloc	DB	SIZE LONGLONG DUP (?)
fsts4L_attrFile	DD	?
fsts4L_cbList	DD	?
FILESTATUS4L	ENDS

FSALLOCATE	STRUC
fsalloc_idFileSystem	DD	?
fsalloc_cSectorUnit	DD	?
fsalloc_cUnit	DD	?
fsalloc_cUnitAvail	DD	?
fsalloc_cbSector	DW	?
FSALLOCATE	ENDS
DosOpen2	EQU	DosOpen
DosFindFirst2	EQU	DosFindFirst
DosQFHandState	EQU	DosQueryFHState
DosProtectQFHandState	EQU	DosProtectQueryFHState
DosSetFHandState	EQU	DosSetFHState
DosProtectSetFHandState	EQU	DosProtectSetFHState
DosQHandType	EQU	DosQueryHType
DosQFSAttach	EQU	DosQueryFSAttach
DosNewSize	EQU	DosSetFileSize
DosProtectNewSize	EQU	DosProtectSetFileSize
DosBufReset	EQU	DosResetBuffer
DosChgFilePtr	EQU	DosSetFilePtr
DosProtectChgFilePtr	EQU	DosProtectSetFilePtr
DosMkDir	EQU	DosCreateDir
DosMkDir2	EQU	DosCreateDir
DosRmDir	EQU	DosDeleteDir
DosSelectDisk	EQU	DosSetDefaultDisk
DosQCurDisk	EQU	DosQueryCurrentDisk
DosChDir	EQU	DosSetCurrentDir
DosQCurDir	EQU	DosQueryCurrentDir
DosQFSInfo	EQU	DosQueryFSInfo
DosQVerify	EQU	DosQueryVerify
DosQFileInfo	EQU	DosQueryFileInfo
DosProtectQFileInfo	EQU	DosProtectQueryFileInfo
DosQPathInfo	EQU	DosQueryPathInfo
DSPI_WRTTHRU	EQU	10H     

DENA1	STRUC
_dena1_reserved	DB	?
_dena1_cbName	DB	?
_dena1_cbValue	DW	?
_dena1_szName	DB	1 DUP (?)
DENA1	ENDS
ENUMEA_LEVEL_NO_VALUE	EQU	1       
ENUMEA_REFTYPE_FHANDLE	EQU	0        
ENUMEA_REFTYPE_PATH	EQU	1        
ENUMEA_REFTYPE_MAX	EQU	ENUMEA_REFTYPE_PATH
endif 
IFTEMP02 = 0
IFDEF INCL_DOSMEMMGR
IFTEMP02 = 1
ENDIF
IFNDEF INCL_NOCOMMON
IFTEMP02 = 1
ENDIF
IF IFTEMP02
DosSubAlloc	EQU	DosSubAllocMem
DOSSUBALLOC	EQU	DosSubAllocMem
DosSubFree	EQU	DosSubFreeMem
DOSSUBFREE	EQU	DosSubFreeMem
DosSubSet	EQU	DosSubSetMem
DOSSUBSET	EQU	DosSubSetMem
DosSubUnset	EQU	DosSubUnsetMem
DOSSUBUNSET	EQU	DosSubUnsetMem
INCLUDE bsememf.INC
endif 
IFTEMP03 = 0
IFDEF INCL_DOSSEMAPHORES
IFTEMP03 = 1
ENDIF
IFNDEF INCL_NOCOMMON
IFTEMP03 = 1
ENDIF
IF IFTEMP03
DC_SEM_SHARED	EQU	01H    
DCMW_WAIT_ANY	EQU	02H    
DCMW_WAIT_ALL	EQU	04H    
DCE_AUTORESET	EQU	1000H   
DCE_POSTONE	EQU	0800H   
SEM_INDEFINITE_WAIT	EQU	-1 
SEM_IMMEDIATE_RETURN	EQU	0 
ifndef __HSEM__
endif

PSEMRECORD	STRUC
psr_hsemCur	DD	?
psr_ulUser	DD	?
PSEMRECORD	ENDS
endif 
ifdef INCL_DOSSEMAPHORES
ifndef __HEV__            
__HEV__	EQU	1

endif
endif 
IFTEMP04 = 0
IFDEF INCL_DOSDATETIME
IFTEMP04 = 1
ENDIF
IFNDEF INCL_NOCOMMON
IFTEMP04 = 1
ENDIF
IF IFTEMP04

DATETIME	STRUC
date_hours	DB	?
date_minutes	DB	?
date_seconds	DB	?
date_hundredths	DB	?
date_day	DB	?
date_month	DB	?
date_year	DW	?
date_timezone	DW	?
date_weekday	DB	?
DATETIME	ENDS
endif 
ifdef INCL_DOSDATETIME
DosTimerAsync	EQU	DosAsyncTimer
DosTimerStart	EQU	DosStartTimer
DosTimerStop	EQU	DosStopTimer
endif 
ifdef INCL_DOSMODULEMGR
PT_16BIT	EQU	0 
PT_32BIT	EQU	1 
HW_CFG_MCA	EQU	00000001H 
HW_CFG_EISA	EQU	00000002H 
HW_CFG_ABIOS_SUPPORTED	EQU	00000004H 
HW_CFG_ABIOS_PRESENT	EQU	00000008H 
HW_CFG_PCI	EQU	00000010H 
HW_CFG_IBM_ABIOS	EQU	00000000H   
HW_CFG_OEM_ABIOS	EQU	00000020H 
HW_CFG_PENTIUM_CPU	EQU	00000040H 
ifdef __IBMC__

QMRESULT	STRUC
qmres_seg	DW	?
qmres_hmte	DW	?
qmres_name	DB	CCHMAXPATH DUP (?)
QMRESULT	ENDS
endif
endif 
IFTEMP05 = 0
IFDEF INCL_DOSRESOURCES
IFTEMP05 = 1
ENDIF
IFNDEF INCL_NOCOMMON
IFTEMP05 = 1
ENDIF
IF IFTEMP05
RT_POINTER	EQU	1    
RT_BITMAP	EQU	2    
RT_MENU	EQU	3    
RT_DIALOG	EQU	4    
RT_STRING	EQU	5    
RT_FONTDIR	EQU	6    
RT_FONT	EQU	7    
RT_ACCELTABLE	EQU	8    
RT_RCDATA	EQU	9    
RT_MESSAGE	EQU	10   
RT_DLGINCLUDE	EQU	11   
RT_VKEYTBL	EQU	12   
RT_KEYTBL	EQU	13   
RT_CHARTBL	EQU	14   
RT_DISPLAYINFO	EQU	15   
RT_FKASHORT	EQU	16   
RT_FKALONG	EQU	17   
RT_HELPTABLE	EQU	18   
RT_HELPSUBTABLE	EQU	19   
RT_FDDIR	EQU	20   
RT_FD	EQU	21   
RT_MAX	EQU	22   
RT_RESNAMES	EQU	255  
RF_ORDINALID	EQU	80000000H      
endif 
ifdef INCL_DOSRESOURCES
DosGetResource2	EQU	DosGetResource
endif 
ifdef INCL_DOSNLS

COUNTRYCODE	STRUC
ctryc_country	DD	?
ctryc_codepage	DD	?
COUNTRYCODE	ENDS

COUNTRYINFO	STRUC
ctryi_country	DD	?
ctryi_codepage	DD	?
ctryi_fsDateFmt	DD	?
ctryi_szCurrency	DB	5 DUP (?)
ctryi_szThousandsSeparator	DB	2 DUP (?)
ctryi_szDecimal	DB	2 DUP (?)
ctryi_szDateSeparator	DB	2 DUP (?)
ctryi_szTimeSeparator	DB	2 DUP (?)
ctryi_fsCurrencyFmt	DB	?
ctryi_cDecimalPlace	DB	?
ctryi_fsTimeFmt	DB	?
ctryi_abReserved1	DW	2 DUP (?)
ctryi_szDataSeparator	DB	2 DUP (?)
ctryi_abReserved2	DW	5 DUP (?)
COUNTRYINFO	ENDS
DosGetCtryInfo	EQU	DosQueryCtryInfo
DosGetDBCSEv	EQU	DosQueryDBCSEnv
DosCaseMap	EQU	DosMapCase
DosGetCollate	EQU	DosQueryCollate
DosGetCp	EQU	DosQueryCp
DosSetProcCp	EQU	DosSetProcessCp
endif 
ifdef INCL_DOSEXCEPTIONS
SIG_UNSETFOCUS	EQU	0 
SIG_SETFOCUS	EQU	1 
INCLUDE bsexcpt.INC
endif 
ifdef INCL_DOSQUEUES
IFTEMP06 = 0
IFDEF INCL_DOSFILEMGR
IFTEMP06 = 1
ENDIF
IFNDEF INCL_NOCOMMON
IFTEMP06 = 1
ENDIF
IF IFTEMP06

REQUESTDATA	STRUC
reqqdata_pid	DD	?
reqqdata_ulData	DD	?
REQUESTDATA	ENDS
QUE_FIFO	EQU	0 
QUE_LIFO	EQU	1 
QUE_PRIORITY	EQU	2 
QUE_NOCONVERT_ADDRESS	EQU	0 
QUE_CONVERT_ADDRESS	EQU	4 
else 
error PHFILE not defined - define INCL_DOSFILEMGR or undefine INCL_NOCOMMON
endif 
endif 
ifdef INCL_DOSMISC
DSP_IMPLIEDCUR	EQU	1  
DSP_PATHREF	EQU	2  
DSP_IGNORENETERR	EQU	4  
QSV_MAX_PATH_LENGTH	EQU	1 
Q_MAX_PATH_LENGTH	EQU	QSV_MAX_PATH_LENGTH
QSV_MAX_TEXT_SESSIONS	EQU	2 
QSV_MAX_PM_SESSIONS	EQU	3 
QSV_MAX_VDM_SESSIONS	EQU	4 
QSV_BOOT_DRIVE	EQU	5  
QSV_DYN_PRI_VARIATION	EQU	6  
QSV_MAX_WAIT	EQU	7  
QSV_MIN_SLICE	EQU	8  
QSV_MAX_SLICE	EQU	9  
QSV_PAGE_SIZE	EQU	10 
QSV_VERSION_MAJOR	EQU	11 
QSV_VERSION_MINOR	EQU	12 
QSV_VERSION_REVISION	EQU	13  
QSV_MS_COUNT	EQU	14  
QSV_TIME_LOW	EQU	15  
QSV_TIME_HIGH	EQU	16  
QSV_TOTPHYSMEM	EQU	17  
QSV_TOTRESMEM	EQU	18  
QSV_TOTAVAILMEM	EQU	19  
QSV_MAXPRMEM	EQU	20  
QSV_MAXSHMEM	EQU	21  
QSV_TIMER_INTERVAL	EQU	22  
QSV_MAX_COMP_LENGTH	EQU	23  
QSV_FOREGROUND_FS_SESSION	EQU	24  
QSV_FOREGROUND_PROCESS	EQU	25  
QSV_NUMPROCESSORS	EQU	26 
QSV_MAXHPRMEM	EQU	27 
QSV_MAXHSHMEM	EQU	28 
QSV_MAXPROCESSES	EQU	29 
QSV_VIRTUALADDRESSLIMIT	EQU	30 
QSV_INT10ENABLED	EQU	31 
QSV_MAX	EQU	QSV_INT10ENABLED
FERR_DISABLEHARDERR	EQU	00000000H      
FERR_ENABLEHARDERR	EQU	00000001H      
FERR_ENABLEEXCEPTION	EQU	00000000H      
FERR_DISABLEEXCEPTION	EQU	00000002H      
DDP_DISABLEPROCDUMP	EQU	00000000H      
DDP_ENABLEPROCDUMP	EQU	00000001H      
DDP_PERFORMPROCDUMP	EQU	00000002H      
SPU_DISABLESUPPRESSION	EQU	00000000H      
SPU_ENABLESUPPRESSION	EQU	00000001H      
SPU_NOLOGCHANGE	EQU	00000002H      
SIS_MMIOADDR	EQU	0 
SIS_MEC_TABLE	EQU	1 
SIS_SYS_LOG	EQU	2 
SIS_PERF_MEC_TABLE	EQU	3 
BEGIN_LIBPATH	EQU	1 
END_LIBPATH	EQU	2 
LIBPATHSTRICT	EQU	3 
DosInsMessage	EQU	DosInsertMessage
DosQSysInfo	EQU	DosQuerySysInfo
ifdef __IBMC__
endif
endif 
ifdef INCL_DOSSESMGR

STARTDATA	STRUC
stdata_Length	DW	?
stdata_Related	DW	?
stdata_FgBg	DW	?
stdata_TraceOpt	DW	?
stdata_PgmTitle	DD	?
stdata_PgmName	DD	?
stdata_PgmInputs	DD	?
stdata_TermQ	DD	?
stdata_Environment	DD	?
stdata_InheritOpt	DW	?
stdata_SessionType	DW	?
stdata_IconFile	DD	?
stdata_PgmHandle	DD	?
stdata_PgmControl	DW	?
stdata_InitXPos	DW	?
stdata_InitYPos	DW	?
stdata_InitXSize	DW	?
stdata_InitYSize	DW	?
stdata_Reserved	DW	?
stdata_ObjectBuffer	DD	?
stdata_ObjectBuffLen	DD	?
STARTDATA	ENDS
SSF_RELATED_INDEPENDENT	EQU	0 
SSF_RELATED_CHILD	EQU	1 
SSF_FGBG_FORE	EQU	0 
SSF_FGBG_BACK	EQU	1 
SSF_TRACEOPT_NONE	EQU	0 
SSF_TRACEOPT_TRACE	EQU	1 
SSF_TRACEOPT_TRACEALL	EQU	2 
SSF_INHERTOPT_SHELL	EQU	0 
SSF_INHERTOPT_PARENT	EQU	1 
SSF_TYPE_DEFAULT	EQU	0 
SSF_TYPE_FULLSCREEN	EQU	1 
SSF_TYPE_WINDOWABLEVIO	EQU	2 
SSF_TYPE_PM	EQU	3 
SSF_TYPE_VDM	EQU	4 
SSF_TYPE_GROUP	EQU	5 
SSF_TYPE_DLL	EQU	6 
SSF_TYPE_WINDOWEDVDM	EQU	7 
SSF_TYPE_PDD	EQU	8 
SSF_TYPE_VDD	EQU	9 
SSF_CONTROL_VISIBLE	EQU	0000H 
SSF_CONTROL_INVISIBLE	EQU	0001H 
SSF_CONTROL_MAXIMIZE	EQU	0002H 
SSF_CONTROL_MINIMIZE	EQU	0004H 
SSF_CONTROL_NOAUTOCLOSE	EQU	0008H 
SSF_CONTROL_SETPOS	EQU	8000H 

STATUSDATA	STRUC
stsdata_Length	DW	?
stsdata_SelectInd	DW	?
stsdata_BondInd	DW	?
STATUSDATA	ENDS
SET_SESSION_UNCHANGED	EQU	0 
SET_SESSION_SELECTABLE	EQU	1 
SET_SESSION_NON_SELECTABLE	EQU	2 
SET_SESSION_BOND	EQU	1 
SET_SESSION_NO_BOND	EQU	2 
STOP_SESSION_SPECIFIED	EQU	0 
STOP_SESSION_ALL	EQU	1 
endif 
IFTEMP07 = 0
IFDEF INCL_DOSSESMGR
IFTEMP07 = 1
ENDIF
IFDEF INCL_DOSFILEMGR
IFTEMP07 = 1
ENDIF
IF IFTEMP07
FAPPTYP_NOTSPEC	EQU	0000H 
FAPPTYP_NOTWINDOWCOMPAT	EQU	0001H 
FAPPTYP_WINDOWCOMPAT	EQU	0002H 
FAPPTYP_WINDOWAPI	EQU	0003H 
FAPPTYP_BOUND	EQU	0008H 
FAPPTYP_DLL	EQU	0010H 
FAPPTYP_DOS	EQU	0020H 
FAPPTYP_PHYSDRV	EQU	0040H   
FAPPTYP_VIRTDRV	EQU	0080H   
FAPPTYP_PROTDLL	EQU	0100H   
FAPPTYP_WINDOWSREAL	EQU	0200H   
FAPPTYP_WINDOWSPROT	EQU	0400H   
FAPPTYP_WINDOWSPROT31	EQU	1000H   
FAPPTYP_32BIT	EQU	4000H 
FAPPTYP_EXETYPE	EQU	FAPPTYP_WINDOWAPI
FAPPTYP_RESERVED	EQU	 NOT (FAPPTYP_WINDOWAPI  OR  FAPPTYP_BOUND  OR  FAPPTYP_DLL  OR  FAPPTYP_DOS  OR  FAPPTYP_PHYSDRV  OR  FAPPTYP_VIRTDRV  OR  FAPPTYP_PROTDLL  OR  FAPPTYP_32BIT)
ifdef INCL_DOSFILEMGR
EAT_APPTYP_PMAPI	EQU	00H             
EAT_APPTYP_DOS	EQU	01H             
EAT_APPTYP_PMW	EQU	02H             
EAT_APPTYP_NOPMW	EQU	03H             
EAT_APPTYP_EXETYPE	EQU	03H             
EAT_APPTYP_RESERVED	EQU	 NOT (EAT_APPTYP_EXETYPE)
endif 
endif 
ifdef INCL_DOSDEVICES
DosDevIOCtl2	EQU	DosDevIOCtl
DEVINFO_PRINTER	EQU	0        
DEVINFO_RS232	EQU	1        
DEVINFO_FLOPPY	EQU	2        
DEVINFO_COPROCESSOR	EQU	3        
DEVINFO_SUBMODEL	EQU	4        
DEVINFO_MODEL	EQU	5        
DEVINFO_ADAPTER	EQU	6        
INFO_COUNT_PARTITIONABLE_DISKS	EQU	1        
INFO_GETIOCTLHANDLE	EQU	2        
INFO_FREEIOCTLHANDLE	EQU	3        
endif 
ifdef INCL_DOSNMPIPES

AVAILDATA	STRUC
AVAILDATA_cbpipe	DW	?
AVAILDATA_cbmessage	DW	?
AVAILDATA	ENDS

PIPEINFO	STRUC
nmpinf_cbOut	DW	?
nmpinf_cbIn	DW	?
nmpinf_cbMaxInst	DB	?
nmpinf_cbCurInst	DB	?
nmpinf_cbName	DB	?
nmpinf_szName	DB	1 DUP (?)
PIPEINFO	ENDS

PIPESEMSTATE	STRUC
nmpsmst_fStatus	DB	?
nmpsmst_fFlag	DB	?
nmpsmst_usKey	DW	?
nmpsmst_usAvail	DW	?
PIPESEMSTATE	ENDS
NP_INDEFINITE_WAIT	EQU	-1 
NP_DEFAULT_WAIT	EQU	0 
NP_STATE_DISCONNECTED	EQU	0001H 
NP_STATE_LISTENING	EQU	0002H 
NP_STATE_CONNECTED	EQU	0003H 
NP_STATE_CLOSING	EQU	0004H 
NP_ACCESS_INBOUND	EQU	0000H 
NP_ACCESS_OUTBOUND	EQU	0001H 
NP_ACCESS_DUPLEX	EQU	0002H 
NP_INHERIT	EQU	0000H 
NP_NOINHERIT	EQU	0080H 
NP_WRITEBEHIND	EQU	0000H 
NP_NOWRITEBEHIND	EQU	4000H 
NP_READMODE_BYTE	EQU	0000H 
NP_READMODE_MESSAGE	EQU	0100H 
NP_TYPE_BYTE	EQU	0000H 
NP_TYPE_MESSAGE	EQU	0400H 
NP_END_CLIENT	EQU	0000H 
NP_END_SERVER	EQU	4000H 
NP_WAIT	EQU	0000H 
NP_NOWAIT	EQU	8000H 
NP_UNLIMITED_INSTANCES	EQU	00FFH 
NPSS_EOI	EQU	0      
NPSS_RDATA	EQU	1      
NPSS_WSPACE	EQU	2      
NPSS_CLOSE	EQU	3      
NPSS_WAIT	EQU	01H   
NP_NBLK	EQU	8000H  
NP_SERVER	EQU	4000H  
NP_WMESG	EQU	0400H  
NP_RMESG	EQU	0100H  
NP_ICOUNT	EQU	00FFH  
NP_DISCONNECTED	EQU	1          
NP_LISTENING	EQU	2          
NP_CONNECTED	EQU	3          
NP_CLOSING	EQU	4          
endif 
ifdef INCL_DOSPROFILE
PROF_ORDINAL	EQU	133 
PROF_SYSTEM	EQU	0 
PROF_USER	EQU	1 
PROF_USEDD	EQU	2 
PROF_KERNEL	EQU	4 
PROF_VERBOSE	EQU	8 
PROF_ENABLE	EQU	16 
PROF_ALLOC	EQU	0 
PROF_CLEAR	EQU	1 
PROF_ON	EQU	2 
PROF_OFF	EQU	3 
PROF_DUMP	EQU	4 
PROF_FREE	EQU	5 
PROF_SHIFT	EQU	2 
PROF_MOD_NAME_SIZE	EQU	10 
PROF_END_OF_DATA	EQU	13 
QS_PROCESS	EQU	0001H 
QS_SEMAPHORE	EQU	0002H 
QS_MTE	EQU	0004H 
QS_FILESYS	EQU	0008H 
QS_SHMEMORY	EQU	0010H 
QS_DISK	EQU	0020H 
QS_HWCONFIG	EQU	0040H 
QS_NAMEDPIPE	EQU	0080H 
QS_THREAD	EQU	0100H 
QS_MODVER	EQU	0200H 
QS_SUPPORTED	EQU	(QS_PROCESS OR QS_SEMAPHORE OR QS_MTE OR QS_FILESYS OR QS_SHMEMORY OR QS_MODVER)
PADSHORT	EQU	USHORT        pad_sh
PADCHAR	EQU	UCHAR         pad_ch
QS_END	EQU	0        

QSGREC	STRUC
qsGrec_cThrds	DD	?
qsGrec_c32SSem	DD	?
qsGrec_cMFTNodes	DD	?
QSGREC	ENDS

QSTREC	STRUC
qsTrec_RecType	DD	?
qsTrec_tid	DW	?
qsTrec_slot	DW	?
qsTrec_sleepid	DD	?
qsTrec_priority	DD	?
qsTrec_systime	DD	?
qsTrec_usertime	DD	?
qsTrec_state	DB	?
qsTrec_PADCHAR	DB	SIZE PADCHAR DUP (?)
qsTrec_PADSHORT	DB	SIZE PADSHORT DUP (?)
QSTREC	ENDS

QSPREC	STRUC
qsPrec_RecType	DD	?
qsPrec_pThrdRec	DD	?
qsPrec_pid	DW	?
qsPrec_ppid	DW	?
qsPrec_type	DD	?
qsPrec_stat	DD	?
qsPrec_sgid	DD	?
qsPrec_hMte	DW	?
qsPrec_cTCB	DW	?
qsPrec_c32PSem	DD	?
qsPrec_p32SemRec	DD	?
qsPrec_c16Sem	DW	?
qsPrec_cLib	DW	?
qsPrec_cShrMem	DW	?
qsPrec_cFH	DW	?
qsPrec_p16SemRec	DD	?
qsPrec_pLibRec	DD	?
qsPrec_pShrMemRec	DD	?
qsPrec_pFSRec	DD	?
QSPREC	ENDS
QS_SYSSEM_WAITING	EQU	01H                
QS_SYSSEM_MUXWAITING	EQU	02H             
QS_SYSSEM_OWNER_DIED	EQU	04H             
QS_SYSSEM_EXCLUSIVE	EQU	08H              
QS_SYSSEM_NAME_CLEANUP	EQU	10H           
QS_SYSSEM_THREAD_OWNER_DIED	EQU	20H      
QS_SYSSEM_EXITLIST_OWNER	EQU	40H         

QSS16REC	STRUC
qsS16rec_NextRec	DD	?
qsS16rec_SysSemOwner	DW	?
qsS16rec_SysSemFlag	DB	?
qsS16rec_SysSemRefCnt	DB	?
qsS16rec_SysSemProcCnt	DB	?
qsS16rec_SysSemPad	DB	?
qsS16rec_pad_sh	DW	?
qsS16rec_SemPtr	DW	?
qsS16rec_SemName	DB	?
QSS16REC	ENDS

QSS16HEADREC	STRUC
qsS16Hrec_SRecType	DD	?
qsS16Hrec_SpNextRec	DD	?
qsS16Hrec_S32SemRec	DD	?
qsS16Hrec_S16TblOff	DD	?
qsS16Hrec_pSem16Rec	DD	?
QSS16HEADREC	ENDS

QSMREC	STRUC
qsMrec_MemNextRec	DD	?
qsMrec_hmem	DW	?
qsMrec_sel	DW	?
qsMrec_refcnt	DW	?
qsMrec_Memname	DB	?
QSMREC	ENDS
QS_DC_SEM_SHARED	EQU	0001H    
QS_DCMW_WAIT_ANY	EQU	0002H    
QS_DCMW_WAIT_ALL	EQU	0004H    
QS_DCM_MUTEX_SEM	EQU	0008H    
QS_DCE_EVENT_SEM	EQU	0010H    
QS_DCMW_MUX_SEM	EQU	0020H    
QS_DC_SEM_PM	EQU	0040H    
QS_DE_POSTED	EQU	0040H    
QS_DM_OWNER_DIED	EQU	0080H    
QS_DMW_MTX_MUX	EQU	0100H    
QS_DHO_SEM_OPEN	EQU	0200H    
QS_DE_16BIT_MW	EQU	0400H    
QS_DCE_POSTONE	EQU	0800H    
QS_DCE_AUTORESET	EQU	1000H    

QSOPENQ	STRUC
qsopenq_pidOpener	DW	?
qsopenq_OpenCt	DW	?
QSOPENQ	ENDS

QSEVENT	STRUC
qsevent_pMuxQ	DD	?
qsevent_PostCt	DW	?
QSEVENT	ENDS

QSMUTEX	STRUC
qsmutex_pMuxQ	DD	?
qsmutex_ReqCt	DW	?
qsmutex_SlotNum	DW	?
QSMUTEX	ENDS

QSMUX	STRUC
qsmux_pSemRec	DD	?
qsmux_cSemRec	DW	?
qsmux_WaitCt	DW	?
QSMUX	ENDS

   QSHUN UNION
   qsshun_qsSEvt    DB  SIZE QSEVENT DUP (?)
   qsshun_qsSMtx    DB  SIZE QSMUTEX DUP (?)
   qsshun_qsSMux    DB  SIZE QSMUX DUP (?)
   QSHUN ENDS
   

QSS32REC	STRUC
qsS32rec_pNextRec	DD	?
qsS32rec_flags	DW	?
qsS32rec_PADSHORT	DB	SIZE PADSHORT DUP (?)
qsS32rec_pName	DD	?
qsS32rec_qsh	DB	SIZE QSHUN DUP (?)
qsS32rec_blockid	DD	?
qsS32rec_index	DW	?
qsS32rec_OpenCt	DW	?
qsS32rec_OpenQ	DB	SIZE QSOPENQ * 1 DUP (?)
QSS32REC	ENDS

QSLOBJREC	STRUC
qsLOrec_oaddr	DD	?
qsLOrec_osize	DD	?
qsLOrec_oflags	DD	?
QSLOBJREC	ENDS

QSLREC	STRUC
qsLrec_pNextRec	DD	?
qsLrec_hmte	DW	?
qsLrec_fFlat	DW	?
qsLrec_ctImpMod	DD	?
qsLrec_ctObj	DD	?
qsLrec_pObjInfo	DD	?
qsLrec_pName	DD	?
QSLREC	ENDS

QSEXLREC	STRUC
qsELrec_next	DD	?
qsELrec_hndmod	DW	?
qsELrec_pid	DW	?
qsELrec_type	DW	?
qsELrec_refcnt	DD	?
qsELrec_segcnt	DD	?
qsELrec__reserved_	DD	?
qsELrec_name	DD	?
qsELrec_ModuleVersion	DD	?
qsELrec_ShortModName	DD	?
qsELrec_modref	DD	?
QSEXLREC	ENDS

QSSFT	STRUC
qsSft_sfn	DW	?
qsSft_refcnt	DW	?
qsSft_flags	DW	?
qsSft_flags2	DW	?
qsSft_mode	DW	?
qsSft_mode2	DW	?
qsSft_size	DD	?
qsSft_hVPB	DW	?
qsSft_attr	DW	?
qsSft_PADSHORT	DB	SIZE PADSHORT DUP (?)
QSSFT	ENDS

QSFREC	STRUC
qsFrec_RecType	DD	?
qsFrec_pNextRec	DD	?
qsFrec_ctSft	DD	?
qsFrec_pSft	DD	?
QSFREC	ENDS

QSPTRREC	STRUC
qsPRec_pGlobalRec	DD	?
qsPRec_pProcRec	DD	?
qsPRec_p16SemRec	DD	?
qsPRec_p32SemRec	DD	?
qsPRec_pMemRec	DD	?
qsPRec_pLibRec	DD	?
qsPRec_pShrMemRec	DD	?
qsPRec_pFSRec	DD	?
QSPTRREC	ENDS
ifdef INCL_32  
endif
endif 
ifdef INCL_DOSMVDM
endif 
ifdef INCL_DOSSPINLOCK
PROC_OFFLINE	EQU	00000000H       
PROC_ONLINE	EQU	00000001H       
endif
ifdef INCL_BDCALLS
INCLUDE bdcalls.INC
endif 
endif 
