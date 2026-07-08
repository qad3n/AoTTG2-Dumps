using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200003A")]
internal class TernaryTreeReadOnly
{
	[Token(Token = "0x400012F")]
	[FieldOffset(Offset = "0x10")]
	private byte[] nodeBuffer;

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x44573F0", Offset = "0x44573F0", VA = "0x44573F0")]
	public TernaryTreeReadOnly(byte[] nodeBuffer)
	{
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x4455F40", Offset = "0x4455F40", VA = "0x4455F40")]
	public byte FindCaseInsensitiveString(string stringToFind)
	{
		return default(byte);
	}
}
