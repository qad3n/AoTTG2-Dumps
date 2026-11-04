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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000260")]
	public XmlNodeType NodeType
	{
		[Token(Token = "0x6000F23")]
		[Address(RVA = "0x1A1F3F0", Offset = "0x1A1D9F0", VA = "0x181A1F3F0", Slot = "4")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000261")]
	public virtual string? LocalName
	{
		[Token(Token = "0x6000F24")]
		[Address(RVA = "0x1CBA930", Offset = "0x1CB8F30", VA = "0x181CBA930", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000262")]
	public List<IXmlNode> ChildNodes
	{
		[Token(Token = "0x6000F25")]
		[Address(RVA = "0x1CBA480", Offset = "0x1CB8A80", VA = "0x181CBA480", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000263")]
	protected virtual bool HasChildNodes
	{
		[Token(Token = "0x6000F26")]
		[Address(RVA = "0x1CBA900", Offset = "0x1CB8F00", VA = "0x181CBA900", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000264")]
	public List<IXmlNode> Attributes
	{
		[Token(Token = "0x6000F28")]
		[Address(RVA = "0x1CBA040", Offset = "0x1CB8640", VA = "0x181CBA040", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000265")]
	private bool HasAttributes
	{
		[Token(Token = "0x6000F29")]
		[Address(RVA = "0x1CBA850", Offset = "0x1CB8E50", VA = "0x181CBA850")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000266")]
	public IXmlNode? ParentNode
	{
		[Token(Token = "0x6000F2A")]
		[Address(RVA = "0x1CBA990", Offset = "0x1CB8F90", VA = "0x181CBA990", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000267")]
	public string? Value
	{
		[Token(Token = "0x6000F2B")]
		[Address(RVA = "0x1A1F330", Offset = "0x1A1D930", VA = "0x181A1F330", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F2C")]
		[Address(RVA = "0x1CBAA30", Offset = "0x1CB9030", VA = "0x181CBAA30", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000268")]
	public string? NamespaceUri
	{
		[Token(Token = "0x6000F2E")]
		[Address(RVA = "0x1CBA960", Offset = "0x1CB8F60", VA = "0x181CBA960", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F21")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public XmlNodeWrapper(XmlNode node)
	{
	}

	[Token(Token = "0x6000F27")]
	[Address(RVA = "0x1CB9E50", Offset = "0x1CB8450", VA = "0x181CB9E50")]
	internal static IXmlNode WrapNode(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x6000F2D")]
	[Address(RVA = "0x1CB9D90", Offset = "0x1CB8390", VA = "0x181CB9D90", Slot = "11")]
	public IXmlNode AppendChild(IXmlNode newChild)
	{
		return null;
	}
}
