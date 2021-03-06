DEV_INCLUDED	EQU	1

ifdef INCL_ERRORS 
INCL_DEVERRORS	EQU	1

endif 
ifdef INCL_DDIDEFS 
INCL_DEV	EQU	1

endif 
ifdef INCL_SAADEFS 
INCL_DEV	EQU	1

endif 
IFTEMP00 = 0
IFDEF INCL_DEV
IFTEMP00 = 1
ENDIF
IFNDEF INCL_NOCOMMON
IFTEMP00 = 1
ENDIF
IF IFTEMP00
DEV_ERROR	EQU	0 
DEV_OK	EQU	1 
DEV_BAD_PARAMETERS	EQU	2 
DEV_WARNING	EQU	3 
DEV_PROP_BUF_TOO_SMALL	EQU	4 
DEV_ITEM_BUF_TOO_SMALL	EQU	5 
DEV_INV_INP_JOBPROPERTIES	EQU	6 
OD_SCREEN	EQU	0 
OD_QUEUED	EQU	2 
OD_DIRECT	EQU	5 
OD_INFO	EQU	6 
OD_METAFILE	EQU	7 
OD_MEMORY	EQU	8 
OD_METAFILE_NOQUERY	EQU	9 
CAPS_FAMILY	EQU	0 
CAPS_IO_CAPS	EQU	1 
CAPS_TECHNOLOGY	EQU	2 
CAPS_DRIVER_VERSION	EQU	3 
CAPS_WIDTH	EQU	4       
CAPS_HEIGHT	EQU	5       
CAPS_WIDTH_IN_CHARS	EQU	6 
CAPS_HEIGHT_IN_CHARS	EQU	7 
CAPS_HORIZONTAL_RESOLUTION	EQU	8       
CAPS_VERTICAL_RESOLUTION	EQU	9       
CAPS_CHAR_WIDTH	EQU	10       
CAPS_CHAR_HEIGHT	EQU	11       
CAPS_SMALL_CHAR_WIDTH	EQU	12       
CAPS_SMALL_CHAR_HEIGHT	EQU	13       
CAPS_COLORS	EQU	14 
CAPS_COLOR_PLANES	EQU	15 
CAPS_COLOR_BITCOUNT	EQU	16 
CAPS_COLOR_TABLE_SUPPORT	EQU	17 
CAPS_MOUSE_BUTTONS	EQU	18 
CAPS_FOREGROUND_MIX_SUPPORT	EQU	19 
CAPS_BACKGROUND_MIX_SUPPORT	EQU	20 
CAPS_DEVICE_WINDOWING	EQU	31 
CAPS_ADDITIONAL_GRAPHICS	EQU	32 
CAPS_VIO_LOADABLE_FONTS	EQU	21 
CAPS_WINDOW_BYTE_ALIGNMENT	EQU	22 
CAPS_BITMAP_FORMATS	EQU	23 
CAPS_RASTER_CAPS	EQU	24 
CAPS_MARKER_HEIGHT	EQU	25       
CAPS_MARKER_WIDTH	EQU	26       
CAPS_DEVICE_FONTS	EQU	27 
CAPS_GRAPHICS_SUBSET	EQU	28 
CAPS_GRAPHICS_VERSION	EQU	29 
CAPS_GRAPHICS_VECTOR_SUBSET	EQU	30 
CAPS_PHYS_COLORS	EQU	33 
CAPS_COLOR_INDEX	EQU	34 
CAPS_GRAPHICS_CHAR_WIDTH	EQU	35 
CAPS_GRAPHICS_CHAR_HEIGHT	EQU	36 
CAPS_HORIZONTAL_FONT_RES	EQU	37 
CAPS_VERTICAL_FONT_RES	EQU	38 
CAPS_DEVICE_FONT_SIM	EQU	39 
CAPS_LINEWIDTH_THICK	EQU	40 
CAPS_DEVICE_POLYSET_POINTS	EQU	41 
CAPS_IO_DUMMY	EQU	1 
CAPS_IO_SUPPORTS_OP	EQU	2 
CAPS_IO_SUPPORTS_IP	EQU	3 
CAPS_IO_SUPPORTS_IO	EQU	4 
CAPS_TECH_UNKNOWN	EQU	0 
CAPS_TECH_VECTOR_PLOTTER	EQU	1 
CAPS_TECH_RASTER_DISPLAY	EQU	2 
CAPS_TECH_RASTER_PRINTER	EQU	3 
CAPS_TECH_RASTER_CAMERA	EQU	4 
CAPS_TECH_POSTSCRIPT	EQU	5 
CAPS_COLTABL_RGB_8	EQU	1 
CAPS_COLTABL_RGB_8_PLUS	EQU	2 
CAPS_COLTABL_TRUE_MIX	EQU	4 
CAPS_COLTABL_REALIZE	EQU	8 
CAPS_FM_OR	EQU	1 
CAPS_FM_OVERPAINT	EQU	2 
CAPS_FM_XOR	EQU	8 
CAPS_FM_LEAVEALONE	EQU	16 
CAPS_FM_AND	EQU	32 
CAPS_FM_GENERAL_BOOLEAN	EQU	64 
CAPS_BM_OR	EQU	1 
CAPS_BM_OVERPAINT	EQU	2 
CAPS_BM_XOR	EQU	8 
CAPS_BM_LEAVEALONE	EQU	16 
CAPS_BM_AND	EQU	32 
CAPS_BM_GENERAL_BOOLEAN	EQU	64 
CAPS_BM_SRCTRANSPARENT	EQU	128 
CAPS_BM_DESTTRANSPARENT	EQU	256 
CAPS_DEV_WINDOWING_SUPPORT	EQU	1 
CAPS_DEV_FONT_SIM_BOLD	EQU	1 
CAPS_DEV_FONT_SIM_ITALIC	EQU	2 
CAPS_DEV_FONT_SIM_UNDERSCORE	EQU	4 
CAPS_DEV_FONT_SIM_STRIKEOUT	EQU	8 
CAPS_VDD_DDB_TRANSFER	EQU	1 
CAPS_GRAPHICS_KERNING_SUPPORT	EQU	2 
CAPS_FONT_OUTLINE_DEFAULT	EQU	4 
CAPS_FONT_IMAGE_DEFAULT	EQU	8 
CAPS_SCALED_DEFAULT_MARKERS	EQU	64 
CAPS_COLOR_CURSOR_SUPPORT	EQU	128 
CAPS_PALETTE_MANAGER	EQU	256 
CAPS_COSMETIC_WIDELINE_SUPPORT	EQU	512 
CAPS_DIRECT_FILL	EQU	1024 
CAPS_REBUILD_FILLS	EQU	2048 
CAPS_CLIP_FILLS	EQU	00001000H  
CAPS_ENHANCED_FONTMETRICS	EQU	00002000H  
CAPS_TRANSFORM_SUPPORT	EQU	00004000H  
CAPS_EXTERNAL_16_BITCOUNT	EQU	00008000H  
CAPS_EXTERNAL_32_BITCOUNT	EQU	00010000H  
ifndef INCL_SAADEFS
CAPS_BYTE_ALIGN_REQUIRED	EQU	0 
CAPS_BYTE_ALIGN_RECOMMENDED	EQU	1 
CAPS_BYTE_ALIGN_NOT_REQUIRED	EQU	2 
endif 
CAPS_RASTER_BITBLT	EQU	1 
CAPS_RASTER_BANDING	EQU	2 
CAPS_RASTER_BITBLT_SCALING	EQU	4 
CAPS_RASTER_SET_PEL	EQU	16 
CAPS_RASTER_FONTS	EQU	32 
CAPS_RASTER_FLOOD_FILL	EQU	64 
ifndef INCL_DDIDEFS
endif 
endif 
ifdef INCL_DEV
ifndef INCL_SAADEFS

