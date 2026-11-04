// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicLexer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicLexer.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicLexer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20005E2")]
public class CustomLogicLexer
{
	[Token(Token = "0x40019CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected string _source;

	[Token(Token = "0x40019CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected List<CustomLogicToken> _tokens;

	[Token(Token = "0x40019CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public string Error;

	[Token(Token = "0x40019CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int _line;

	[Token(Token = "0x40019D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private char[] _chars;

	[Token(Token = "0x17000A39")]
	public CustomLogicCompiler Compiler
	{
		[Token(Token = "0x60039AC")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60039AD")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60039AE")]
	[Address(RVA = "0x20A2EE0", Offset = "0x20A14E0", VA = "0x1820A2EE0")]
	public CustomLogicLexer(string source, [Optional] CustomLogicCompiler compiler)
	{
	}

	[Token(Token = "0x60039AF")]
	[Address(RVA = "0x20A1A00", Offset = "0x20A0000", VA = "0x1820A1A00")]
	public string GetLineNumberString(int line)
	{
		return null;
	}

	[Token(Token = "0x60039B0")]
	[Address(RVA = "0x20A1B50", Offset = "0x20A0150", VA = "0x1820A1B50")]
	public List<CustomLogicToken> GetTokens()
	{
		return null;
	}

	[Token(Token = "0x60039B1")]
	[Address(RVA = "0x20A1910", Offset = "0x209FF10", VA = "0x1820A1910")]
	private void AddToken(CustomLogicTokenType type, object value, int line)
	{
	}

	[Token(Token = "0x60039B2")]
	[Address(RVA = "0x20A23C0", Offset = "0x20A09C0", VA = "0x1820A23C0")]
	private string ScanAlphaSymbol(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x60039B3")]
	[Address(RVA = "0x20A2700", Offset = "0x20A0D00", VA = "0x1820A2700")]
	private string ScanBool(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x60039B4")]
	[Address(RVA = "0x20A2AF0", Offset = "0x20A10F0", VA = "0x1820A2AF0")]
	private string ScanNumber(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x60039B5")]
	[Address(RVA = "0x20A29B0", Offset = "0x20A0FB0", VA = "0x1820A29B0")]
	private string ScanName(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x60039B6")]
	[Address(RVA = "0x20A2C30", Offset = "0x20A1230", VA = "0x1820A2C30")]
	private string ScanStringLiteral(int startIndex, out int rawLiteralLength)
	{
		return null;
	}

	[Token(Token = "0x60039B7")]
	[Address(RVA = "0x20A2870", Offset = "0x20A0E70", VA = "0x1820A2870")]
	private string ScanComment(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x60039B8")]
	[Address(RVA = "0x20A2570", Offset = "0x20A0B70", VA = "0x1820A2570")]
	private string ScanBlockComment(int startIndex)
	{
		return null;
	}
}
