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
	[Address(RVA = "0x2508370", Offset = "0x2506970", VA = "0x182508370")]
	internal LikeNode(DataTable table, int op, ExpressionNode left, ExpressionNode right)
	{
	}

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x25156E0", Offset = "0x2513CE0", VA = "0x1825156E0", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x25153D0", Offset = "0x25139D0", VA = "0x1825153D0")]
	internal string AnalyzePattern(string pat)
	{
		return null;
	}
}
