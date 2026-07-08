using Il2CppDummyDll;

namespace POpusCodec.Enums;

[Token(Token = "0x2000012")]
public enum OpusStatusCode
{
	[Token(Token = "0x400006E")]
	OK = 0,
	[Token(Token = "0x400006F")]
	BadArguments = -1,
	[Token(Token = "0x4000070")]
	BufferTooSmall = -2,
	[Token(Token = "0x4000071")]
	InternalError = -3,
	[Token(Token = "0x4000072")]
	InvalidPacket = -4,
	[Token(Token = "0x4000073")]
	Unimplemented = -5,
	[Token(Token = "0x4000074")]
	InvalidState = -6,
	[Token(Token = "0x4000075")]
	AllocFail = -7
}
