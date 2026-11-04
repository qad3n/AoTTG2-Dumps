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
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022C")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELineNumber
	{
		[Token(Token = "0x6000D84")]
		[Address(RVA = "0x1C98B80", Offset = "0x1C97180", VA = "0x181C98B80", Slot = "33")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022D")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELinePosition
	{
		[Token(Token = "0x6000D85")]
		[Address(RVA = "0x1C98BE0", Offset = "0x1C971E0", VA = "0x181C98BE0", Slot = "34")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022E")]
	public override string Path
	{
		[Token(Token = "0x6000D86")]
		[Address(RVA = "0x1C9A100", Offset = "0x1C98700", VA = "0x181C9A100", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D79")]
	[Address(RVA = "0x1C9A000", Offset = "0x1C98600", VA = "0x181C9A000")]
	public JTokenReader(JToken token)
	{
	}

	[Token(Token = "0x6000D7A")]
	[Address(RVA = "0x1C9A070", Offset = "0x1C98670", VA = "0x181C9A070")]
	public JTokenReader(JToken token, string initialPath)
	{
	}

	[Token(Token = "0x6000D7B")]
	[Address(RVA = "0x1C99520", Offset = "0x1C97B20", VA = "0x181C99520", Slot = "21")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7C")]
	[Address(RVA = "0x1C98CF0", Offset = "0x1C972F0", VA = "0x181C98CF0")]
	private bool ReadOver(JToken t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x1C994E0", Offset = "0x1C97AE0", VA = "0x181C994E0")]
	private bool ReadToEnd()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7E")]
	[Address(RVA = "0x1C989B0", Offset = "0x1C96FB0", VA = "0x181C989B0")]
	private JsonToken? GetEndToken(JContainer c)
	{
		return null;
	}

	[Token(Token = "0x6000D7F")]
	[Address(RVA = "0x1C98C40", Offset = "0x1C97240", VA = "0x181C98C40")]
	private bool ReadInto(JContainer c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D80")]
	[Address(RVA = "0x1C996A0", Offset = "0x1C97CA0", VA = "0x181C996A0")]
	private bool SetEnd(JContainer c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D81")]
	[Address(RVA = "0x1C99850", Offset = "0x1C97E50", VA = "0x181C99850")]
	private void SetToken(JToken token)
	{
	}

	[Token(Token = "0x6000D82")]
	[Address(RVA = "0x1C99680", Offset = "0x1C97C80", VA = "0x181C99680")]
	private string? SafeToString(object? value)
	{
		return null;
	}

	[Token(Token = "0x6000D83")]
	[Address(RVA = "0x1C98B20", Offset = "0x1C97120", VA = "0x181C98B20", Slot = "32")]
	private bool Newtonsoft_002EJson_002EIJsonLineInfo_002EHasLineInfo()
	{
		return default(bool);
	}
}
