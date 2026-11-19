// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.LikeNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200005E")]
internal sealed class LikeNode : BinaryNode
{
	[Token(Token = "0x40001F0")]
	[FieldOffset(Offset = "0x30")]
	private int _kind;

	[Token(Token = "0x40001F1")]
	[FieldOffset(Offset = "0x38")]
	private string _pattern;

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x5EB6420", Offset = "0x5EB5420", VA = "0x5EB6420")]
	internal LikeNode(DataTable table, int op, ExpressionNode left, ExpressionNode right)
	{
	}

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x5EB6480", Offset = "0x5EB5480", VA = "0x5EB6480", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x5EB69F0", Offset = "0x5EB59F0", VA = "0x5EB69F0")]
	internal string AnalyzePattern(string pat)
	{
		return null;
	}
}
