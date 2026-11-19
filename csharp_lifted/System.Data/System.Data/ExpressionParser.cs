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
		[Address(RVA = "0x5EBAB60", Offset = "0x5EB9B60", VA = "0x5EBAB60")]
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
	[Address(RVA = "0x5EB7AC0", Offset = "0x5EB6AC0", VA = "0x5EB7AC0")]
	internal ExpressionParser(DataTable table)
	{
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x5EB7B80", Offset = "0x5EB6B80", VA = "0x5EB7B80")]
	internal void LoadExpression(string data)
	{
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x5EB9160", Offset = "0x5EB8160", VA = "0x5EB9160")]
	internal void StartScan()
	{
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x5EB7C70", Offset = "0x5EB6C70", VA = "0x5EB7C70")]
	internal ExpressionNode Parse()
	{
		return null;
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x5EB9B90", Offset = "0x5EB8B90", VA = "0x5EB9B90")]
	private ExpressionNode ParseAggregateArgument(FunctionId aggregate)
	{
		return null;
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x5EB9B60", Offset = "0x5EB8B60", VA = "0x5EB9B60")]
	private ExpressionNode NodePop()
	{
		return null;
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x5EB9B30", Offset = "0x5EB8B30", VA = "0x5EB9B30")]
	private ExpressionNode NodePeek()
	{
		return null;
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x5EB9A90", Offset = "0x5EB8A90", VA = "0x5EB9A90")]
	private void NodePush(ExpressionNode node)
	{
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x5EB9750", Offset = "0x5EB8750", VA = "0x5EB9750")]
	private void BuildExpression(int pri)
	{
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x5EB9A50", Offset = "0x5EB8A50", VA = "0x5EB9A50")]
	internal void CheckToken(Tokens token)
	{
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x5EB91F0", Offset = "0x5EB81F0", VA = "0x5EB91F0")]
	internal Tokens Scan()
	{
		return default(Tokens);
	}

	[Token(Token = "0x6000635")]
	[Address(RVA = "0x5EBA240", Offset = "0x5EB9240", VA = "0x5EBA240")]
	private void ScanNumeric()
	{
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x5EBA610", Offset = "0x5EB9610", VA = "0x5EBA610")]
	private void ScanName()
	{
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x5EBA0F0", Offset = "0x5EB90F0", VA = "0x5EBA0F0")]
	private void ScanName(char chEnd, char esc, string charsToEscape)
	{
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x5EB9FA0", Offset = "0x5EB8FA0", VA = "0x5EB9FA0")]
	private void ScanDate()
	{
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x5EBA350", Offset = "0x5EB9350", VA = "0x5EBA350")]
	private void ScanBinaryConstant()
	{
	}

	[Token(Token = "0x600063A")]
	[Address(RVA = "0x5EBA370", Offset = "0x5EB9370", VA = "0x5EBA370")]
	private void ScanReserved()
	{
	}

	[Token(Token = "0x600063B")]
	[Address(RVA = "0x5EBA040", Offset = "0x5EB9040", VA = "0x5EBA040")]
	private void ScanString(char escape)
	{
	}

	[Token(Token = "0x600063C")]
	[Address(RVA = "0x5EB9A00", Offset = "0x5EB8A00", VA = "0x5EB9A00")]
	internal void ScanToken(Tokens token)
	{
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x5EB9F50", Offset = "0x5EB8F50", VA = "0x5EB9F50")]
	private void ScanWhite()
	{
	}

	[Token(Token = "0x600063E")]
	[Address(RVA = "0x5EBA690", Offset = "0x5EB9690", VA = "0x5EBA690")]
	private bool IsWhiteSpace(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600063F")]
	[Address(RVA = "0x5EBA5E0", Offset = "0x5EB95E0", VA = "0x5EBA5E0")]
	private bool IsAlphaNumeric(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000640")]
	[Address(RVA = "0x5EBA360", Offset = "0x5EB9360", VA = "0x5EBA360")]
	private bool IsDigit(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000641")]
	[Address(RVA = "0x5EBA670", Offset = "0x5EB9670", VA = "0x5EBA670")]
	private bool IsAlpha(char ch)
	{
		return default(bool);
	}
}
