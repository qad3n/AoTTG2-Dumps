// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.XElementWrapper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Xml.Linq;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001D2")]
internal class XElementWrapper : XContainerWrapper, IXmlElement, IXmlNode
{
	[Token(Token = "0x400081D")]
	[FieldOffset(Offset = "0x20")]
	private List<IXmlNode>? _attributes;

	[Token(Token = "0x170002A2")]
	private XElement Element
	{
		[Token(Token = "0x6000F9A")]
		[Address(RVA = "0x1CB2310", Offset = "0x1CB0910", VA = "0x181CB2310")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A3")]
	public override List<IXmlNode> Attributes
	{
		[Token(Token = "0x6000F9D")]
		[Address(RVA = "0x1CB1EC0", Offset = "0x1CB04C0", VA = "0x181CB1EC0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A4")]
	public override string? Value
	{
		[Token(Token = "0x6000FA0")]
		[Address(RVA = "0x1CB2500", Offset = "0x1CB0B00", VA = "0x181CB2500", Slot = "19")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FA1")]
		[Address(RVA = "0x1CB2580", Offset = "0x1CB0B80", VA = "0x181CB2580", Slot = "20")]
		set
		{
		}
	}

	[Token(Token = "0x170002A5")]
	public override string? LocalName
	{
		[Token(Token = "0x6000FA2")]
		[Address(RVA = "0x1CB2400", Offset = "0x1CB0A00", VA = "0x181CB2400", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A6")]
	public override string? NamespaceUri
	{
		[Token(Token = "0x6000FA3")]
		[Address(RVA = "0x1CB2480", Offset = "0x1CB0A80", VA = "0x181CB2480", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A7")]
	public bool IsEmpty
	{
		[Token(Token = "0x6000FA5")]
		[Address(RVA = "0x1CB2380", Offset = "0x1CB0980", VA = "0x181CB2380", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F9B")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public XElementWrapper(XElement element)
	{
	}

	[Token(Token = "0x6000F9C")]
	[Address(RVA = "0x1CB1DC0", Offset = "0x1CB03C0", VA = "0x181CB1DC0", Slot = "24")]
	public void SetAttributeNode(IXmlNode attribute)
	{
	}

	[Token(Token = "0x6000F9E")]
	[Address(RVA = "0x1CB1A80", Offset = "0x1CB0080", VA = "0x181CB1A80")]
	private bool HasImplicitNamespaceAttribute(string namespaceUri)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F9F")]
	[Address(RVA = "0x1CB19A0", Offset = "0x1CAFFA0", VA = "0x181CB19A0", Slot = "21")]
	public override IXmlNode AppendChild(IXmlNode newChild)
	{
		return null;
	}

	[Token(Token = "0x6000FA4")]
	[Address(RVA = "0x1CB19E0", Offset = "0x1CAFFE0", VA = "0x181CB19E0", Slot = "25")]
	public string GetPrefixOfNamespace(string namespaceUri)
	{
		return null;
	}
}
