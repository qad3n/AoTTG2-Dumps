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
	[Token(Token = "0x600021A")]
	[Address(RVA = "0x52FDF10", Offset = "0x52FCF10", VA = "0x52FDF10")]
	public SafeFileHandle(IntPtr preexistingHandle, bool ownsHandle)
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x52FDF40", Offset = "0x52FCF40", VA = "0x52FDF40", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}
}
