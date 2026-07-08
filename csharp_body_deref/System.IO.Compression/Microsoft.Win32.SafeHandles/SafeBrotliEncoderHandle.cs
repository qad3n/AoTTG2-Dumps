using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Microsoft.Win32.SafeHandles;

[Token(Token = "0x2000011")]
internal sealed class SafeBrotliEncoderHandle : SafeHandle
{
	[Token(Token = "0x1700000B")]
	public override bool IsInvalid
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x4327230", Offset = "0x4327230", VA = "0x4327230", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4321FA0", Offset = "0x4321FA0", VA = "0x4321FA0")]
	public SafeBrotliEncoderHandle()
	{
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4327220", Offset = "0x4327220", VA = "0x4327220", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}
}
