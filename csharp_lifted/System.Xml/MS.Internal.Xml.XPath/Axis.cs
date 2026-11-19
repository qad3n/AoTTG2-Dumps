// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.Axis
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x200028A")]
internal class Axis : AstNode
{
	[Token(Token = "0x200028B")]
	public enum AxisType
	{
		[Token(Token = "0x4000DF5")]
		Ancestor,
		[Token(Token = "0x4000DF6")]
		AncestorOrSelf,
		[Token(Token = "0x4000DF7")]
		Attribute,
		[Token(Token = "0x4000DF8")]
		Child,
		[Token(Token = "0x4000DF9")]
		Descendant,
		[Token(Token = "0x4000DFA")]
		DescendantOrSelf,
		[Token(Token = "0x4000DFB")]
		Following,
		[Token(Token = "0x4000DFC")]
		FollowingSibling,
		[Token(Token = "0x4000DFD")]
		Namespace,
		[Token(Token = "0x4000DFE")]
		Parent,
		[Token(Token = "0x4000DFF")]
		Preceding,
		[Token(Token = "0x4000E00")]
		PrecedingSibling,
		[Token(Token = "0x4000E01")]
		Self,
		[Token(Token = "0x4000E02")]
		None
	}

	[Token(Token = "0x4000DED")]
	[FieldOffset(Offset = "0x10")]
	private AxisType _axisType;

	[Token(Token = "0x4000DEE")]
	[FieldOffset(Offset = "0x18")]
	private AstNode _input;

	[Token(Token = "0x4000DEF")]
	[FieldOffset(Offset = "0x20")]
	private string _prefix;

	[Token(Token = "0x4000DF0")]
	[FieldOffset(Offset = "0x28")]
	private string _name;

	[Token(Token = "0x4000DF1")]
	[FieldOffset(Offset = "0x30")]
	private XPathNodeType _nodeType;

	[Token(Token = "0x4000DF2")]
	[FieldOffset(Offset = "0x34")]
	protected bool abbrAxis;

	[Token(Token = "0x4000DF3")]
	[FieldOffset(Offset = "0x38")]
	private string _urn;

	[Token(Token = "0x170006CA")]
	public override AstType Type
	{
		[Token(Token = "0x6001A5B")]
		[Address(RVA = "0x607D580", Offset = "0x607C580", VA = "0x607D580", Slot = "4")]
		get
		{
			return default(AstType);
		}
	}

	[Token(Token = "0x170006CB")]
	public override XPathResultType ReturnType
	{
		[Token(Token = "0x6001A5C")]
		[Address(RVA = "0x607D590", Offset = "0x607C590", VA = "0x607D590", Slot = "5")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x170006CC")]
	public AstNode Input
	{
		[Token(Token = "0x6001A5D")]
		[Address(RVA = "0x607D5A0", Offset = "0x607C5A0", VA = "0x607D5A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A5E")]
		[Address(RVA = "0x607D5B0", Offset = "0x607C5B0", VA = "0x607D5B0")]
		set
		{
		}
	}

	[Token(Token = "0x170006CD")]
	public string Prefix
	{
		[Token(Token = "0x6001A5F")]
		[Address(RVA = "0x607D5C0", Offset = "0x607C5C0", VA = "0x607D5C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006CE")]
	public string Name
	{
		[Token(Token = "0x6001A60")]
		[Address(RVA = "0x607D5D0", Offset = "0x607C5D0", VA = "0x607D5D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006CF")]
	public XPathNodeType NodeType
	{
		[Token(Token = "0x6001A61")]
		[Address(RVA = "0x607D5E0", Offset = "0x607C5E0", VA = "0x607D5E0")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x170006D0")]
	public AxisType TypeOfAxis
	{
		[Token(Token = "0x6001A62")]
		[Address(RVA = "0x607D5F0", Offset = "0x607C5F0", VA = "0x607D5F0")]
		get
		{
			return default(AxisType);
		}
	}

	[Token(Token = "0x170006D1")]
	public bool AbbrAxis
	{
		[Token(Token = "0x6001A63")]
		[Address(RVA = "0x607D600", Offset = "0x607C600", VA = "0x607D600")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006D2")]
	public string Urn
	{
		[Token(Token = "0x6001A64")]
		[Address(RVA = "0x607D610", Offset = "0x607C610", VA = "0x607D610")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A65")]
		[Address(RVA = "0x607D620", Offset = "0x607C620", VA = "0x607D620")]
		set
		{
		}
	}

	[Token(Token = "0x6001A59")]
	[Address(RVA = "0x607D450", Offset = "0x607C450", VA = "0x607D450")]
	public Axis(AxisType axisType, AstNode input, string prefix, string name, XPathNodeType nodetype)
	{
	}

	[Token(Token = "0x6001A5A")]
	[Address(RVA = "0x607D4F0", Offset = "0x607C4F0", VA = "0x607D4F0")]
	public Axis(AxisType axisType, AstNode input)
	{
	}
}
