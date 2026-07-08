using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000051")]
internal sealed class LikeNode : BinaryNode
{
	[Token(Token = "0x40001A8")]
	[FieldOffset(Offset = "0x30")]
	private int _kind;

	[Token(Token = "0x40001A9")]
	[FieldOffset(Offset = "0x38")]
	private string _pattern;

	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x426ABE0", Offset = "0x426ABE0", VA = "0x426ABE0")]
	internal LikeNode(DataTable table, int op, ExpressionNode left, ExpressionNode right)
	{
	}

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x426AC40", Offset = "0x426AC40", VA = "0x426AC40", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x426B1B0", Offset = "0x426B1B0", VA = "0x426B1B0")]
	internal string AnalyzePattern(string pat)
	{
		return null;
	}
}
