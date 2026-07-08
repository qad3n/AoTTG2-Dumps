using System.Text;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x2000210")]
public class fsJsonParser
{
	[Token(Token = "0x40009A5")]
	[FieldOffset(Offset = "0x10")]
	private readonly StringBuilder _cachedStringBuilder;

	[Token(Token = "0x40009A6")]
	[FieldOffset(Offset = "0x18")]
	private int _start;

	[Token(Token = "0x40009A7")]
	[FieldOffset(Offset = "0x20")]
	private string _input;

	[Token(Token = "0x6001277")]
	[Address(RVA = "0x4A57380", Offset = "0x4A57380", VA = "0x4A57380")]
	private fsJsonParser(string input)
	{
	}

	[Token(Token = "0x6001278")]
	[Address(RVA = "0x4A57400", Offset = "0x4A57400", VA = "0x4A57400")]
	private fsResult MakeFailure(string message)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001279")]
	[Address(RVA = "0x4A575C0", Offset = "0x4A575C0", VA = "0x4A575C0")]
	private bool TryMoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x600127A")]
	[Address(RVA = "0x4A575F0", Offset = "0x4A575F0", VA = "0x4A575F0")]
	private bool HasValue()
	{
		return default(bool);
	}

	[Token(Token = "0x600127B")]
	[Address(RVA = "0x4A57620", Offset = "0x4A57620", VA = "0x4A57620")]
	private bool HasValue(int offset)
	{
		return default(bool);
	}

	[Token(Token = "0x600127C")]
	[Address(RVA = "0x4A57640", Offset = "0x4A57640", VA = "0x4A57640")]
	private char Character()
	{
		return default(char);
	}

	[Token(Token = "0x600127D")]
	[Address(RVA = "0x4A57660", Offset = "0x4A57660", VA = "0x4A57660")]
	private char Character(int offset)
	{
		return default(char);
	}

	[Token(Token = "0x600127E")]
	[Address(RVA = "0x4A57680", Offset = "0x4A57680", VA = "0x4A57680")]
	private void SkipSpace()
	{
	}

	[Token(Token = "0x600127F")]
	[Address(RVA = "0x4A579B0", Offset = "0x4A579B0", VA = "0x4A579B0")]
	private fsResult TryParseExact(string content)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001280")]
	[Address(RVA = "0x4A57B10", Offset = "0x4A57B10", VA = "0x4A57B10")]
	private fsResult TryParseTrue(out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001281")]
	[Address(RVA = "0x4A57C40", Offset = "0x4A57C40", VA = "0x4A57C40")]
	private fsResult TryParseFalse(out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001282")]
	[Address(RVA = "0x4A57D70", Offset = "0x4A57D70", VA = "0x4A57D70")]
	private fsResult TryParseNull(out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001283")]
	[Address(RVA = "0x4A57E80", Offset = "0x4A57E80", VA = "0x4A57E80")]
	private bool IsSeparator(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001284")]
	[Address(RVA = "0x4A57EE0", Offset = "0x4A57EE0", VA = "0x4A57EE0")]
	private fsResult TryParseNumber(out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001285")]
	[Address(RVA = "0x4A58260", Offset = "0x4A58260", VA = "0x4A58260")]
	private fsResult TryParseString(out string str)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001286")]
	[Address(RVA = "0x4A58D60", Offset = "0x4A58D60", VA = "0x4A58D60")]
	private fsResult TryParseArray(out fsData arr)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001287")]
	[Address(RVA = "0x4A59450", Offset = "0x4A59450", VA = "0x4A59450")]
	private fsResult TryParseObject(out fsData obj)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001288")]
	[Address(RVA = "0x4A59160", Offset = "0x4A59160", VA = "0x4A59160")]
	private fsResult RunParse(out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001289")]
	[Address(RVA = "0x4A59990", Offset = "0x4A59990", VA = "0x4A59990")]
	public static fsResult Parse(string input, out fsData data)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600128A")]
	[Address(RVA = "0x4A59AD0", Offset = "0x4A59AD0", VA = "0x4A59AD0")]
	public static fsData Parse(string input)
	{
		return null;
	}

	[Token(Token = "0x600128B")]
	[Address(RVA = "0x4A59B50", Offset = "0x4A59B50", VA = "0x4A59B50")]
	private bool IsHex(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600128C")]
	[Address(RVA = "0x4A59B70", Offset = "0x4A59B70", VA = "0x4A59B70")]
	private uint ParseSingleChar(char c1, uint multipliyer)
	{
		return default(uint);
	}

	[Token(Token = "0x600128D")]
	[Address(RVA = "0x4A59BA0", Offset = "0x4A59BA0", VA = "0x4A59BA0")]
	private uint ParseUnicode(char c1, char c2, char c3, char c4)
	{
		return default(uint);
	}

	[Token(Token = "0x600128E")]
	[Address(RVA = "0x4A585A0", Offset = "0x4A585A0", VA = "0x4A585A0")]
	private fsResult TryUnescapeChar(out char escaped)
	{
		return default(fsResult);
	}
}
