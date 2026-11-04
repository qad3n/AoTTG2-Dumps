// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.ExpressionParser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000064")]
internal sealed class ExpressionParser
{
	[Token(Token = "0x2000065")]
	private readonly struct ReservedWords
	{
		[Token(Token = "0x4000224")]
		[FieldOffset(Offset = "0x0")]
		internal readonly string _word;

		[Token(Token = "0x4000225")]
		[FieldOffset(Offset = "0x8")]
		internal readonly Tokens _token;

		[Token(Token = "0x4000226")]
		[FieldOffset(Offset = "0xC")]
		internal readonly int _op;

		[Token(Token = "0x6000643")]
		[Address(RVA = "0xA44EA0", Offset = "0xA434A0", VA = "0x180A44EA0")]
		internal ReservedWords(string word, Tokens token, int op)
		{
		}
	}

	[Token(Token = "0x4000212")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ReservedWords[] s_reservedwords;

	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x10")]
	private char _escape;

	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x12")]
	private char _decimalSeparator;

	[Token(Token = "0x4000215")]
	[FieldOffset(Offset = "0x14")]
	private char _listSeparator;

	[Token(Token = "0x4000216")]
	[FieldOffset(Offset = "0x16")]
	private char _exponentL;

	[Token(Token = "0x4000217")]
	[FieldOffset(Offset = "0x18")]
	private char _exponentU;

	[Token(Token = "0x4000218")]
	[FieldOffset(Offset = "0x20")]
	internal char[] _text;

	[Token(Token = "0x4000219")]
	[FieldOffset(Offset = "0x28")]
	internal int _pos;

	[Token(Token = "0x400021A")]
	[FieldOffset(Offset = "0x2C")]
	internal int _start;

	[Token(Token = "0x400021B")]
	[FieldOffset(Offset = "0x30")]
	internal Tokens _token;

	[Token(Token = "0x400021C")]
	[FieldOffset(Offset = "0x34")]
	internal int _op;

	[Token(Token = "0x400021D")]
	[FieldOffset(Offset = "0x38")]
	internal OperatorInfo[] _ops;

	[Token(Token = "0x400021E")]
	[FieldOffset(Offset = "0x40")]
	internal int _topOperator;

	[Token(Token = "0x400021F")]
	[FieldOffset(Offset = "0x44")]
	internal int _topNode;

	[Token(Token = "0x4000220")]
	[FieldOffset(Offset = "0x48")]
	private readonly DataTable _table;

	[Token(Token = "0x4000221")]
	[FieldOffset(Offset = "0x50")]
	internal ExpressionNode[] _nodeStack;

	[Token(Token = "0x4000222")]
	[FieldOffset(Offset = "0x58")]
	internal int _prevOperand;

	[Token(Token = "0x4000223")]
	[FieldOffset(Offset = "0x60")]
	internal ExpressionNode _expression;

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x2515310", Offset = "0x2513910", VA = "0x182515310")]
	internal ExpressionParser(DataTable table)
	{
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x2512510", Offset = "0x2510B10", VA = "0x182512510")]
	internal void LoadExpression(string data)
	{
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x2514DE0", Offset = "0x25133E0", VA = "0x182514DE0")]
	internal void StartScan()
	{
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x2512A80", Offset = "0x2511080", VA = "0x182512A80")]
	internal ExpressionNode Parse()
	{
		return null;
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x2512740", Offset = "0x2510D40", VA = "0x182512740")]
	private ExpressionNode ParseAggregateArgument(FunctionId aggregate)
	{
		return null;
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x2512650", Offset = "0x2510C50", VA = "0x182512650")]
	private ExpressionNode NodePop()
	{
		return null;
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x2512610", Offset = "0x2510C10", VA = "0x182512610")]
	private ExpressionNode NodePeek()
	{
		return null;
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x2512690", Offset = "0x2510C90", VA = "0x182512690")]
	private void NodePush(ExpressionNode node)
	{
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x2511FA0", Offset = "0x25105A0", VA = "0x182511FA0")]
	private void BuildExpression(int pri)
	{
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x2512330", Offset = "0x2510930", VA = "0x182512330")]
	internal void CheckToken(Tokens token)
	{
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x25146B0", Offset = "0x2512CB0", VA = "0x1825146B0")]
	internal Tokens Scan()
	{
		return default(Tokens);
	}

	[Token(Token = "0x6000635")]
	[Address(RVA = "0x2514050", Offset = "0x2512650", VA = "0x182514050")]
	private void ScanNumeric()
	{
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x2513ED0", Offset = "0x25124D0", VA = "0x182513ED0")]
	private void ScanName()
	{
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x2513F40", Offset = "0x2512540", VA = "0x182513F40")]
	private void ScanName(char chEnd, char esc, string charsToEscape)
	{
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x2513DB0", Offset = "0x25123B0", VA = "0x182513DB0")]
	private void ScanDate()
	{
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void ScanBinaryConstant()
	{
	}

	[Token(Token = "0x600063A")]
	[Address(RVA = "0x2514250", Offset = "0x2512850", VA = "0x182514250")]
	private void ScanReserved()
	{
	}

	[Token(Token = "0x600063B")]
	[Address(RVA = "0x2514520", Offset = "0x2512B20", VA = "0x182514520")]
	private void ScanString(char escape)
	{
	}

	[Token(Token = "0x600063C")]
	[Address(RVA = "0x2514600", Offset = "0x2512C00", VA = "0x182514600")]
	internal void ScanToken(Tokens token)
	{
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x2514660", Offset = "0x2512C60", VA = "0x182514660")]
	private void ScanWhite()
	{
	}

	[Token(Token = "0x600063E")]
	[Address(RVA = "0x2512500", Offset = "0x2510B00", VA = "0x182512500")]
	private bool IsWhiteSpace(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600063F")]
	[Address(RVA = "0x2512380", Offset = "0x2510980", VA = "0x182512380")]
	private bool IsAlphaNumeric(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000640")]
	[Address(RVA = "0x25124A0", Offset = "0x2510AA0", VA = "0x1825124A0")]
	private bool IsDigit(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000641")]
	[Address(RVA = "0x2512420", Offset = "0x2510A20", VA = "0x182512420")]
	private bool IsAlpha(char ch)
	{
		return default(bool);
	}
}
