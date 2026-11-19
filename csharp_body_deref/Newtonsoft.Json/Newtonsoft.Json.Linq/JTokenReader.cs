// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JTokenReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x561D460", Offset = "0x561C460", VA = "0x561D460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022C")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELineNumber
	{
		[Token(Token = "0x6000D84")]
		[Address(RVA = "0x561E0F0", Offset = "0x561D0F0", VA = "0x561E0F0", Slot = "33")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022D")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELinePosition
	{
		[Token(Token = "0x6000D85")]
		[Address(RVA = "0x561E1A0", Offset = "0x561D1A0", VA = "0x561E1A0", Slot = "34")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022E")]
	public override string Path
	{
		[Token(Token = "0x6000D86")]
		[Address(RVA = "0x561E250", Offset = "0x561D250", VA = "0x561E250", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D79")]
	[Address(RVA = "0x561D470", Offset = "0x561C470", VA = "0x561D470")]
	public JTokenReader(JToken token)
	{
	}

	[Token(Token = "0x6000D7A")]
	[Address(RVA = "0x561D4D0", Offset = "0x561C4D0", VA = "0x561D4D0")]
	public JTokenReader(JToken token, string initialPath)
	{
	}

	[Token(Token = "0x6000D7B")]
	[Address(RVA = "0x561D550", Offset = "0x561C550", VA = "0x561D550", Slot = "21")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7C")]
	[Address(RVA = "0x561D710", Offset = "0x561C710", VA = "0x561D710")]
	private bool ReadOver(JToken t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x561DDF0", Offset = "0x561CDF0", VA = "0x561DDF0")]
	private bool ReadToEnd()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7E")]
	[Address(RVA = "0x561DEC0", Offset = "0x561CEC0", VA = "0x561DEC0")]
	private JsonToken? GetEndToken(JContainer c)
	{
		return null;
	}

	[Token(Token = "0x6000D7F")]
	[Address(RVA = "0x561D680", Offset = "0x561C680", VA = "0x561D680")]
	private bool ReadInto(JContainer c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D80")]
	[Address(RVA = "0x561DE20", Offset = "0x561CE20", VA = "0x561DE20")]
	private bool SetEnd(JContainer c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D81")]
	[Address(RVA = "0x561D7D0", Offset = "0x561C7D0", VA = "0x561D7D0")]
	private void SetToken(JToken token)
	{
	}

	[Token(Token = "0x6000D82")]
	[Address(RVA = "0x561E020", Offset = "0x561D020", VA = "0x561E020")]
	private string? SafeToString(object? value)
	{
		return null;
	}

	[Token(Token = "0x6000D83")]
	[Address(RVA = "0x561E050", Offset = "0x561D050", VA = "0x561E050", Slot = "32")]
	private bool Newtonsoft_002EJson_002EIJsonLineInfo_002EHasLineInfo()
	{
		return default(bool);
	}
}
