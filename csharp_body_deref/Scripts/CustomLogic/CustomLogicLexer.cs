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

[Token(Token = "0x2000641")]
public class CustomLogicLexer
{
	[Token(Token = "0x4001B6D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected string _source;

	[Token(Token = "0x4001B6E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected List<CustomLogicToken> _tokens;

	[Token(Token = "0x4001B6F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public string Error;

	[Token(Token = "0x4001B70")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int _line;

	[Token(Token = "0x4001B71")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private char[] _chars;

	[Token(Token = "0x17000A81")]
	public CustomLogicCompiler Compiler
	{
		[Token(Token = "0x6003C3A")]
		[Address(RVA = "0x5A74500", Offset = "0x5A73500", VA = "0x5A74500")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003C3B")]
		[Address(RVA = "0x5A74510", Offset = "0x5A73510", VA = "0x5A74510")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6003C3C")]
	[Address(RVA = "0x5A74520", Offset = "0x5A73520", VA = "0x5A74520")]
	public CustomLogicLexer(string source, [Optional] CustomLogicCompiler compiler)
	{
	}

	[Token(Token = "0x6003C3D")]
	[Address(RVA = "0x5A746C0", Offset = "0x5A736C0", VA = "0x5A746C0")]
	public string GetLineNumberString(int line)
	{
		return null;
	}

	[Token(Token = "0x6003C3E")]
	[Address(RVA = "0x5A746F0", Offset = "0x5A736F0", VA = "0x5A746F0")]
	public List<CustomLogicToken> GetTokens()
	{
		return null;
	}

	[Token(Token = "0x6003C3F")]
	[Address(RVA = "0x5A75180", Offset = "0x5A74180", VA = "0x5A75180")]
	private void AddToken(CustomLogicTokenType type, object value, int line)
	{
	}

	[Token(Token = "0x6003C40")]
	[Address(RVA = "0x5A75270", Offset = "0x5A74270", VA = "0x5A75270")]
	private string ScanAlphaSymbol(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x6003C41")]
	[Address(RVA = "0x5A75020", Offset = "0x5A74020", VA = "0x5A75020")]
	private string ScanBool(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x6003C42")]
	[Address(RVA = "0x5A75540", Offset = "0x5A74540", VA = "0x5A75540")]
	private string ScanNumber(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x6003C43")]
	[Address(RVA = "0x5A75410", Offset = "0x5A74410", VA = "0x5A75410")]
	private string ScanName(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x6003C44")]
	[Address(RVA = "0x5A75670", Offset = "0x5A74670", VA = "0x5A75670")]
	private string ScanStringLiteral(int startIndex, out int rawLiteralLength)
	{
		return null;
	}

	[Token(Token = "0x6003C45")]
	[Address(RVA = "0x5A758E0", Offset = "0x5A748E0", VA = "0x5A758E0")]
	private string ScanComment(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x6003C46")]
	[Address(RVA = "0x5A75A00", Offset = "0x5A74A00", VA = "0x5A75A00")]
	private string ScanBlockComment(int startIndex)
	{
		return null;
	}
}
