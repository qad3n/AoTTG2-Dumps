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
		[Address(RVA = "0x443A6F0", Offset = "0x443A6F0", VA = "0x443A6F0", Slot = "4")]
		get
		{
			return default(AstType);
		}
	}

	[Token(Token = "0x170006CB")]
	public override XPathResultType ReturnType
	{
		[Token(Token = "0x6001A5C")]
		[Address(RVA = "0x443A700", Offset = "0x443A700", VA = "0x443A700", Slot = "5")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x170006CC")]
	public AstNode Input
	{
		[Token(Token = "0x6001A5D")]
		[Address(RVA = "0x443A710", Offset = "0x443A710", VA = "0x443A710")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A5E")]
		[Address(RVA = "0x443A720", Offset = "0x443A720", VA = "0x443A720")]
		set
		{
		}
	}

	[Token(Token = "0x170006CD")]
	public string Prefix
	{
		[Token(Token = "0x6001A5F")]
		[Address(RVA = "0x443A730", Offset = "0x443A730", VA = "0x443A730")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006CE")]
	public string Name
	{
		[Token(Token = "0x6001A60")]
		[Address(RVA = "0x443A740", Offset = "0x443A740", VA = "0x443A740")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006CF")]
	public XPathNodeType NodeType
	{
		[Token(Token = "0x6001A61")]
		[Address(RVA = "0x443A750", Offset = "0x443A750", VA = "0x443A750")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x170006D0")]
	public AxisType TypeOfAxis
	{
		[Token(Token = "0x6001A62")]
		[Address(RVA = "0x443A760", Offset = "0x443A760", VA = "0x443A760")]
		get
		{
			return default(AxisType);
		}
	}

	[Token(Token = "0x170006D1")]
	public bool AbbrAxis
	{
		[Token(Token = "0x6001A63")]
		[Address(RVA = "0x443A770", Offset = "0x443A770", VA = "0x443A770")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006D2")]
	public string Urn
	{
		[Token(Token = "0x6001A64")]
		[Address(RVA = "0x443A780", Offset = "0x443A780", VA = "0x443A780")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A65")]
		[Address(RVA = "0x443A790", Offset = "0x443A790", VA = "0x443A790")]
		set
		{
		}
	}

	[Token(Token = "0x6001A59")]
	[Address(RVA = "0x443A5C0", Offset = "0x443A5C0", VA = "0x443A5C0")]
	public Axis(AxisType axisType, AstNode input, string prefix, string name, XPathNodeType nodetype)
	{
	}

	[Token(Token = "0x6001A5A")]
	[Address(RVA = "0x443A660", Offset = "0x443A660", VA = "0x443A660")]
	public Axis(AxisType axisType, AstNode input)
	{
	}
}
