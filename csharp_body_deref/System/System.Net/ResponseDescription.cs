using System.Text;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000124")]
internal class ResponseDescription
{
	[Token(Token = "0x40005A3")]
	[FieldOffset(Offset = "0x10")]
	internal bool Multiline;

	[Token(Token = "0x40005A4")]
	[FieldOffset(Offset = "0x14")]
	internal int Status;

	[Token(Token = "0x40005A5")]
	[FieldOffset(Offset = "0x18")]
	internal string StatusDescription;

	[Token(Token = "0x40005A6")]
	[FieldOffset(Offset = "0x20")]
	internal StringBuilder StatusBuffer;

	[Token(Token = "0x40005A7")]
	[FieldOffset(Offset = "0x28")]
	internal string StatusCodeString;

	[Token(Token = "0x1700016E")]
	internal bool PositiveIntermediate
	{
		[Token(Token = "0x600070A")]
		[Address(RVA = "0x46296D0", Offset = "0x46296D0", VA = "0x46296D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700016F")]
	internal bool PositiveCompletion
	{
		[Token(Token = "0x600070B")]
		[Address(RVA = "0x46296E0", Offset = "0x46296E0", VA = "0x46296E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000170")]
	internal bool TransientFailure
	{
		[Token(Token = "0x600070C")]
		[Address(RVA = "0x46296F0", Offset = "0x46296F0", VA = "0x46296F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000171")]
	internal bool PermanentFailure
	{
		[Token(Token = "0x600070D")]
		[Address(RVA = "0x4629700", Offset = "0x4629700", VA = "0x4629700")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000172")]
	internal bool InvalidStatusCode
	{
		[Token(Token = "0x600070E")]
		[Address(RVA = "0x4629710", Offset = "0x4629710", VA = "0x4629710")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x4629720", Offset = "0x4629720", VA = "0x4629720")]
	public ResponseDescription()
	{
	}
}
