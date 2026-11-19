// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsJsonParser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x2000210")]
public class fsJsonParser
{
	[Token(Token = "0x40009A3")]
	[FieldOffset(Offset = "0x10")]
	private readonly StringBuilder _cachedStringBuilder;

	[Token(Token = "0x40009A4")]
	[FieldOffset(Offset = "0x18")]
	private int _start;

	[Token(Token = "0x40009A5")]
	[FieldOffset(Offset = "0x20")]
	private string _input;

	[Token(Token = "0x6001284")]
	[Address(RVA = "0x68659D0", Offset = "0x68649D0", VA = "0x68659D0")]
	private fsJsonParser(string input)
	{
	}

	[Token(Token = "0x6001285")]
	[Address(RVA = "0x6865A50", Offset = "0x6864A50", VA = "0x6865A50")]
	private fsResult MakeFailure(string message)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001286")]
	[Address(RVA = "0x6865C20", Offset = "0x6864C20", VA = "0x6865C20")]
	private bool TryMoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001287")]
	[Address(RVA = "0x6865C50", Offset = "0x6864C50", VA = "0x6865C50")]
	private bool HasValue()
	{
		return default(bool);
	}

	[Token(Token = "0x6001288")]
	[Address(RVA = "0x6865C80", Offset = "0x6864C80", VA = "0x6865C80")]
	private bool HasValue(int offset)
	{
		return default(bool);
	}

	[Token(Token = "0x6001289")]
	[Address(RVA = "0x6865CA0", Offset = "0x6864CA0", VA = "0x6865CA0")]
	private char Character()
	{
		return default(char);
	}

	[Token(Token = "0x600128A")]
	[Address(RVA = "0x6865CC0", Offset = "0x6864CC0", VA = "0x6865CC0")]
	private char Character(int offset)
	{
		return default(char);
	}

	[Token(Token = "0x600128B")]
	[Address(RVA = "0x6865CE0", Offset = "0x6864CE0", VA = "0x6865CE0")]
	private void SkipSpace()
	{
	}

	[Token(Token = "0x600128C")]
	[Address(RVA = "0x6865FF0", Offset = "0x6864FF0", VA = "0x6865FF0")]
	private fsResult TryParseExact(string content)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600128D")]
	[Address(RVA = "0x6866150", Offset = "0x6865150", VA = "0x6866150")]
	private fsResult TryParseTrue(out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600128E")]
	[Address(RVA = "0x6866280", Offset = "0x6865280", VA = "0x6866280")]
	private fsResult TryParseFalse(out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600128F")]
	[Address(RVA = "0x68663B0", Offset = "0x68653B0", VA = "0x68663B0")]
	private fsResult TryParseNull(out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001290")]
	[Address(RVA = "0x68664C0", Offset = "0x68654C0", VA = "0x68664C0")]
	private bool IsSeparator(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001291")]
	[Address(RVA = "0x6866510", Offset = "0x6865510", VA = "0x6866510")]
	private fsResult TryParseNumber(out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001292")]
	[Address(RVA = "0x68668B0", Offset = "0x68658B0", VA = "0x68668B0")]
	private fsResult TryParseString(out string str)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001293")]
	[Address(RVA = "0x68671F0", Offset = "0x68661F0", VA = "0x68671F0")]
	private fsResult TryParseArray(out fsData arr)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001294")]
	[Address(RVA = "0x68678D0", Offset = "0x68668D0", VA = "0x68678D0")]
	private fsResult TryParseObject(out fsData obj)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001295")]
	[Address(RVA = "0x68675E0", Offset = "0x68665E0", VA = "0x68675E0")]
	private fsResult RunParse(out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001296")]
	[Address(RVA = "0x6867E50", Offset = "0x6866E50", VA = "0x6867E50")]
	public static fsResult Parse(string input, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001297")]
	[Address(RVA = "0x6867F80", Offset = "0x6866F80", VA = "0x6867F80")]
	public static fsData Parse(string input)
	{
		return null;
	}

	[Token(Token = "0x6001298")]
	[Address(RVA = "0x6868000", Offset = "0x6867000", VA = "0x6868000")]
	private bool IsHex(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001299")]
	[Address(RVA = "0x6868020", Offset = "0x6867020", VA = "0x6868020")]
	private uint ParseSingleChar(char c1, uint multipliyer)
	{
		return default(uint);
	}

	[Token(Token = "0x600129A")]
	[Address(RVA = "0x6868050", Offset = "0x6867050", VA = "0x6868050")]
	private uint ParseUnicode(char c1, char c2, char c3, char c4)
	{
		return default(uint);
	}

	[Token(Token = "0x600129B")]
	[Address(RVA = "0x6866BF0", Offset = "0x6865BF0", VA = "0x6866BF0")]
	private fsResult TryUnescapeChar(out char escaped)
	{
		return default(fsResult);
	}
}
