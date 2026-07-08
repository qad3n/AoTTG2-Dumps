using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Microsoft.Win32.SafeHandles;

[Token(Token = "0x2000012")]
internal sealed class SafeBrotliDecoderHandle : SafeHandle
{
	[Token(Token = "0x1700000C")]
	public override bool IsInvalid
	{
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x4327250", Offset = "0x4327250", VA = "0x4327250", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x4321E20", Offset = "0x4321E20", VA = "0x4321E20")]
	public SafeBrotliDecoderHandle()
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x4327240", Offset = "0x4327240", VA = "0x4327240", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}
}
