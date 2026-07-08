using System;
using Il2CppDummyDll;
using POpusCodec.Enums;

namespace POpusCodec;

[Token(Token = "0x2000008")]
public class OpusException : Exception
{
	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x8C")]
	private OpusStatusCode _statusCode;

	[Token(Token = "0x17000010")]
	public OpusStatusCode StatusCode
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x3C212F0", Offset = "0x3C212F0", VA = "0x3C212F0")]
		get
		{
			return default(OpusStatusCode);
		}
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x3C208B0", Offset = "0x3C208B0", VA = "0x3C208B0")]
	public OpusException(OpusStatusCode statusCode, string message)
	{
	}
}
