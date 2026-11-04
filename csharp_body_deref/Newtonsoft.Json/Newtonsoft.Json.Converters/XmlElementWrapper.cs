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
		[Address(RVA = "0x1CB3670", Offset = "0x1CB1C70", VA = "0x181CB3670", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F11")]
	[Address(RVA = "0x1CB2BE0", Offset = "0x1CB11E0", VA = "0x181CB2BE0")]
	public XmlElementWrapper(XmlElement element)
	{
	}

	[Token(Token = "0x6000F12")]
	[Address(RVA = "0x1CB3590", Offset = "0x1CB1B90", VA = "0x181CB3590", Slot = "16")]
	public void SetAttributeNode(IXmlNode attribute)
	{
	}

	[Token(Token = "0x6000F13")]
	[Address(RVA = "0x1CB3560", Offset = "0x1CB1B60", VA = "0x181CB3560", Slot = "17")]
	public string GetPrefixOfNamespace(string namespaceUri)
	{
		return null;
	}
}
