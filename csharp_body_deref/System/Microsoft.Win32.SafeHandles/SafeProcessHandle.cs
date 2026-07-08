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
	[Address(RVA = "0x454A880", Offset = "0x454A880", VA = "0x454A880")]
	internal SafeProcessHandle(IntPtr handle)
	{
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x454A730", Offset = "0x454A730", VA = "0x454A730")]
	public SafeProcessHandle(IntPtr existingHandle, bool ownsHandle)
	{
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x454A8B0", Offset = "0x454A8B0", VA = "0x454A8B0", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}
}
