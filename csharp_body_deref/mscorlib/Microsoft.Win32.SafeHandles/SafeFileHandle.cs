using System;
using Il2CppDummyDll;

namespace Microsoft.Win32.SafeHandles;

[Token(Token = "0x200005B")]
public sealed class SafeFileHandle : SafeHandleZeroOrMinusOneIsInvalid
{
	[Token(Token = "0x6000218")]
	[Address(RVA = "0x4E0D600", Offset = "0x4E0D600", VA = "0x4E0D600")]
	public SafeFileHandle(IntPtr preexistingHandle, bool ownsHandle)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x4E0D630", Offset = "0x4E0D630", VA = "0x4E0D630", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}
}