VIOSIZECOUNT	STRUC
vios_maxcount	DD	?
vios_count	DD	?
VIOSIZECOUNT	ENDS

VIOFONTCELLSIZE	STRUC
viof_cx	DD	?
viof_cy	DD	?
VIOFONTCELLSIZE	ENDS

SFACTORS	STRUC
sfactors_x	DD	?
sfactors_y	DD	?
SFACTORS	ENDS

BANDRECT	STRUC
bandrect_xleft	DD	?
bandrect_ybottom	DD	?
bandrect_xright	DD	?
bandrect_ytop	DD	?
BANDRECT	ENDS
DEVESC_ERROR	EQU	(-1 )
DEVESC_NOTIMPLEMENTED	EQU	0 
DEVESC_QUERYESCSUPPORT	EQU	0 
DEVESC_GETSCALINGFACTOR	EQU	1 
DEVESC_QUERYVIOCELLSIZES	EQU	2 
DEVESC_GETCP	EQU	8000 
DEVESC_SETABORTPROC	EQU	8001 
DEVESC_QUERYPDL	EQU	8002 
DEVESC_STARTDOC	EQU	8150 
DEVESC_ENDDOC	EQU	8151 
DEVESC_NEXTBAND	EQU	8152 
DEVESC_ABORTDOC	EQU	8153 
DEVESC_GETJOBID	EQU	8160 
DEVESC_QUERY_RASTER	EQU	8161 
DEVESC_QUERYSIZE	EQU	8162 
DEVESC_QUERYJOBPROPERTIES	EQU	8163 
DEVESC_SETJOBPROPERTIES	EQU	8164 
DEVESC_DEFAULTJOBPROPERTIES	EQU	8165 
DEVESC_CHANGEOUTPUTPORT	EQU	8166 
DEVESC_NEWFRAME	EQU	16300 
DEVESC_DRAFTMODE	EQU	16301 
DEVESC_FLUSHOUTPUT	EQU	16302 
DEVESC_RAWDATA	EQU	16303 
DEVESC_SETMODE	EQU	16304 
DEVESC_SEP	EQU	16305 
DEVESC_MACRO	EQU	16307 
DEVESC_BEGIN_BITBLT	EQU	16309 
DEVESC_END_BITBLT	EQU	16310 
DEVESC_SEND_COMPDATA	EQU	16311 
DEVESC_DBE_FIRST	EQU	24450 
DEVESC_DBE_LAST	EQU	24455 
DEVESC_CHAR_EXTRA	EQU	16998 
DEVESC_BREAK_EXTRA	EQU	16999 
DEVESC_STD_JOURNAL	EQU	32600 
DEVESC_SETPS	EQU	49149 
DEVESC_STARTDOC_WPROP	EQU	49150 
DEVESC_NEWFRAME_WPROP	EQU	49151 

