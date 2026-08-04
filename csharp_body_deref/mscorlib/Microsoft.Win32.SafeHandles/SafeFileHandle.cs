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

[Token(Token = "0x200005B")]
public sealed class SafeFileHandle : SafeHandleZeroOrMinusOneIsInvalid
{
	[Token(Token = "0x6000218")]
	[Address(RVA = "0x3AF3120", Offset = "0x3AF3120", VA = "0x3AF3120")]
	public SafeFileHandle(IntPtr preexistingHandle, bool ownsHandle)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x3AF3150", Offset = "0x3AF3150", VA = "0x3AF3150", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}
}
