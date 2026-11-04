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

[Token(Token = "0x20000AB")]
public sealed class SafeProcessHandle : SafeHandleZeroOrMinusOneIsInvalid
{
	[Token(Token = "0x4000200")]
	[FieldOffset(Offset = "0x0")]
	internal static SafeProcessHandle InvalidHandle;

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x2840EC0", Offset = "0x283F4C0", VA = "0x182840EC0")]
	internal SafeProcessHandle(IntPtr handle)
	{
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x2840EF0", Offset = "0x283F4F0", VA = "0x182840EF0")]
	public SafeProcessHandle(IntPtr existingHandle, bool ownsHandle)
	{
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x2840E30", Offset = "0x283F430", VA = "0x182840E30", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}
}
