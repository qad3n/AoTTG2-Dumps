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
		[Address(RVA = "0x3E29DE0", Offset = "0x3E29DE0", VA = "0x3E29DE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022C")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELineNumber
	{
		[Token(Token = "0x6000D84")]
		[Address(RVA = "0x3E2AA80", Offset = "0x3E2AA80", VA = "0x3E2AA80", Slot = "33")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022D")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELinePosition
	{
		[Token(Token = "0x6000D85")]
		[Address(RVA = "0x3E2AB30", Offset = "0x3E2AB30", VA = "0x3E2AB30", Slot = "34")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022E")]
	public override string Path
	{
		[Token(Token = "0x6000D86")]
		[Address(RVA = "0x3E2ABE0", Offset = "0x3E2ABE0", VA = "0x3E2ABE0", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D79")]
	[Address(RVA = "0x3E29DF0", Offset = "0x3E29DF0", VA = "0x3E29DF0")]
	public JTokenReader(JToken token)
	{
	}

	[Token(Token = "0x6000D7A")]
	[Address(RVA = "0x3E29E50", Offset = "0x3E29E50", VA = "0x3E29E50")]
	public JTokenReader(JToken token, string initialPath)
	{
	}

	[Token(Token = "0x6000D7B")]
	[Address(RVA = "0x3E29ED0", Offset = "0x3E29ED0", VA = "0x3E29ED0", Slot = "21")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7C")]
	[Address(RVA = "0x3E2A090", Offset = "0x3E2A090", VA = "0x3E2A090")]
	private bool ReadOver(JToken t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x3E2A780", Offset = "0x3E2A780", VA = "0x3E2A780")]
	private bool ReadToEnd()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7E")]
	[Address(RVA = "0x3E2A850", Offset = "0x3E2A850", VA = "0x3E2A850")]
	private JsonToken? GetEndToken(JContainer c)
	{
		return null;
	}

	[Token(Token = "0x6000D7F")]
	[Address(RVA = "0x3E2A000", Offset = "0x3E2A000", VA = "0x3E2A000")]
	private bool ReadInto(JContainer c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D80")]
	[Address(RVA = "0x3E2A7B0", Offset = "0x3E2A7B0", VA = "0x3E2A7B0")]
	private bool SetEnd(JContainer c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D81")]
	[Address(RVA = "0x3E2A150", Offset = "0x3E2A150", VA = "0x3E2A150")]
	private void SetToken(JToken token)
	{
	}

	[Token(Token = "0x6000D82")]
	[Address(RVA = "0x3E2A9B0", Offset = "0x3E2A9B0", VA = "0x3E2A9B0")]
	private string? SafeToString(object? value)
	{
		return null;
	}

	[Token(Token = "0x6000D83")]
	[Address(RVA = "0x3E2A9E0", Offset = "0x3E2A9E0", VA = "0x3E2A9E0", Slot = "32")]
	private bool Newtonsoft_002EJson_002EIJsonLineInfo_002EHasLineInfo()
	{
		return default(bool);
	}
}
