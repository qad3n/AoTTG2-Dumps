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

[Token(Token = "0x200048B")]
public class CustomLogicLexer
{
	[Token(Token = "0x4001386")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected string _source;

	[Token(Token = "0x4001387")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected List<CustomLogicToken> _tokens;

	[Token(Token = "0x4001388")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public string Error;

	[Token(Token = "0x4001389")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int _line;

	[Token(Token = "0x400138A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private char[] _chars;

	[Token(Token = "0x17000942")]
	public CustomLogicCompiler Compiler
	{
		[Token(Token = "0x600302D")]
		[Address(RVA = "0x415C5D0", Offset = "0x415C5D0", VA = "0x415C5D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600302E")]
		[Address(RVA = "0x415C5E0", Offset = "0x415C5E0", VA = "0x415C5E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600302F")]
	[Address(RVA = "0x415C5F0", Offset = "0x415C5F0", VA = "0x415C5F0")]
	public CustomLogicLexer(string source, [Optional] CustomLogicCompiler compiler)
	{
	}

	[Token(Token = "0x6003030")]
	[Address(RVA = "0x415C6C0", Offset = "0x415C6C0", VA = "0x415C6C0")]
	public string GetLineNumberString(int line)
	{
		return null;
	}

	[Token(Token = "0x6003031")]
	[Address(RVA = "0x415C6F0", Offset = "0x415C6F0", VA = "0x415C6F0")]
	public List<CustomLogicToken> GetTokens()
	{
		return null;
	}

	[Token(Token = "0x6003032")]
	[Address(RVA = "0x415D5F0", Offset = "0x415D5F0", VA = "0x415D5F0")]
	private void AddToken(CustomLogicTokenType type, object value, int line)
	{
	}

	[Token(Token = "0x6003033")]
	[Address(RVA = "0x415D6D0", Offset = "0x415D6D0", VA = "0x415D6D0")]
	private string ScanAlphaSymbol(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x6003034")]
	[Address(RVA = "0x415D490", Offset = "0x415D490", VA = "0x415D490")]
	private string ScanBool(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x6003035")]
	[Address(RVA = "0x415D9B0", Offset = "0x415D9B0", VA = "0x415D9B0")]
	private string ScanNumber(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x6003036")]
	[Address(RVA = "0x415D880", Offset = "0x415D880", VA = "0x415D880")]
	private string ScanName(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x6003037")]
	[Address(RVA = "0x415DAE0", Offset = "0x415DAE0", VA = "0x415DAE0")]
	private string ScanStringLiteral(int startIndex, out int rawLiteralLength)
	{
		return null;
	}

	[Token(Token = "0x6003038")]
	[Address(RVA = "0x415DD90", Offset = "0x415DD90", VA = "0x415DD90")]
	private string ScanComment(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x6003039")]
	[Address(RVA = "0x415DEB0", Offset = "0x415DEB0", VA = "0x415DEB0")]
	private string ScanBlockComment(int startIndex)
	{
		return null;
	}
}
