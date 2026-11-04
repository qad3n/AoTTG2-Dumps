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
	[Address(RVA = "0x2E67F00", Offset = "0x2E66500", VA = "0x182E67F00")]
	private fsJsonParser(string input)
	{
	}

	[Token(Token = "0x6001285")]
	[Address(RVA = "0x2E652B0", Offset = "0x2E638B0", VA = "0x182E652B0")]
	private fsResult MakeFailure(string message)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001286")]
	[Address(RVA = "0x2E661A0", Offset = "0x2E647A0", VA = "0x182E661A0")]
	private bool TryMoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001287")]
	[Address(RVA = "0x2E651C0", Offset = "0x2E637C0", VA = "0x182E651C0")]
	private bool HasValue()
	{
		return default(bool);
	}

	[Token(Token = "0x6001288")]
	[Address(RVA = "0x2E651F0", Offset = "0x2E637F0", VA = "0x182E651F0")]
	private bool HasValue(int offset)
	{
		return default(bool);
	}

	[Token(Token = "0x6001289")]
	[Address(RVA = "0x2E65160", Offset = "0x2E63760", VA = "0x182E65160")]
	private char Character()
	{
		return default(char);
	}

	[Token(Token = "0x600128A")]
	[Address(RVA = "0x2E65190", Offset = "0x2E63790", VA = "0x182E65190")]
	private char Character(int offset)
	{
		return default(char);
	}

	[Token(Token = "0x600128B")]
	[Address(RVA = "0x2E65EF0", Offset = "0x2E644F0", VA = "0x182E65EF0")]
	private void SkipSpace()
	{
	}

	[Token(Token = "0x600128C")]
	[Address(RVA = "0x2E66510", Offset = "0x2E64B10", VA = "0x182E66510")]
	private fsResult TryParseExact(string content)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600128D")]
	[Address(RVA = "0x2E67540", Offset = "0x2E65B40", VA = "0x182E67540")]
	private fsResult TryParseTrue(out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600128E")]
	[Address(RVA = "0x2E66680", Offset = "0x2E64C80", VA = "0x182E66680")]
	private fsResult TryParseFalse(out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600128F")]
	[Address(RVA = "0x2E667E0", Offset = "0x2E64DE0", VA = "0x182E667E0")]
	private fsResult TryParseNull(out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001290")]
	[Address(RVA = "0x2E65260", Offset = "0x2E63860", VA = "0x182E65260")]
	private bool IsSeparator(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001291")]
	[Address(RVA = "0x2E66920", Offset = "0x2E64F20", VA = "0x182E66920")]
	private fsResult TryParseNumber(out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001292")]
	[Address(RVA = "0x2E67220", Offset = "0x2E65820", VA = "0x182E67220")]
	private fsResult TryParseString(out string str)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001293")]
	[Address(RVA = "0x2E661D0", Offset = "0x2E647D0", VA = "0x182E661D0")]
	private fsResult TryParseArray(out fsData arr)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001294")]
	[Address(RVA = "0x2E66CF0", Offset = "0x2E652F0", VA = "0x182E66CF0")]
	private fsResult TryParseObject(out fsData obj)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001295")]
	[Address(RVA = "0x2E65930", Offset = "0x2E63F30", VA = "0x182E65930")]
	private fsResult RunParse(out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001296")]
	[Address(RVA = "0x2E657D0", Offset = "0x2E63DD0", VA = "0x182E657D0")]
	public static fsResult Parse(string input, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001297")]
	[Address(RVA = "0x2E65620", Offset = "0x2E63C20", VA = "0x182E65620")]
	public static fsData Parse(string input)
	{
		return null;
	}

	[Token(Token = "0x6001298")]
	[Address(RVA = "0x2E65230", Offset = "0x2E63830", VA = "0x182E65230")]
	private bool IsHex(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001299")]
	[Address(RVA = "0x2E654A0", Offset = "0x2E63AA0", VA = "0x182E654A0")]
	private uint ParseSingleChar(char c1, uint multipliyer)
	{
		return default(uint);
	}

	[Token(Token = "0x600129A")]
	[Address(RVA = "0x2E654E0", Offset = "0x2E63AE0", VA = "0x182E654E0")]
	private uint ParseUnicode(char c1, char c2, char c3, char c4)
	{
		return default(uint);
	}

	[Token(Token = "0x600129B")]
	[Address(RVA = "0x2E676A0", Offset = "0x2E65CA0", VA = "0x182E676A0")]
	private fsResult TryUnescapeChar(out char escaped)
	{
		return default(fsResult);
	}
}
