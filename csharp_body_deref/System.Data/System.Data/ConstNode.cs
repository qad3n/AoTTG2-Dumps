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

[Token(Token = "0x2000052")]
internal sealed class ConstNode : ExpressionNode
{
	[Token(Token = "0x40001AA")]
	[FieldOffset(Offset = "0x18")]
	internal readonly object _val;

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x45A8F40", Offset = "0x45A8F40", VA = "0x45A8F40")]
	internal ConstNode(DataTable table, ValueType type, object constant)
	{
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x45A5080", Offset = "0x45A5080", VA = "0x45A5080")]
	internal ConstNode(DataTable table, ValueType type, object constant, bool fParseQuotes)
	{
	}

	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x45A9A60", Offset = "0x45A9A60", VA = "0x45A9A60", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x45A9A70", Offset = "0x45A9A70", VA = "0x45A9A70", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x45A9A80", Offset = "0x45A9A80", VA = "0x45A9A80", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x45A9AA0", Offset = "0x45A9AA0", VA = "0x45A9AA0", Slot = "8")]
	internal override object Eval(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x60005C8")]
	[Address(RVA = "0x45A9AC0", Offset = "0x45A9AC0", VA = "0x45A9AC0", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x45A9AD0", Offset = "0x45A9AD0", VA = "0x45A9AD0", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x45A9AE0", Offset = "0x45A9AE0", VA = "0x45A9AE0", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x45A9AF0", Offset = "0x45A9AF0", VA = "0x45A9AF0", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x45A9B00", Offset = "0x45A9B00", VA = "0x45A9B00", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}

	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x45A95B0", Offset = "0x45A95B0", VA = "0x45A95B0")]
	private object SmallestDecimal(object constant)
	{
		return null;
	}

	[Token(Token = "0x60005CE")]
	[Address(RVA = "0x45A8F50", Offset = "0x45A8F50", VA = "0x45A8F50")]
	private object SmallestNumeric(object constant)
	{
		return null;
	}
}
