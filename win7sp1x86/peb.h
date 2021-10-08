/*
 * PDB file: ntdll.pdb
 * Image architecture: i386 (0x014c)
 *
 * Dumped by pdbex tool v0.18, by wbenny
 */

#include <stdint.h>
#include <pshpack1.h>
typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ uint32_t LowPart;
      /* 0x0004 */ int32_t HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ uint32_t LowPart;
      /* 0x0004 */ int32_t HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ int64_t QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ uint32_t LowPart;
      /* 0x0004 */ uint32_t HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ uint32_t LowPart;
      /* 0x0004 */ uint32_t HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ uint64_t QuadPart;
  }; /* size: 0x0008 */
} ULARGE_INTEGER, *PULARGE_INTEGER; /* size: 0x0008 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ uint16_t Length;
  /* 0x0002 */ uint16_t MaximumLength;
  /* 0x0004 */ uint16_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _PEB
{
  /* 0x0000 */ uint8_t InheritedAddressSpace;
  /* 0x0001 */ uint8_t ReadImageFileExecOptions;
  /* 0x0002 */ uint8_t BeingDebugged;
  union
  {
    /* 0x0003 */ uint8_t BitField;
    struct /* bitfield */
    {
      /* 0x0003 */ uint8_t ImageUsesLargePages : 1; /* bit position: 0 */
      /* 0x0003 */ uint8_t IsProtectedProcess : 1; /* bit position: 1 */
      /* 0x0003 */ uint8_t IsLegacyProcess : 1; /* bit position: 2 */
      /* 0x0003 */ uint8_t IsImageDynamicallyRelocated : 1; /* bit position: 3 */
      /* 0x0003 */ uint8_t SkipPatchingUser32Forwarders : 1; /* bit position: 4 */
      /* 0x0003 */ uint8_t SpareBits : 3; /* bit position: 5 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0004 */ void* Mutant;
  /* 0x0008 */ void* ImageBaseAddress;
  /* 0x000c */ struct _PEB_LDR_DATA* Ldr;
  /* 0x0010 */ struct _RTL_USER_PROCESS_PARAMETERS* ProcessParameters;
  /* 0x0014 */ void* SubSystemData;
  /* 0x0018 */ void* ProcessHeap;
  /* 0x001c */ struct _RTL_CRITICAL_SECTION* FastPebLock;
  /* 0x0020 */ void* AtlThunkSListPtr;
  /* 0x0024 */ void* IFEOKey;
  union
  {
    /* 0x0028 */ uint32_t CrossProcessFlags;
    struct /* bitfield */
    {
      /* 0x0028 */ uint32_t ProcessInJob : 1; /* bit position: 0 */
      /* 0x0028 */ uint32_t ProcessInitializing : 1; /* bit position: 1 */
      /* 0x0028 */ uint32_t ProcessUsingVEH : 1; /* bit position: 2 */
      /* 0x0028 */ uint32_t ProcessUsingVCH : 1; /* bit position: 3 */
      /* 0x0028 */ uint32_t ProcessUsingFTH : 1; /* bit position: 4 */
      /* 0x0028 */ uint32_t ReservedBits0 : 27; /* bit position: 5 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  union
  {
    /* 0x002c */ void* KernelCallbackTable;
    /* 0x002c */ void* UserSharedInfoPtr;
  }; /* size: 0x0004 */
  /* 0x0030 */ uint32_t SystemReserved[1];
  /* 0x0034 */ uint32_t AtlThunkSListPtr32;
  /* 0x0038 */ void* ApiSetMap;
  /* 0x003c */ uint32_t TlsExpansionCounter;
  /* 0x0040 */ void* TlsBitmap;
  /* 0x0044 */ uint32_t TlsBitmapBits[2];
  /* 0x004c */ void* ReadOnlySharedMemoryBase;
  /* 0x0050 */ void* HotpatchInformation;
  /* 0x0054 */ void** ReadOnlyStaticServerData;
  /* 0x0058 */ void* AnsiCodePageData;
  /* 0x005c */ void* OemCodePageData;
  /* 0x0060 */ void* UnicodeCaseTableData;
  /* 0x0064 */ uint32_t NumberOfProcessors;
  /* 0x0068 */ uint32_t NtGlobalFlag;
  /* 0x006c */ long Padding_0;
  /* 0x0070 */ union _LARGE_INTEGER CriticalSectionTimeout;
  /* 0x0078 */ uint32_t HeapSegmentReserve;
  /* 0x007c */ uint32_t HeapSegmentCommit;
  /* 0x0080 */ uint32_t HeapDeCommitTotalFreeThreshold;
  /* 0x0084 */ uint32_t HeapDeCommitFreeBlockThreshold;
  /* 0x0088 */ uint32_t NumberOfHeaps;
  /* 0x008c */ uint32_t MaximumNumberOfHeaps;
  /* 0x0090 */ void** ProcessHeaps;
  /* 0x0094 */ void* GdiSharedHandleTable;
  /* 0x0098 */ void* ProcessStarterHelper;
  /* 0x009c */ uint32_t GdiDCAttributeList;
  /* 0x00a0 */ struct _RTL_CRITICAL_SECTION* LoaderLock;
  /* 0x00a4 */ uint32_t OSMajorVersion;
  /* 0x00a8 */ uint32_t OSMinorVersion;
  /* 0x00ac */ uint16_t OSBuildNumber;
  /* 0x00ae */ uint16_t OSCSDVersion;
  /* 0x00b0 */ uint32_t OSPlatformId;
  /* 0x00b4 */ uint32_t ImageSubsystem;
  /* 0x00b8 */ uint32_t ImageSubsystemMajorVersion;
  /* 0x00bc */ uint32_t ImageSubsystemMinorVersion;
  /* 0x00c0 */ uint32_t ActiveProcessAffinityMask;
  /* 0x00c4 */ uint32_t GdiHandleBuffer[34];
  /* 0x014c */ void* PostProcessInitRoutine /* function */;
  /* 0x0150 */ void* TlsExpansionBitmap;
  /* 0x0154 */ uint32_t TlsExpansionBitmapBits[32];
  /* 0x01d4 */ uint32_t SessionId;
  /* 0x01d8 */ union _ULARGE_INTEGER AppCompatFlags;
  /* 0x01e0 */ union _ULARGE_INTEGER AppCompatFlagsUser;
  /* 0x01e8 */ void* pShimData;
  /* 0x01ec */ void* AppCompatInfo;
  /* 0x01f0 */ struct _UNICODE_STRING CSDVersion;
  /* 0x01f8 */ const struct _ACTIVATION_CONTEXT_DATA* ActivationContextData;
  /* 0x01fc */ struct _ASSEMBLY_STORAGE_MAP* ProcessAssemblyStorageMap;
  /* 0x0200 */ const struct _ACTIVATION_CONTEXT_DATA* SystemDefaultActivationContextData;
  /* 0x0204 */ struct _ASSEMBLY_STORAGE_MAP* SystemAssemblyStorageMap;
  /* 0x0208 */ uint32_t MinimumStackCommit;
  /* 0x020c */ struct _FLS_CALLBACK_INFO* FlsCallback;
  /* 0x0210 */ struct _LIST_ENTRY FlsListHead;
  /* 0x0218 */ void* FlsBitmap;
  /* 0x021c */ uint32_t FlsBitmapBits[4];
  /* 0x022c */ uint32_t FlsHighIndex;
  /* 0x0230 */ void* WerRegistrationData;
  /* 0x0234 */ void* WerShipAssertPtr;
  /* 0x0238 */ void* pContextData;
  /* 0x023c */ void* pImageHeaderHash;
  union
  {
    /* 0x0240 */ uint32_t TracingFlags;
    struct /* bitfield */
    {
      /* 0x0240 */ uint32_t HeapTracingEnabled : 1; /* bit position: 0 */
      /* 0x0240 */ uint32_t CritSecTracingEnabled : 1; /* bit position: 1 */
      /* 0x0240 */ uint32_t SpareTracingBits : 30; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0244 */ int32_t __PADDING__[1];
} PEB, *PPEB; /* size: 0x0248 */

#include <poppack.h>
