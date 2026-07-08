using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Microsoft.Win32.SafeHandles;

[Token(Token = "0x200005A")]
internal sealed class SafePasswordHandle : SafeHandle
{
	[Token(Token = "0x17000036")]
	public override bool IsInvalid
	{
		[Token(Token = "0x6000216")]
		[Address(RVA = "0x4E0D580", Offset = "0x4E0D580", VA = "0x4E0D580", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x4E0D370", Offset = "0x4E0D370", VA = "0x4E0D370")]
	private IntPtr CreateHandle(string password)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x4E0D3E0", Offset = "0x4E0D3E0", VA = "0x4E0D3E0")]
	private void FreeHandle()
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x4E0D440", Offset = "0x4E0D440", VA = "0x4E0D440")]
	public SafePasswordHandle(string password)
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x4E0D4B0", Offset = "0x4E0D4B0", VA = "0x4E0D4B0", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x4E0D520", Offset = "0x4E0D520", VA = "0x4E0D520", Slot = "6")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x4E0D5A0", Offset = "0x4E0D5A0", VA = "0x4E0D5A0")]
	internal string Mono_DangerousGetString()
	{
		return null;
	}
}
