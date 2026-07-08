using System.Xml;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001C1")]
internal class XmlDeclarationWrapper : XmlNodeWrapper, IXmlDeclaration, IXmlNode
{
	[Token(Token = "0x4000814")]
	[FieldOffset(Offset = "0x28")]
	private readonly XmlDeclaration _declaration;

	[Token(Token = "0x17000257")]
	public string? Version
	{
		[Token(Token = "0x6000F16")]
		[Address(RVA = "0x3B52F40", Offset = "0x3B52F40", VA = "0x3B52F40", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000258")]
	public string? Encoding
	{
		[Token(Token = "0x6000F17")]
		[Address(RVA = "0x3B52F60", Offset = "0x3B52F60", VA = "0x3B52F60", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F18")]
		[Address(RVA = "0x3B52F80", Offset = "0x3B52F80", VA = "0x3B52F80", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x17000259")]
	public string? Standalone
	{
		[Token(Token = "0x6000F19")]
		[Address(RVA = "0x3B52FA0", Offset = "0x3B52FA0", VA = "0x3B52FA0", Slot = "19")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F1A")]
		[Address(RVA = "0x3B52FC0", Offset = "0x3B52FC0", VA = "0x3B52FC0", Slot = "20")]
		set
		{
		}
	}

	[Token(Token = "0x6000F15")]
	[Address(RVA = "0x3B528C0", Offset = "0x3B528C0", VA = "0x3B528C0")]
	public XmlDeclarationWrapper(XmlDeclaration declaration)
	{
	}
}
