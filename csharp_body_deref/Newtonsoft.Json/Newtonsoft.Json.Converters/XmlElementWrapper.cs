// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.XmlElementWrapper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x563A3B0", Offset = "0x56393B0", VA = "0x563A3B0", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F11")]
	[Address(RVA = "0x5639FB0", Offset = "0x5638FB0", VA = "0x5639FB0")]
	public XmlElementWrapper(XmlElement element)
	{
	}

	[Token(Token = "0x6000F12")]
	[Address(RVA = "0x563A2A0", Offset = "0x56392A0", VA = "0x563A2A0", Slot = "16")]
	public void SetAttributeNode(IXmlNode attribute)
	{
	}

	[Token(Token = "0x6000F13")]
	[Address(RVA = "0x563A380", Offset = "0x5639380", VA = "0x563A380", Slot = "17")]
	public string GetPrefixOfNamespace(string namespaceUri)
	{
		return null;
	}
}
