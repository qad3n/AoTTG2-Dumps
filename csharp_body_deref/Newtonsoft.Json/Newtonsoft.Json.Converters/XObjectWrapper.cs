// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.XObjectWrapper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Xml;
using System.Xml.Linq;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001D0")]
internal class XObjectWrapper : IXmlNode
{
	[Token(Token = "0x400081C")]
	[FieldOffset(Offset = "0x10")]
	private readonly XObject? _xmlObject;

	[Token(Token = "0x17000295")]
	public object? WrappedNode
	{
		[Token(Token = "0x6000F89")]
		[Address(RVA = "0x3E4BAC0", Offset = "0x3E4BAC0", VA = "0x3E4BAC0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000296")]
	public virtual XmlNodeType NodeType
	{
		[Token(Token = "0x6000F8A")]
		[Address(RVA = "0x3E4BAD0", Offset = "0x3E4BAD0", VA = "0x3E4BAD0", Slot = "14")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000297")]
	public virtual string? LocalName
	{
		[Token(Token = "0x6000F8B")]
		[Address(RVA = "0x3E4BAF0", Offset = "0x3E4BAF0", VA = "0x3E4BAF0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000298")]
	public virtual List<IXmlNode> ChildNodes
	{
		[Token(Token = "0x6000F8C")]
		[Address(RVA = "0x3E4BB00", Offset = "0x3E4BB00", VA = "0x3E4BB00", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000299")]
	public virtual List<IXmlNode> Attributes
	{
		[Token(Token = "0x6000F8D")]
		[Address(RVA = "0x3E4BB70", Offset = "0x3E4BB70", VA = "0x3E4BB70", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029A")]
	public virtual IXmlNode? ParentNode
	{
		[Token(Token = "0x6000F8E")]
		[Address(RVA = "0x3E4BBE0", Offset = "0x3E4BBE0", VA = "0x3E4BBE0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029B")]
	public virtual string? Value
	{
		[Token(Token = "0x6000F8F")]
		[Address(RVA = "0x3E4BBF0", Offset = "0x3E4BBF0", VA = "0x3E4BBF0", Slot = "19")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F90")]
		[Address(RVA = "0x3E4BC00", Offset = "0x3E4BC00", VA = "0x3E4BC00", Slot = "20")]
		set
		{
		}
	}

	[Token(Token = "0x1700029C")]
	public virtual string? NamespaceUri
	{
		[Token(Token = "0x6000F92")]
		[Address(RVA = "0x3E4BC80", Offset = "0x3E4BC80", VA = "0x3E4BC80", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F88")]
	[Address(RVA = "0x3E49930", Offset = "0x3E49930", VA = "0x3E49930")]
	public XObjectWrapper(XObject? xmlObject)
	{
	}

	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x3E4BC40", Offset = "0x3E4BC40", VA = "0x3E4BC40", Slot = "21")]
	public virtual IXmlNode AppendChild(IXmlNode newChild)
	{
		return null;
	}
}
