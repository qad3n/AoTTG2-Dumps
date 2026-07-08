using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000057")]
internal sealed class ExpressionParser
{
	[Token(Token = "0x2000058")]
	private readonly struct ReservedWords
	{
		[Token(Token = "0x40001DC")]
		[FieldOffset(Offset = "0x0")]
		internal readonly string _word;

		[Token(Token = "0x40001DD")]
		[FieldOffset(Offset = "0x8")]
		internal readonly Tokens _token;

		[Token(Token = "0x40001DE")]
		[FieldOffset(Offset = "0xC")]
		internal readonly int _op;

		[Token(Token = "0x6000610")]
		[Address(RVA = "0x42708E0", Offset = "0x42708E0", VA = "0x42708E0")]
		internal ReservedWords(string word, Tokens token, int op)
		{
		}
	}

	[Token(Token = "0x40001CA")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ReservedWords[] s_reservedwords;

	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0x10")]
	private char _escape;

	[Token(Token = "0x40001CC")]
	[FieldOffset(Offset = "0x12")]
	private char _decimalSeparator;

	[Token(Token = "0x40001CD")]
	[FieldOffset(Offset = "0x14")]
	private char _listSeparator;

	[Token(Token = "0x40001CE")]
	[FieldOffset(Offset = "0x16")]
	private char _exponentL;

	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x18")]
	private char _exponentU;

	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x20")]
	internal char[] _text;

	[Token(Token = "0x40001D1")]
	[FieldOffset(Offset = "0x28")]
	internal int _pos;

	[Token(Token = "0x40001D2")]
	[FieldOffset(Offset = "0x2C")]
	internal int _start;

	[Token(Token = "0x40001D3")]
	[FieldOffset(Offset = "0x30")]
	internal Tokens _token;

	[Token(Token = "0x40001D4")]
	[FieldOffset(Offset = "0x34")]
	internal int _op;

	[Token(Token = "0x40001D5")]
	[FieldOffset(Offset = "0x38")]
	internal OperatorInfo[] _ops;

	[Token(Token = "0x40001D6")]
	[FieldOffset(Offset = "0x40")]
	internal int _topOperator;

	[Token(Token = "0x40001D7")]
	[FieldOffset(Offset = "0x44")]
	internal int _topNode;

	[Token(Token = "0x40001D8")]
	[FieldOffset(Offset = "0x48")]
	private readonly DataTable _table;

	[Token(Token = "0x40001D9")]
	[FieldOffset(Offset = "0x50")]
	internal ExpressionNode[] _nodeStack;

	[Token(Token = "0x40001DA")]
	[FieldOffset(Offset = "0x58")]
	internal int _prevOperand;

	[Token(Token = "0x40001DB")]
	[FieldOffset(Offset = "0x60")]
	internal ExpressionNode _expression;

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x426C5F0", Offset = "0x426C5F0", VA = "0x426C5F0")]
	internal ExpressionParser(DataTable table)
	{
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x426C6B0", Offset = "0x426C6B0", VA = "0x426C6B0")]
	internal void LoadExpression(string data)
	{
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x426DF40", Offset = "0x426DF40", VA = "0x426DF40")]
	internal void StartScan()
	{
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x426C800", Offset = "0x426C800", VA = "0x426C800")]
	internal ExpressionNode Parse()
	{
		return null;
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x426EE10", Offset = "0x426EE10", VA = "0x426EE10")]
	private ExpressionNode ParseAggregateArgument(FunctionId aggregate)
	{
		return null;
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x426ED50", Offset = "0x426ED50", VA = "0x426ED50")]
	private ExpressionNode NodePop()
	{
		return null;
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x426ECA0", Offset = "0x426ECA0", VA = "0x426ECA0")]
	private ExpressionNode NodePeek()
	{
		return null;
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x426EAB0", Offset = "0x426EAB0", VA = "0x426EAB0")]
	private void NodePush(ExpressionNode node)
	{
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x426E610", Offset = "0x426E610", VA = "0x426E610")]
	private void BuildExpression(int pri)
	{
	}

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x426EA00", Offset = "0x426EA00", VA = "0x426EA00")]
	internal void CheckToken(Tokens token)
	{
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x426E010", Offset = "0x426E010", VA = "0x426E010")]
	internal Tokens Scan()
	{
		return default(Tokens);
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x426FD50", Offset = "0x426FD50", VA = "0x426FD50")]
	private void ScanNumeric()
	{
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x4270180", Offset = "0x4270180", VA = "0x4270180")]
	private void ScanName()
	{
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x426FC10", Offset = "0x426FC10", VA = "0x426FC10")]
	private void ScanName(char chEnd, char esc, string charsToEscape)
	{
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x426FAD0", Offset = "0x426FAD0", VA = "0x426FAD0")]
	private void ScanDate()
	{
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x426FE70", Offset = "0x426FE70", VA = "0x426FE70")]
	private void ScanBinaryConstant()
	{
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x426FE90", Offset = "0x426FE90", VA = "0x426FE90")]
	private void ScanReserved()
	{
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x426FB60", Offset = "0x426FB60", VA = "0x426FB60")]
	private void ScanString(char escape)
	{
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x426E9C0", Offset = "0x426E9C0", VA = "0x426E9C0")]
	internal void ScanToken(Tokens token)
	{
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x426FA80", Offset = "0x426FA80", VA = "0x426FA80")]
	private void ScanWhite()
	{
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x42703B0", Offset = "0x42703B0", VA = "0x42703B0")]
	private bool IsWhiteSpace(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x4270150", Offset = "0x4270150", VA = "0x4270150")]
	private bool IsAlphaNumeric(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600060D")]
	[Address(RVA = "0x426FE80", Offset = "0x426FE80", VA = "0x426FE80")]
	private bool IsDigit(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x4270300", Offset = "0x4270300", VA = "0x4270300")]
	private bool IsAlpha(char ch)
	{
		return default(bool);
	}
}
