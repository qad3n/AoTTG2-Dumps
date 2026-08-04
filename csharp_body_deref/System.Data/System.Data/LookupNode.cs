// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.LookupNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000063")]
internal sealed class LookupNode : ExpressionNode
{
	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _relationName;

	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _columnName;

	[Token(Token = "0x400022D")]
	[FieldOffset(Offset = "0x28")]
	private DataColumn _column;

	[Token(Token = "0x400022E")]
	[FieldOffset(Offset = "0x30")]
	private DataRelation _relation;

	[Token(Token = "0x6000665")]
	[Address(RVA = "0x45B34C0", Offset = "0x45B34C0", VA = "0x45B34C0")]
	internal LookupNode(DataTable table, string columnName, string relationName)
	{
	}

	[Token(Token = "0x6000666")]
	[Address(RVA = "0x45B3500", Offset = "0x45B3500", VA = "0x45B3500", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x45B37C0", Offset = "0x45B37C0", VA = "0x45B37C0", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x45B37F0", Offset = "0x45B37F0", VA = "0x45B37F0", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x45B38E0", Offset = "0x45B38E0", VA = "0x45B38E0", Slot = "8")]
	internal override object Eval(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x45B3920", Offset = "0x45B3920", VA = "0x45B3920", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x45B3930", Offset = "0x45B3930", VA = "0x45B3930", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x45B3940", Offset = "0x45B3940", VA = "0x45B3940", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x600066D")]
	[Address(RVA = "0x45B3950", Offset = "0x45B3950", VA = "0x45B3950", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x45B3960", Offset = "0x45B3960", VA = "0x45B3960", Slot = "14")]
	internal override bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x45B3970", Offset = "0x45B3970", VA = "0x45B3970", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}
}
