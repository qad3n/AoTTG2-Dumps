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
	[Address(RVA = "0x425D890", Offset = "0x425D890", VA = "0x425D890")]
	internal AggregateNode(DataTable table, FunctionId aggregateType, string columnName)
	{
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x425D8B0", Offset = "0x425D8B0", VA = "0x425D8B0")]
	internal AggregateNode(DataTable table, FunctionId aggregateType, string columnName, bool local, string relationName)
	{
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x425DA60", Offset = "0x425DA60", VA = "0x425DA60", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x425DEF0", Offset = "0x425DEF0", VA = "0x425DEF0")]
	internal static void Bind(DataRelation relation, List<DataColumn> list)
	{
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x425E120", Offset = "0x425E120", VA = "0x425E120", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x425E140", Offset = "0x425E140", VA = "0x425E140", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x425E590", Offset = "0x425E590", VA = "0x425E590", Slot = "8")]
	internal override object Eval(int[] records)
	{
		return null;
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x425E6A0", Offset = "0x425E6A0", VA = "0x425E6A0", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x425E6B0", Offset = "0x425E6B0", VA = "0x425E6B0", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x425E6C0", Offset = "0x425E6C0", VA = "0x425E6C0", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x425E6D0", Offset = "0x425E6D0", VA = "0x425E6D0", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x425E6E0", Offset = "0x425E6E0", VA = "0x425E6E0", Slot = "14")]
	internal override bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x425E780", Offset = "0x425E780", VA = "0x425E780", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}
}
