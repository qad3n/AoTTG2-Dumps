// ==================== AoTTG2 cross-reference ====================
// Type: Microsoft.Win32.SafeHandles.SafeFileHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Microsoft.Win32.SafeHandles;

[Token(Token = "0x2000083")]
public sealed class SafeFileHandle : SafeHandleZeroOrMinusOneIsInvalid
{
	[Token(Token = "0x6000255")]
	[Address(RVA = "0x1967B60", Offset = "0x1966160", VA = "0x181967B60")]
	public SafeFileHandle(IntPtr preexistingHandle, bool ownsHandle)
	{
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x1967AF0", Offset = "0x19660F0", VA = "0x181967AF0", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}
}
