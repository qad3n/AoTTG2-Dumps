using System;
using System.Runtime.ConstrainedExecution;
using Il2CppDummyDll;

namespace Microsoft.Win32.SafeHandles;

[Token(Token = "0x200005C")]
public sealed class SafeWaitHandle : SafeHandleZeroOrMinusOneIsInvalid
{
	[Token(Token = "0x600021A")]
	[Address(RVA = "0x4E0D6A0", Offset = "0x4E0D6A0", VA = "0x4E0D6A0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public SafeWaitHandle(IntPtr existingHandle, bool ownsHandle)
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x4E0D6C0", Offset = "0x4E0D6C0", VA = "0x4E0D6C0", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}
}
