using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200015A")]
internal class HeaderInfo
{
	[Token(Token = "0x40006EF")]
	[FieldOffset(Offset = "0x10")]
	internal readonly bool IsRequestRestricted;

	[Token(Token = "0x40006F0")]
	[FieldOffset(Offset = "0x11")]
	internal readonly bool IsResponseRestricted;

	[Token(Token = "0x40006F1")]
	[FieldOffset(Offset = "0x18")]
	internal readonly HeaderParser Parser;

	[Token(Token = "0x40006F2")]
	[FieldOffset(Offset = "0x20")]
	internal readonly string HeaderName;

	[Token(Token = "0x40006F3")]
	[FieldOffset(Offset = "0x28")]
	internal readonly bool AllowMultiValues;

	[Token(Token = "0x6000869")]
	[Address(RVA = "0x4640310", Offset = "0x4640310", VA = "0x4640310")]
	internal HeaderInfo(string name, bool requestRestricted, bool responseRestricted, bool multi, HeaderParser p)
	{
	}
}
