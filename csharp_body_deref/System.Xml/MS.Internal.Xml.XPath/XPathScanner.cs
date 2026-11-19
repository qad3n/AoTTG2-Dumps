// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.XPathScanner
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002CD")]
internal sealed class XPathScanner
{
	[Token(Token = "0x20002CE")]
	public enum LexKind
	{
		[Token(Token = "0x4000ECD")]
		Comma = 44,
		[Token(Token = "0x4000ECE")]
		Slash = 47,
		[Token(Token = "0x4000ECF")]
		At = 64,
		[Token(Token = "0x4000ED0")]
		Dot = 46,
		[Token(Token = "0x4000ED1")]
		LParens = 40,
		[Token(Token = "0x4000ED2")]
		RParens = 41,
		[Token(Token = "0x4000ED3")]
		LBracket = 91,
		[Token(Token = "0x4000ED4")]
		RBracket = 93,
		[Token(Token = "0x4000ED5")]
		Star = 42,
		[Token(Token = "0x4000ED6")]
		Plus = 43,
		[Token(Token = "0x4000ED7")]
		Minus = 45,
		[Token(Token = "0x4000ED8")]
		Eq = 61,
		[Token(Token = "0x4000ED9")]
		Lt = 60,
		[Token(Token = "0x4000EDA")]
		Gt = 62,
		[Token(Token = "0x4000EDB")]
		Bang = 33,
		[Token(Token = "0x4000EDC")]
		Dollar = 36,
		[Token(Token = "0x4000EDD")]
		Apos = 39,
		[Token(Token = "0x4000EDE")]
		Quote = 34,
		[Token(Token = "0x4000EDF")]
		Union = 124,
		[Token(Token = "0x4000EE0")]
		Ne = 78,
		[Token(Token = "0x4000EE1")]
		Le = 76,
		[Token(Token = "0x4000EE2")]
		Ge = 71,
		[Token(Token = "0x4000EE3")]
		And = 65,
		[Token(Token = "0x4000EE4")]
		Or = 79,
		[Token(Token = "0x4000EE5")]
		DotDot = 68,
		[Token(Token = "0x4000EE6")]
		SlashSlash = 83,
		[Token(Token = "0x4000EE7")]
		Name = 110,
		[Token(Token = "0x4000EE8")]
		String = 115,
		[Token(Token = "0x4000EE9")]
		Number = 100,
		[Token(Token = "0x4000EEA")]
		Axe = 97,
		[Token(Token = "0x4000EEB")]
		Eof = 69
	}

	[Token(Token = "0x4000EC2")]
	[FieldOffset(Offset = "0x10")]
	private string _xpathExpr;

	[Token(Token = "0x4000EC3")]
	[FieldOffset(Offset = "0x18")]
	private int _xpathExprIndex;

	[Token(Token = "0x4000EC4")]
	[FieldOffset(Offset = "0x1C")]
	private LexKind _kind;

	[Token(Token = "0x4000EC5")]
	[FieldOffset(Offset = "0x20")]
	private char _currentChar;

	[Token(Token = "0x4000EC6")]
	[FieldOffset(Offset = "0x28")]
	private string _name;

	[Token(Token = "0x4000EC7")]
	[FieldOffset(Offset = "0x30")]
	private string _prefix;

	[Token(Token = "0x4000EC8")]
	[FieldOffset(Offset = "0x38")]
	private string _stringValue;

	[Token(Token = "0x4000EC9")]
	[FieldOffset(Offset = "0x40")]
	private double _numberValue;

	[Token(Token = "0x4000ECA")]
	[FieldOffset(Offset = "0x48")]
	private bool _canBeFunction;

	[Token(Token = "0x4000ECB")]
	[FieldOffset(Offset = "0x50")]
	private XmlCharType _xmlCharType;

	[Token(Token = "0x1700073E")]
	public string SourceText
	{
		[Token(Token = "0x6001C46")]
		[Address(RVA = "0x6093B20", Offset = "0x6092B20", VA = "0x6093B20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700073F")]
	private char CurrentChar
	{
		[Token(Token = "0x6001C47")]
		[Address(RVA = "0x6093B30", Offset = "0x6092B30", VA = "0x6093B30")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000740")]
	public LexKind Kind
	{
		[Token(Token = "0x6001C49")]
		[Address(RVA = "0x6093B40", Offset = "0x6092B40", VA = "0x6093B40")]
		get
		{
			return default(LexKind);
		}
	}

	[Token(Token = "0x17000741")]
	public string Name
	{
		[Token(Token = "0x6001C4A")]
		[Address(RVA = "0x6093B50", Offset = "0x6092B50", VA = "0x6093B50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000742")]
	public string Prefix
	{
		[Token(Token = "0x6001C4B")]
		[Address(RVA = "0x6093B60", Offset = "0x6092B60", VA = "0x6093B60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000743")]
	public string StringValue
	{
		[Token(Token = "0x6001C4C")]
		[Address(RVA = "0x6093B70", Offset = "0x6092B70", VA = "0x6093B70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000744")]
	public double NumberValue
	{
		[Token(Token = "0x6001C4D")]
		[Address(RVA = "0x6093B80", Offset = "0x6092B80", VA = "0x6093B80")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x17000745")]
	public bool CanBeFunction
	{
		[Token(Token = "0x6001C4E")]
		[Address(RVA = "0x6093B90", Offset = "0x6092B90", VA = "0x6093B90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001C45")]
	[Address(RVA = "0x608FC70", Offset = "0x608EC70", VA = "0x608FC70")]
	public XPathScanner(string xpathExpr)
	{
	}

	[Token(Token = "0x6001C48")]
	[Address(RVA = "0x6093AD0", Offset = "0x6092AD0", VA = "0x6093AD0")]
	private bool NextChar()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C4F")]
	[Address(RVA = "0x6093BA0", Offset = "0x6092BA0", VA = "0x6093BA0")]
	private void SkipSpace()
	{
	}

	[Token(Token = "0x6001C50")]
	[Address(RVA = "0x60921E0", Offset = "0x60911E0", VA = "0x60921E0")]
	public bool NextLex()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C51")]
	[Address(RVA = "0x6093DF0", Offset = "0x6092DF0", VA = "0x6093DF0")]
	private double ScanNumber()
	{
		return default(double);
	}

	[Token(Token = "0x6001C52")]
	[Address(RVA = "0x6093C00", Offset = "0x6092C00", VA = "0x6093C00")]
	private double ScanFraction()
	{
		return default(double);
	}

	[Token(Token = "0x6001C53")]
	[Address(RVA = "0x6093CD0", Offset = "0x6092CD0", VA = "0x6093CD0")]
	private string ScanString()
	{
		return null;
	}

	[Token(Token = "0x6001C54")]
	[Address(RVA = "0x6093F10", Offset = "0x6092F10", VA = "0x6093F10")]
	private string ScanName()
	{
		return null;
	}
}
