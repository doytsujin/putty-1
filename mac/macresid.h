/* $Id: macresid.h,v 1.2 2002/12/30 18:21:17 ben Exp $ */

/*
 * macresid.h -- Mac resource IDs
 *
 * This file is shared by C and Rez source files
 */


/* Menu bar IDs */
#define MBAR_Main	128

/* Menu IDs */
#define mApple		128
#define mFile		129
#define mEdit		130

/* Menu Items */
/* Apple menu */
#define iAbout		1
/* File menu */
#define iNew		1
#define iOpen		2
#define iClose		3
#define iQuit		5
/* Edit menu */
#define iUndo		1
#define iCut		3
#define iCopy		4
#define iPaste		5
#define iClear		6
#define iSelectAll	7

/* Window types (and resource IDs) */
#define wNone		0 /* Dummy value for no window */
#define wDA		1 /* Dummy value for desk accessory */
#define wFatal		128
#define wAbout		129
#define wiAboutLicence		1
#define wiAboutVersion		3
#define wTerminal	130
#define wLicence	131

/* Controls */
#define cVScroll	128

/* Preferences */
#define PREF_wordness_type	'wORD'

#define PREF_settings		1024
