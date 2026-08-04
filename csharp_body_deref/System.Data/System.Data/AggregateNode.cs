// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.AggregateNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200004E")]
internal sealed class AggregateNode : ExpressionNode
{
	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0x18")]
	private readonly AggregateType _type;

	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0x1C")]
	private readonly Aggregate _aggregate;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x20")]
	private readonly bool _local;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x28")]
	private readonly string _relationName;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x30")]
	private readonly string _columnName;

	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0x38")]
	private DataTable _childTable;

	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0x40")]
	private DataColumn _column;

	[Token(Token = "0x4000181")]
	[FieldOffset(Offset = "0x48")]
	private DataRelation _relation;

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x459AFF0", Offset = "0x459AFF0", VA = "0x459AFF0")]
	internal AggregateNode(DataTable table, FunctionId aggregateType, string columnName)
	{
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x459B010", Offset = "0x459B010", VA = "0x459B010")]
	internal AggregateNode(DataTable table, FunctionId aggregateType, string columnName, bool local, string relationName)
	{
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x459B1C0", Offset = "0x459B1C0", VA = "0x459B1C0", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x459B650", Offset = "0x459B650", VA = "0x459B650")]
	internal static void Bind(DataRelation relation, List<DataColumn> list)
	{
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x459B880", Offset = "0x459B880", VA = "0x459B880", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x459B8A0", Offset = "0x459B8A0", VA = "0x459B8A0", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x459BCF0", Offset = "0x459BCF0", VA = "0x459BCF0", Slot = "8")]
	internal override object Eval(int[] records)
	{
		return null;
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x459BE00", Offset = "0x459BE00", VA = "0x459BE00", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x459BE10", Offset = "0x459BE10", VA = "0x459BE10", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x459BE20", Offset = "0x459BE20", VA = "0x459BE20", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x459BE30", Offset = "0x459BE30", VA = "0x459BE30", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x459BE40", Offset = "0x459BE40", VA = "0x459BE40", Slot = "14")]
	internal override bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x459BEE0", Offset = "0x459BEE0", VA = "0x459BEE0", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}
}
