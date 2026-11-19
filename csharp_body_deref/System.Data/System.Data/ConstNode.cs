// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.ConstNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200005F")]
internal sealed class ConstNode : ExpressionNode
{
	[Token(Token = "0x40001F2")]
	[FieldOffset(Offset = "0x18")]
	internal readonly object _val;

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x5EB6EA0", Offset = "0x5EB5EA0", VA = "0x5EB6EA0")]
	internal ConstNode(DataTable table, ValueType type, object constant)
	{
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x5EB3C00", Offset = "0x5EB2C00", VA = "0x5EB3C00")]
	internal ConstNode(DataTable table, ValueType type, object constant, bool fParseQuotes)
	{
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x5EB77E0", Offset = "0x5EB67E0", VA = "0x5EB77E0", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x5EB77F0", Offset = "0x5EB67F0", VA = "0x5EB77F0", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x5EB7800", Offset = "0x5EB6800", VA = "0x5EB7800", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x5EB7820", Offset = "0x5EB6820", VA = "0x5EB7820", Slot = "8")]
	internal override object Eval(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x5EB7840", Offset = "0x5EB6840", VA = "0x5EB7840", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x5EB7850", Offset = "0x5EB6850", VA = "0x5EB7850", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x5EB7860", Offset = "0x5EB6860", VA = "0x5EB7860", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x5EB7870", Offset = "0x5EB6870", VA = "0x5EB7870", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x5EB7880", Offset = "0x5EB6880", VA = "0x5EB7880", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x5EB7400", Offset = "0x5EB6400", VA = "0x5EB7400")]
	private object SmallestDecimal(object constant)
	{
		return null;
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x5EB6EB0", Offset = "0x5EB5EB0", VA = "0x5EB6EB0")]
	private object SmallestNumeric(object constant)
	{
		return null;
	}
}
