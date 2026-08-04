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

[Token(Token = "0x2000209")]
public class fsJsonParser
{
	[Token(Token = "0x4000993")]
	[FieldOffset(Offset = "0x10")]
	private readonly StringBuilder _cachedStringBuilder;

	[Token(Token = "0x4000994")]
	[FieldOffset(Offset = "0x18")]
	private int _start;

	[Token(Token = "0x4000995")]
	[FieldOffset(Offset = "0x20")]
	private string _input;

	[Token(Token = "0x600124C")]
	[Address(RVA = "0x4D7C850", Offset = "0x4D7C850", VA = "0x4D7C850")]
	private fsJsonParser(string input)
	{
	}

	[Token(Token = "0x600124D")]
	[Address(RVA = "0x4D7C8D0", Offset = "0x4D7C8D0", VA = "0x4D7C8D0")]
	private fsResult MakeFailure(string message)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600124E")]
	[Address(RVA = "0x4D7CA90", Offset = "0x4D7CA90", VA = "0x4D7CA90")]
	private bool TryMoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x600124F")]
	[Address(RVA = "0x4D7CAC0", Offset = "0x4D7CAC0", VA = "0x4D7CAC0")]
	private bool HasValue()
	{
		return default(bool);
	}

	[Token(Token = "0x6001250")]
	[Address(RVA = "0x4D7CAF0", Offset = "0x4D7CAF0", VA = "0x4D7CAF0")]
	private bool HasValue(int offset)
	{
		return default(bool);
	}

	[Token(Token = "0x6001251")]
	[Address(RVA = "0x4D7CB10", Offset = "0x4D7CB10", VA = "0x4D7CB10")]
	private char Character()
	{
		return default(char);
	}

	[Token(Token = "0x6001252")]
	[Address(RVA = "0x4D7CB30", Offset = "0x4D7CB30", VA = "0x4D7CB30")]
	private char Character(int offset)
	{
		return default(char);
	}

	[Token(Token = "0x6001253")]
	[Address(RVA = "0x4D7CB50", Offset = "0x4D7CB50", VA = "0x4D7CB50")]
	private void SkipSpace()
	{
	}

	[Token(Token = "0x6001254")]
	[Address(RVA = "0x4D7CE80", Offset = "0x4D7CE80", VA = "0x4D7CE80")]
	private fsResult TryParseExact(string content)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001255")]
	[Address(RVA = "0x4D7CFE0", Offset = "0x4D7CFE0", VA = "0x4D7CFE0")]
	private fsResult TryParseTrue(out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001256")]
	[Address(RVA = "0x4D7D110", Offset = "0x4D7D110", VA = "0x4D7D110")]
	private fsResult TryParseFalse(out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001257")]
	[Address(RVA = "0x4D7D240", Offset = "0x4D7D240", VA = "0x4D7D240")]
	private fsResult TryParseNull(out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001258")]
	[Address(RVA = "0x4D7D350", Offset = "0x4D7D350", VA = "0x4D7D350")]
	private bool IsSeparator(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001259")]
	[Address(RVA = "0x4D7D3B0", Offset = "0x4D7D3B0", VA = "0x4D7D3B0")]
	private fsResult TryParseNumber(out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600125A")]
	[Address(RVA = "0x4D7D730", Offset = "0x4D7D730", VA = "0x4D7D730")]
	private fsResult TryParseString(out string str)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600125B")]
	[Address(RVA = "0x4D7E210", Offset = "0x4D7E210", VA = "0x4D7E210")]
	private fsResult TryParseArray(out fsData arr)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600125C")]
	[Address(RVA = "0x4D7E8C0", Offset = "0x4D7E8C0", VA = "0x4D7E8C0")]
	private fsResult TryParseObject(out fsData obj)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600125D")]
	[Address(RVA = "0x4D7E5F0", Offset = "0x4D7E5F0", VA = "0x4D7E5F0")]
	private fsResult RunParse(out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600125E")]
	[Address(RVA = "0x4D7EF00", Offset = "0x4D7EF00", VA = "0x4D7EF00")]
	public static fsResult Parse(string input, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600125F")]
	[Address(RVA = "0x4D7F040", Offset = "0x4D7F040", VA = "0x4D7F040")]
	public static fsData Parse(string input)
	{
		return null;
	}

	[Token(Token = "0x6001260")]
	[Address(RVA = "0x4D7F160", Offset = "0x4D7F160", VA = "0x4D7F160")]
	private bool IsHex(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001261")]
	[Address(RVA = "0x4D7F180", Offset = "0x4D7F180", VA = "0x4D7F180")]
	private uint ParseSingleChar(char c1, uint multipliyer)
	{
		return default(uint);
	}

	[Token(Token = "0x6001262")]
	[Address(RVA = "0x4D7F1B0", Offset = "0x4D7F1B0", VA = "0x4D7F1B0")]
	private uint ParseUnicode(char c1, char c2, char c3, char c4)
	{
		return default(uint);
	}

	[Token(Token = "0x6001263")]
	[Address(RVA = "0x4D7DA50", Offset = "0x4D7DA50", VA = "0x4D7DA50")]
	private fsResult TryUnescapeChar(out char escaped)
	{
		return default(fsResult);
	}
}
