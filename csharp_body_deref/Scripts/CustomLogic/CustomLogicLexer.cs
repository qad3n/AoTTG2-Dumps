using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000446")]
public class CustomLogicLexer
{
	[Token(Token = "0x400127A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected string _source;

	[Token(Token = "0x400127B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected List<CustomLogicToken> _tokens;

	[Token(Token = "0x400127C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public string Error;

	[Token(Token = "0x400127D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int _line;

	[Token(Token = "0x400127E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private char[] _chars;

	[Token(Token = "0x170008D8")]
	public CustomLogicCompiler Compiler
	{
		[Token(Token = "0x6002E23")]
		[Address(RVA = "0x3E50E10", Offset = "0x3E50E10", VA = "0x3E50E10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002E24")]
		[Address(RVA = "0x3E50E20", Offset = "0x3E50E20", VA = "0x3E50E20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002E25")]
	[Address(RVA = "0x3E50E30", Offset = "0x3E50E30", VA = "0x3E50E30")]
	public CustomLogicLexer(string source, [Optional] CustomLogicCompiler compiler)
	{
	}

	[Token(Token = "0x6002E26")]
	[Address(RVA = "0x3E50F00", Offset = "0x3E50F00", VA = "0x3E50F00")]
	public string GetLineNumberString(int line)
	{
		return null;
	}

	[Token(Token = "0x6002E27")]
	[Address(RVA = "0x3E50F30", Offset = "0x3E50F30", VA = "0x3E50F30")]
	public List<CustomLogicToken> GetTokens()
	{
		return null;
	}

	[Token(Token = "0x6002E28")]
	[Address(RVA = "0x3E51E30", Offset = "0x3E51E30", VA = "0x3E51E30")]
	private void AddToken(CustomLogicTokenType type, object value, int line)
	{
	}

	[Token(Token = "0x6002E29")]
	[Address(RVA = "0x3E51F10", Offset = "0x3E51F10", VA = "0x3E51F10")]
	private string ScanAlphaSymbol(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x6002E2A")]
	[Address(RVA = "0x3E51CD0", Offset = "0x3E51CD0", VA = "0x3E51CD0")]
	private string ScanBool(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x6002E2B")]
	[Address(RVA = "0x3E521F0", Offset = "0x3E521F0", VA = "0x3E521F0")]
	private string ScanNumber(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x6002E2C")]
	[Address(RVA = "0x3E520C0", Offset = "0x3E520C0", VA = "0x3E520C0")]
	private string ScanName(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x6002E2D")]
	[Address(RVA = "0x3E52320", Offset = "0x3E52320", VA = "0x3E52320")]
	private string ScanStringLiteral(int startIndex, out int rawLiteralLength)
	{
		return null;
	}

	[Token(Token = "0x6002E2E")]
	[Address(RVA = "0x3E525D0", Offset = "0x3E525D0", VA = "0x3E525D0")]
	private string ScanComment(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x6002E2F")]
	[Address(RVA = "0x3E526F0", Offset = "0x3E526F0", VA = "0x3E526F0")]
	private string ScanBlockComment(int startIndex)
	{
		return null;
	}
}
