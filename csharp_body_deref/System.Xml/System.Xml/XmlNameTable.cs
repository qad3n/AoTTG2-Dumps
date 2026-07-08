using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000E7")]
public abstract class XmlNameTable
{
	[Token(Token = "0x6000BFC")]
	public abstract string Get(string array);

	[Token(Token = "0x6000BFD")]
	public abstract string Add(char[] array, int offset, int length);

	[Token(Token = "0x6000BFE")]
	public abstract string Add(string array);

	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x44C3460", Offset = "0x44C3460", VA = "0x44C3460")]
	protected XmlNameTable()
	{
	}
}