ESCMODE	STRUC
em_mode	DD	?
em_modedata	DB	1 DUP (?)
ESCMODE	ENDS

COMP_BITMAPTYPES	STRUC
cbmt_cPlanes	DW	?
cbmt_cBitCount	DW	?
cbmt_ulCompressionType	DD	?
cbmt_ulCaps	DD	?
COMP_BITMAPTYPES	ENDS

QUERY_RASTER	STRUC
qr_cCount	DD	?
qr_ulCaps	DD	?
QUERY_RASTER	ENDS

QUERY_ONE_RASTER	STRUC
qor_bSupported	DD	?
qor_ulCaps	DD	?
QUERY_ONE_RASTER	ENDS

PDL	STRUC
pdl_ulPDL	DD	?
pdl_ulPDLLevel	DD	?
pdl_ulMajorPDLVersion	DD	?
pdl_ulMinorPDLVersion	DD	?
pdl_szMinorCharID	DB	32 DUP (?)
pdl_ulReserved	DD	?
pdl_ulFlags	DD	?
pdl_szPDLDescription	DB	128 DUP (?)
pdl_szTranslatedPDLDescription	DB	256 DUP (?)
PDL	ENDS
PDLCAPS_CURRENT	EQU	0001H   
PDLCAPS_SOFTWARE_EMUL	EQU	0002H   
PDLCAPS_SELECTABLE	EQU	0004H   
PDLCAPS_MACROSUPPORT	EQU	0008H   

IQUERYPDL	STRUC
iqpdl_lBufSize	DD	?
iqpdl_lCmd	DD	?
iqpdl_lStart	DD	?
iqpdl_lCount	DD	?
IQUERYPDL	ENDS
QUERYPDL_CMD_QUERY_SIZE	EQU	1     
QUERYPDL_CMD_QUERY_PDL	EQU	2     

OQUERYPDL	STRUC
oqpdl_lBufSize	DD	?
oqpdl_lMaxCount	DD	?
oqpdl_lCount	DD	?
oqpdl_aPDL	DB	SIZE PDL * 1 DUP (?)
OQUERYPDL	ENDS

