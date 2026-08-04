// ==================== AoTTG2 cross-reference ====================
// Type: Microsoft.Win32.SafeHandles.SafeProcessHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Microsoft.Win32.SafeHandles;

[Token(Token = "0x2000072")]
public sealed class SafeProcessHandle : SafeHandleZeroOrMinusOneIsInvalid
{
	[Token(Token = "0x400015A")]
	[FieldOffset(Offset = "0x0")]
	internal static SafeProcessHandle InvalidHandle;

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x4530A70", Offset = "0x4530A70", VA = "0x4530A70")]
	internal SafeProcessHandle(IntPtr handle)
	{
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x4530920", Offset = "0x4530920", VA = "0x4530920")]
	public SafeProcessHandle(IntPtr existingHandle, bool ownsHandle)
	{
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x4530AA0", Offset = "0x4530AA0", VA = "0x4530AA0", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}
}
