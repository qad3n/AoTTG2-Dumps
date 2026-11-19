// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.XmlNodeWrapper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Xml;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001C3")]
internal class XmlNodeWrapper : IXmlNode
{
	[Token(Token = "0x4000816")]
	[FieldOffset(Offset = "0x10")]
	private readonly XmlNode _node;

	[Token(Token = "0x4000817")]
	[FieldOffset(Offset = "0x18")]
	private List<IXmlNode>? _childNodes;

	[Token(Token = "0x4000818")]
	[FieldOffset(Offset = "0x20")]
	private List<IXmlNode>? _attributes;

	[Token(Token = "0x1700025F")]
	public object? WrappedNode
	{
		[Token(Token = "0x6000F22")]
		[Address(RVA = "0x563A530", Offset = "0x5639530", VA = "0x563A530", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000260")]
	public XmlNodeType NodeType
	{
		[Token(Token = "0x6000F23")]
		[Address(RVA = "0x563A540", Offset = "0x5639540", VA = "0x563A540", Slot = "4")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000261")]
	public virtual string? LocalName
	{
		[Token(Token = "0x6000F24")]
		[Address(RVA = "0x563A570", Offset = "0x5639570", VA = "0x563A570", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000262")]
	public List<IXmlNode> ChildNodes
	{
		[Token(Token = "0x6000F25")]
		[Address(RVA = "0x563A5A0", Offset = "0x56395A0", VA = "0x563A5A0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000263")]
	protected virtual bool HasChildNodes
	{
		[Token(Token = "0x6000F26")]
		[Address(RVA = "0x563ABB0", Offset = "0x5639BB0", VA = "0x563ABB0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000264")]
	public List<IXmlNode> Attributes
	{
		[Token(Token = "0x6000F28")]
		[Address(RVA = "0x563ABE0", Offset = "0x5639BE0", VA = "0x563ABE0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000265")]
	private bool HasAttributes
	{
		[Token(Token = "0x6000F29")]
		[Address(RVA = "0x563B0F0", Offset = "0x563A0F0", VA = "0x563B0F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000266")]
	public IXmlNode? ParentNode
	{
		[Token(Token = "0x6000F2A")]
		[Address(RVA = "0x563B190", Offset = "0x563A190", VA = "0x563B190", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000267")]
	public string? Value
	{
		[Token(Token = "0x6000F2B")]
		[Address(RVA = "0x563B230", Offset = "0x563A230", VA = "0x563B230", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F2C")]
		[Address(RVA = "0x563A120", Offset = "0x5639120", VA = "0x563A120", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000268")]
	public string? NamespaceUri
	{
		[Token(Token = "0x6000F2E")]
		[Address(RVA = "0x563B320", Offset = "0x563A320", VA = "0x563B320", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F21")]
	[Address(RVA = "0x56399B0", Offset = "0x56389B0", VA = "0x56399B0")]
	public XmlNodeWrapper(XmlNode node)
	{
	}

	[Token(Token = "0x6000F27")]
	[Address(RVA = "0x563AA30", Offset = "0x5639A30", VA = "0x563AA30")]
	internal static IXmlNode WrapNode(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x6000F2D")]
	[Address(RVA = "0x563B260", Offset = "0x563A260", VA = "0x563B260", Slot = "11")]
	public IXmlNode AppendChild(IXmlNode newChild)
	{
		return null;
	}
}
