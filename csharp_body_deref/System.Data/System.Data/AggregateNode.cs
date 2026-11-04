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
	[Address(RVA = "0x25014C0", Offset = "0x24FFAC0", VA = "0x1825014C0")]
	internal AggregateNode(DataTable table, FunctionId aggregateType, string columnName)
	{
	}

	[Token(Token = "0x60005CF")]
	[Address(RVA = "0x2501390", Offset = "0x24FF990", VA = "0x182501390")]
	internal AggregateNode(DataTable table, FunctionId aggregateType, string columnName, bool local, string relationName)
	{
	}

	[Token(Token = "0x60005D0")]
	[Address(RVA = "0x2500A30", Offset = "0x24FF030", VA = "0x182500A30", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x60005D1")]
	[Address(RVA = "0x2500DF0", Offset = "0x24FF3F0", VA = "0x182500DF0")]
	internal static void Bind(DataRelation relation, List<DataColumn> list)
	{
	}

	[Token(Token = "0x60005D2")]
	[Address(RVA = "0x24E2A50", Offset = "0x24E1050", VA = "0x1824E2A50", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x60005D3")]
	[Address(RVA = "0x2501060", Offset = "0x24FF660", VA = "0x182501060", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60005D4")]
	[Address(RVA = "0x2500FC0", Offset = "0x24FF5C0", VA = "0x182500FC0", Slot = "8")]
	internal override object Eval(int[] records)
	{
		return null;
	}

	[Token(Token = "0x60005D5")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60005D6")]
	[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60005D7")]
	[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005D8")]
	[Address(RVA = "0x2501380", Offset = "0x24FF980", VA = "0x182501380", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x2500F30", Offset = "0x24FF530", VA = "0x182500F30", Slot = "14")]
	internal override bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}
}
