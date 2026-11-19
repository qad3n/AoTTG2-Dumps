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
		[Address(RVA = "0x563D4A0", Offset = "0x563C4A0", VA = "0x563D4A0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000296")]
	public virtual XmlNodeType NodeType
	{
		[Token(Token = "0x6000F8A")]
		[Address(RVA = "0x563D4B0", Offset = "0x563C4B0", VA = "0x563D4B0", Slot = "14")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000297")]
	public virtual string? LocalName
	{
		[Token(Token = "0x6000F8B")]
		[Address(RVA = "0x563D4D0", Offset = "0x563C4D0", VA = "0x563D4D0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000298")]
	public virtual List<IXmlNode> ChildNodes
	{
		[Token(Token = "0x6000F8C")]
		[Address(RVA = "0x563D4E0", Offset = "0x563C4E0", VA = "0x563D4E0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000299")]
	public virtual List<IXmlNode> Attributes
	{
		[Token(Token = "0x6000F8D")]
		[Address(RVA = "0x563D550", Offset = "0x563C550", VA = "0x563D550", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029A")]
	public virtual IXmlNode? ParentNode
	{
		[Token(Token = "0x6000F8E")]
		[Address(RVA = "0x563D5C0", Offset = "0x563C5C0", VA = "0x563D5C0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029B")]
	public virtual string? Value
	{
		[Token(Token = "0x6000F8F")]
		[Address(RVA = "0x563D5D0", Offset = "0x563C5D0", VA = "0x563D5D0", Slot = "19")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F90")]
		[Address(RVA = "0x563D5E0", Offset = "0x563C5E0", VA = "0x563D5E0", Slot = "20")]
		set
		{
		}
	}

	[Token(Token = "0x1700029C")]
	public virtual string? NamespaceUri
	{
		[Token(Token = "0x6000F92")]
		[Address(RVA = "0x563D660", Offset = "0x563C660", VA = "0x563D660", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F88")]
	[Address(RVA = "0x563B3A0", Offset = "0x563A3A0", VA = "0x563B3A0")]
	public XObjectWrapper(XObject? xmlObject)
	{
	}

	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x563D620", Offset = "0x563C620", VA = "0x563D620", Slot = "21")]
	public virtual IXmlNode AppendChild(IXmlNode newChild)
	{
		return null;
	}
}
