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
		[Address(RVA = "0x3E48870", Offset = "0x3E48870", VA = "0x3E48870", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F11")]
	[Address(RVA = "0x3E48460", Offset = "0x3E48460", VA = "0x3E48460")]
	public XmlElementWrapper(XmlElement element)
	{
	}

	[Token(Token = "0x6000F12")]
	[Address(RVA = "0x3E48760", Offset = "0x3E48760", VA = "0x3E48760", Slot = "16")]
	public void SetAttributeNode(IXmlNode attribute)
	{
	}

	[Token(Token = "0x6000F13")]
	[Address(RVA = "0x3E48840", Offset = "0x3E48840", VA = "0x3E48840", Slot = "17")]
	public string GetPrefixOfNamespace(string namespaceUri)
	{
		return null;
	}
}