ESCMACRO	STRUC
devmac_sPDL	DB	SIZE PDL DUP (?)
devmac_ulMacroLength	DD	?
devmac_ulFlags	DD	?
devmac_abMacro	DB	1 DUP (?)
ESCMACRO	ENDS
PDL_DONTCARE	EQU	       -1  
PDL_other	EQU	1   
PDL_PCL	EQU	3   
PDL_HPGL	EQU	4   
PDL_PJL	EQU	5   
PDL_PS	EQU	6   
PDL_IPDS	EQU	7   
PDL_PPDS	EQU	8   
PDL_EscapeP	EQU	9   
PDL_Epson	EQU	10  
PDL_DDIF	EQU	11  
PDL_Interpress	EQU	12  
PDL_ISO6429	EQU	13  
PDL_LineData	EQU	14  
PDL_MODCA	EQU	15  
PDL_REGIS	EQU	16  
PDL_SCS	EQU	17  
PDL_SPDL	EQU	18  
PDL_TEK4014	EQU	19  
PDL_PDS	EQU	20 
PDL_IGP	EQU	21  
PDL_CodeV	EQU	22  
PDL_DSCDSE	EQU	23  
PDL_WPS	EQU	24  
PDL_LN03	EQU	25  
PDL_CCITT	EQU	26 
PDL_QUIC	EQU	27  
PDL_CPAP	EQU	28  
PDL_DecPPL	EQU	29  
PDL_SimpleText	EQU	30  
PDL_NPAP	EQU	31  
PDL_DOC	EQU	32  
PDL_imPress	EQU	33  
PDL_Pinwriter	EQU	34  
PDL_NPDL	EQU	35  
PDL_NEC201PL	EQU	36  
PDL_Automatic	EQU	37  
PDL_Pages	EQU	38  
PDL_LIPS	EQU	39  
PDL_TIFF	EQU	40  
PDL_Diagnostic	EQU	41  
PDL_PSPrinter	EQU	42  
PDL_CaPSL	EQU	43  
PDL_EXCL	EQU	44  
PDL_LCDS	EQU	45  
PDL_XES	EQU	46  
PDL_PCLXL	EQU	47  
PDL_ART	EQU	48  
PDL_TIPSI	EQU	49  
PDL_Prescribe	EQU	50  
PDL_LinePrinter	EQU	51  
PDL_IDP	EQU	52  
PDL_XJCL	EQU	53  
PDL_ALPS	EQU	54  
PDL_Olivetti	EQU	55  
PDL_Deskjet	EQU	56  
PDL_Paintjet	EQU	57  
PDL_Seiko	EQU	58  
PDL_PassThru	EQU	59  
LEVEL_PS_LEVEL1	EQU	1      
LEVEL_PS_LEVEL2	EQU	2      
LEVEL_PCL2	EQU	1 
LEVEL_PCL3	EQU	2 
LEVEL_PCL3C	EQU	3 
LEVEL_PCL4	EQU	4 
LEVEL_PCL5	EQU	5 
LEVEL_PCL5C	EQU	6 
LEVEL_PCL6	EQU	7 
LEVEL_PCL5E	EQU	8 
LEVEL_HPGL1	EQU	1 
LEVEL_HPGL2	EQU	2 
LEVEL_HPGL2_RTL	EQU	3      
LEVEL_HPGL2_PCLRTL	EQU	4      
LEVEL_HPGL2_MC	EQU	5      
LEVEL_ESC	EQU	1 
LEVEL_ESCP	EQU	2 
LEVEL_ESCP_2	EQU	3 
LEVEL_ESCP_2J	EQU	4      
LEVEL_ASCII_TEXT	EQU	1 
LEVEL_ASCII_PROPRINTER	EQU	2 
LEVEL_ASCII_QUITWRITER	EQU	3 
LEVEL_ASCII_JISASCII	EQU	4 
LEVEL_DESKJET	EQU	1 
LEVEL_DESKJETJ	EQU	2      
BITMAP_WITH_GPI	EQU	00000001H 
BITMAP_SMOOTHING	EQU	00000002H 
BITMAP_STRETCHING	EQU	00000004H 
BITMAP_ROTATION	EQU	00000008H 
BITMAP_COLOR	EQU	00000010H 
COMP_IBM_MMR	EQU	00000001H 
COMP_PACKBITS	EQU	00000002H 
COMP_ABIC	EQU	00000008H 
COMP_TIFF_2	EQU	00000009H 
COMP_ABIC_CONCAT	EQU	0000000AH 
COMP_G3_MH	EQU	00000080H 
COMP_G3_MR	EQU	00000081H 
COMP_G4_MMR	EQU	00000082H 
COMP_JPEG	EQU	0000CA83H 
COMP_UNCOMPRESS	EQU	00001000H 
DPDM_ERROR	EQU	(-1 )
DPDM_NONE	EQU	0 
DPDM_POSTJOBPROP	EQU	0 
DPDM_CHANGEPROP	EQU	1 
DPDM_QUERYJOBPROP	EQU	2 
DQHC_ERROR	EQU	(-1 )
HCAPS_CURRENT	EQU	1 
HCAPS_SELECTABLE	EQU	2 

HCINFO	STRUC
hci_szFormname	DB	32 DUP (?)
hci_cx	DD	?
hci_cy	DD	?
hci_xLeftClip	DD	?
hci_yBottomClip	DD	?
hci_xRightClip	DD	?
hci_yTopClip	DD	?
hci_xPels	DD	?
hci_yPels	DD	?
hci_flAttributes	DD	?
HCINFO	ENDS
DEVPE_ERROR	EQU	-1 
DEVPE_NOTIMPLEMENTED	EQU	-2 
DEVPE_NOTSUPPORTED	EQU	-3 
DEVPE_QUERYSUPPORT	EQU	1 
DEVPE_QUERYSIZE	EQU	2 
DEVPE_QUERYJOBPROPERTIES	EQU	3 
DEVPE_SETJOBPROPERTIES	EQU	4 
DEVPE_DEFAULTJOBPROPERTIES	EQU	5 
ifdef INCL_DEVDJP
INCLUDE pmdjp.INC
endif 
ifndef INCL_DDIDEFS
endif 
endif 
endif 
ifdef INCL_DEVERRORS
endif 
