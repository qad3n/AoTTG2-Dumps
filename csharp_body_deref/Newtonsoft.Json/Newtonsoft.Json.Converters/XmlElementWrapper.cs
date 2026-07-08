using System.Xml;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001C0")]
internal class XmlElementWrapper : XmlNodeWrapper, IXmlElement, IXmlNode
{
	[Token(Token = "0x4000813")]
	[FieldOffset(Offset = "0x28")]
	private readonly XmlElement _element;

	[Token(Token = "0x17000256")]
	public bool IsEmpty
	{
		[Token(Token = "0x6000F14")]
		[Address(RVA = "0x3B52F20", Offset = "0x3B52F20", VA = "0x3B52F20", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F11")]
	[Address(RVA = "0x3B52B10", Offset = "0x3B52B10", VA = "0x3B52B10")]
	public XmlElementWrapper(XmlElement element)
	{
	}

	[Token(Token = "0x6000F12")]
	[Address(RVA = "0x3B52E10", Offset = "0x3B52E10", VA = "0x3B52E10", Slot = "16")]
	public void SetAttributeNode(IXmlNode attribute)
	{
	}

	[Token(Token = "0x6000F13")]
	[Address(RVA = "0x3B52EF0", Offset = "0x3B52EF0", VA = "0x3B52EF0", Slot = "17")]
	public string GetPrefixOfNamespace(string namespaceUri)
	{
		return null;
	}
}
