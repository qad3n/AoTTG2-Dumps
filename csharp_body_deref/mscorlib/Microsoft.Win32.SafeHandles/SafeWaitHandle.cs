// ==================== AoTTG2 cross-reference ====================
// Type: Microsoft.Win32.SafeHandles.SafeWaitHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.ConstrainedExecution;
using Il2CppDummyDll;

namespace Microsoft.Win32.SafeHandles;

[Token(Token = "0x2000085")]
public sealed class SafeWaitHandle : SafeHandleZeroOrMinusOneIsInvalid
{
	[Token(Token = "0x6000259")]
	[Address(RVA = "0x1967B60", Offset = "0x1966160", VA = "0x181967B60")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public SafeWaitHandle(IntPtr existingHandle, bool ownsHandle)
	{
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x1967F80", Offset = "0x1966580", VA = "0x181967F80", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}
}
