/*
 * PDB file: ntdll.pdb
 * Image architecture: i386 (0x014c)
 *
 * Dumped by pdbex tool v0.18, by wbenny
 */

#include <stdint.h>
#include <pshpack1.h>
typedef struct _UNICODE_STRING
{
  /* 0x0000 */ uint16_t Length;
  /* 0x0002 */ uint16_t MaximumLength;
  /* 0x0004 */ uint16_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _CURDIR
{
  /* 0x0000 */ struct _UNICODE_STRING DosPath;
  /* 0x0008 */ void* Handle;
} CURDIR, *PCURDIR; /* size: 0x000c */

typedef struct _STRING
{
  /* 0x0000 */ uint16_t Length;
  /* 0x0002 */ uint16_t MaximumLength;
  /* 0x0004 */ char* Buffer;
} STRING, *PSTRING; /* size: 0x0008 */

typedef struct _RTL_DRIVE_LETTER_CURDIR
{
  /* 0x0000 */ uint16_t Flags;
  /* 0x0002 */ uint16_t Length;
  /* 0x0004 */ uint32_t TimeStamp;
  /* 0x0008 */ struct _STRING DosPath;
} RTL_DRIVE_LETTER_CURDIR, *PRTL_DRIVE_LETTER_CURDIR; /* size: 0x0010 */

typedef struct _RTL_USER_PROCESS_PARAMETERS
{
  /* 0x0000 */ uint32_t MaximumLength;
  /* 0x0004 */ uint32_t Length;
  /* 0x0008 */ uint32_t Flags;
  /* 0x000c */ uint32_t DebugFlags;
  /* 0x0010 */ void* ConsoleHandle;
  /* 0x0014 */ uint32_t ConsoleFlags;
  /* 0x0018 */ void* StandardInput;
  /* 0x001c */ void* StandardOutput;
  /* 0x0020 */ void* StandardError;
  /* 0x0024 */ struct _CURDIR CurrentDirectory;
  /* 0x0030 */ struct _UNICODE_STRING DllPath;
  /* 0x0038 */ struct _UNICODE_STRING ImagePathName;
  /* 0x0040 */ struct _UNICODE_STRING CommandLine;
  /* 0x0048 */ void* Environment;
  /* 0x004c */ uint32_t StartingX;
  /* 0x0050 */ uint32_t StartingY;
  /* 0x0054 */ uint32_t CountX;
  /* 0x0058 */ uint32_t CountY;
  /* 0x005c */ uint32_t CountCharsX;
  /* 0x0060 */ uint32_t CountCharsY;
  /* 0x0064 */ uint32_t FillAttribute;
  /* 0x0068 */ uint32_t WindowFlags;
  /* 0x006c */ uint32_t ShowWindowFlags;
  /* 0x0070 */ struct _UNICODE_STRING WindowTitle;
  /* 0x0078 */ struct _UNICODE_STRING DesktopInfo;
  /* 0x0080 */ struct _UNICODE_STRING ShellInfo;
  /* 0x0088 */ struct _UNICODE_STRING RuntimeData;
  /* 0x0090 */ struct _RTL_DRIVE_LETTER_CURDIR CurrentDirectores[32];
  /* 0x0290 */ volatile uint32_t EnvironmentSize;
  /* 0x0294 */ volatile uint32_t EnvironmentVersion;
} RTL_USER_PROCESS_PARAMETERS, *PRTL_USER_PROCESS_PARAMETERS; /* size: 0x0298 */

#include <poppack.h>
