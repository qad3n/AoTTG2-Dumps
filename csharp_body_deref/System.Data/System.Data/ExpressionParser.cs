// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.ExpressionParser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x45AE040", Offset = "0x45AE040", VA = "0x45AE040")]
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
	[Address(RVA = "0x45A9D50", Offset = "0x45A9D50", VA = "0x45A9D50")]
	internal ExpressionParser(DataTable table)
	{
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x45A9E10", Offset = "0x45A9E10", VA = "0x45A9E10")]
	internal void LoadExpression(string data)
	{
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x45AB6A0", Offset = "0x45AB6A0", VA = "0x45AB6A0")]
	internal void StartScan()
	{
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x45A9F60", Offset = "0x45A9F60", VA = "0x45A9F60")]
	internal ExpressionNode Parse()
	{
		return null;
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x45AC570", Offset = "0x45AC570", VA = "0x45AC570")]
	private ExpressionNode ParseAggregateArgument(FunctionId aggregate)
	{
		return null;
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x45AC4B0", Offset = "0x45AC4B0", VA = "0x45AC4B0")]
	private ExpressionNode NodePop()
	{
		return null;
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x45AC400", Offset = "0x45AC400", VA = "0x45AC400")]
	private ExpressionNode NodePeek()
	{
		return null;
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x45AC210", Offset = "0x45AC210", VA = "0x45AC210")]
	private void NodePush(ExpressionNode node)
	{
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x45ABD70", Offset = "0x45ABD70", VA = "0x45ABD70")]
	private void BuildExpression(int pri)
	{
	}

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x45AC160", Offset = "0x45AC160", VA = "0x45AC160")]
	internal void CheckToken(Tokens token)
	{
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x45AB770", Offset = "0x45AB770", VA = "0x45AB770")]
	internal Tokens Scan()
	{
		return default(Tokens);
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x45AD4B0", Offset = "0x45AD4B0", VA = "0x45AD4B0")]
	private void ScanNumeric()
	{
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x45AD8E0", Offset = "0x45AD8E0", VA = "0x45AD8E0")]
	private void ScanName()
	{
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x45AD370", Offset = "0x45AD370", VA = "0x45AD370")]
	private void ScanName(char chEnd, char esc, string charsToEscape)
	{
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x45AD230", Offset = "0x45AD230", VA = "0x45AD230")]
	private void ScanDate()
	{
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x45AD5D0", Offset = "0x45AD5D0", VA = "0x45AD5D0")]
	private void ScanBinaryConstant()
	{
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x45AD5F0", Offset = "0x45AD5F0", VA = "0x45AD5F0")]
	private void ScanReserved()
	{
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x45AD2C0", Offset = "0x45AD2C0", VA = "0x45AD2C0")]
	private void ScanString(char escape)
	{
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x45AC120", Offset = "0x45AC120", VA = "0x45AC120")]
	internal void ScanToken(Tokens token)
	{
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x45AD1E0", Offset = "0x45AD1E0", VA = "0x45AD1E0")]
	private void ScanWhite()
	{
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x45ADB10", Offset = "0x45ADB10", VA = "0x45ADB10")]
	private bool IsWhiteSpace(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x45AD8B0", Offset = "0x45AD8B0", VA = "0x45AD8B0")]
	private bool IsAlphaNumeric(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600060D")]
	[Address(RVA = "0x45AD5E0", Offset = "0x45AD5E0", VA = "0x45AD5E0")]
	private bool IsDigit(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x45ADA60", Offset = "0x45ADA60", VA = "0x45ADA60")]
	private bool IsAlpha(char ch)
	{
		return default(bool);
	}
}
