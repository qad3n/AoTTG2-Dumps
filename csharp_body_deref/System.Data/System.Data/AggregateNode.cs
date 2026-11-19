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

[Token(Token = "0x200005B")]
internal sealed class AggregateNode : ExpressionNode
{
	[Token(Token = "0x40001C2")]
	[FieldOffset(Offset = "0x18")]
	private readonly AggregateType _type;

	[Token(Token = "0x40001C3")]
	[FieldOffset(Offset = "0x1C")]
	private readonly Aggregate _aggregate;

	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x20")]
	private readonly bool _local;

	[Token(Token = "0x40001C5")]
	[FieldOffset(Offset = "0x28")]
	private readonly string _relationName;

	[Token(Token = "0x40001C6")]
	[FieldOffset(Offset = "0x30")]
	private readonly string _columnName;

	[Token(Token = "0x40001C7")]
	[FieldOffset(Offset = "0x38")]
	private DataTable _childTable;

	[Token(Token = "0x40001C8")]
	[FieldOffset(Offset = "0x40")]
	private DataColumn _column;

	[Token(Token = "0x40001C9")]
	[FieldOffset(Offset = "0x48")]
	private DataRelation _relation;

	[Token(Token = "0x60005CE")]
	[Address(RVA = "0x5EACD10", Offset = "0x5EABD10", VA = "0x5EACD10")]
	internal AggregateNode(DataTable table, FunctionId aggregateType, string columnName)
	{
	}

	[Token(Token = "0x60005CF")]
	[Address(RVA = "0x5EACD30", Offset = "0x5EABD30", VA = "0x5EACD30")]
	internal AggregateNode(DataTable table, FunctionId aggregateType, string columnName, bool local, string relationName)
	{
	}

	[Token(Token = "0x60005D0")]
	[Address(RVA = "0x5EACE50", Offset = "0x5EABE50", VA = "0x5EACE50", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x60005D1")]
	[Address(RVA = "0x5EAD130", Offset = "0x5EAC130", VA = "0x5EAD130")]
	internal static void Bind(DataRelation relation, List<DataColumn> list)
	{
	}

	[Token(Token = "0x60005D2")]
	[Address(RVA = "0x5EAD390", Offset = "0x5EAC390", VA = "0x5EAD390", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x60005D3")]
	[Address(RVA = "0x5EAD3B0", Offset = "0x5EAC3B0", VA = "0x5EAD3B0", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60005D4")]
	[Address(RVA = "0x5EAD6B0", Offset = "0x5EAC6B0", VA = "0x5EAD6B0", Slot = "8")]
	internal override object Eval(int[] records)
	{
		return null;
	}

	[Token(Token = "0x60005D5")]
	[Address(RVA = "0x5EAD730", Offset = "0x5EAC730", VA = "0x5EAD730", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60005D6")]
	[Address(RVA = "0x5EAD740", Offset = "0x5EAC740", VA = "0x5EAD740", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x5EAD750", Offset = "0x5EAC750", VA = "0x5EAD750", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005D8")]
	[Address(RVA = "0x5EAD760", Offset = "0x5EAC760", VA = "0x5EAD760", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x5EAD770", Offset = "0x5EAC770", VA = "0x5EAD770", Slot = "14")]
	internal override bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x5EAD810", Offset = "0x5EAC810", VA = "0x5EAD810", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}
}
