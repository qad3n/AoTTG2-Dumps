using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq;

[Token(Token = "0x2000189")]
public class JTokenReader : JsonReader, IJsonLineInfo
{
	[Token(Token = "0x400073E")]
	[FieldOffset(Offset = "0x78")]
	private readonly JToken _root;

	[Token(Token = "0x400073F")]
	[FieldOffset(Offset = "0x80")]
	private string? _initialPath;

	[Token(Token = "0x4000740")]
	[FieldOffset(Offset = "0x88")]
	private JToken? _parent;

	[Token(Token = "0x4000741")]
	[FieldOffset(Offset = "0x90")]
	private JToken? _current;

	[Token(Token = "0x1700022B")]
	public JToken? CurrentToken
	{
		[Token(Token = "0x6000D78")]
		[Address(RVA = "0x3B34490", Offset = "0x3B34490", VA = "0x3B34490")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022C")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELineNumber
	{
		[Token(Token = "0x6000D84")]
		[Address(RVA = "0x3B35130", Offset = "0x3B35130", VA = "0x3B35130", Slot = "33")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022D")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELinePosition
	{
		[Token(Token = "0x6000D85")]
		[Address(RVA = "0x3B351E0", Offset = "0x3B351E0", VA = "0x3B351E0", Slot = "34")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022E")]
	public override string Path
	{
		[Token(Token = "0x6000D86")]
		[Address(RVA = "0x3B35290", Offset = "0x3B35290", VA = "0x3B35290", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D79")]
	[Address(RVA = "0x3B344A0", Offset = "0x3B344A0", VA = "0x3B344A0")]
	public JTokenReader(JToken token)
	{
	}

	[Token(Token = "0x6000D7A")]
	[Address(RVA = "0x3B34500", Offset = "0x3B34500", VA = "0x3B34500")]
	public JTokenReader(JToken token, string initialPath)
	{
	}

	[Token(Token = "0x6000D7B")]
	[Address(RVA = "0x3B34580", Offset = "0x3B34580", VA = "0x3B34580", Slot = "21")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7C")]
	[Address(RVA = "0x3B34740", Offset = "0x3B34740", VA = "0x3B34740")]
	private bool ReadOver(JToken t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x3B34E30", Offset = "0x3B34E30", VA = "0x3B34E30")]
	private bool ReadToEnd()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7E")]
	[Address(RVA = "0x3B34F00", Offset = "0x3B34F00", VA = "0x3B34F00")]
	private JsonToken? GetEndToken(JContainer c)
	{
		return null;
	}

	[Token(Token = "0x6000D7F")]
	[Address(RVA = "0x3B346B0", Offset = "0x3B346B0", VA = "0x3B346B0")]
	private bool ReadInto(JContainer c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D80")]
	[Address(RVA = "0x3B34E60", Offset = "0x3B34E60", VA = "0x3B34E60")]
	private bool SetEnd(JContainer c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D81")]
	[Address(RVA = "0x3B34800", Offset = "0x3B34800", VA = "0x3B34800")]
	private void SetToken(JToken token)
	{
	}

	[Token(Token = "0x6000D82")]
	[Address(RVA = "0x3B35060", Offset = "0x3B35060", VA = "0x3B35060")]
	private string? SafeToString(object? value)
	{
		return null;
	}

	[Token(Token = "0x6000D83")]
	[Address(RVA = "0x3B35090", Offset = "0x3B35090", VA = "0x3B35090", Slot = "32")]
	private bool Newtonsoft_002EJson_002EIJsonLineInfo_002EHasLineInfo()
	{
		return default(bool);
	}
}
