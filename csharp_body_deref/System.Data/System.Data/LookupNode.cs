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

[Token(Token = "0x200006D")]
internal sealed class LookupNode : ExpressionNode
{
	[Token(Token = "0x400023E")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _relationName;

	[Token(Token = "0x400023F")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _columnName;

	[Token(Token = "0x4000240")]
	[FieldOffset(Offset = "0x28")]
	private DataColumn _column;

	[Token(Token = "0x4000241")]
	[FieldOffset(Offset = "0x30")]
	private DataRelation _relation;

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x251F1B0", Offset = "0x251D7B0", VA = "0x18251F1B0")]
	internal LookupNode(DataTable table, string columnName, string relationName)
	{
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x251ED70", Offset = "0x251D370", VA = "0x18251ED70", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x251F020", Offset = "0x251D620", VA = "0x18251F020", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x251F090", Offset = "0x251D690", VA = "0x18251F090", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x251F050", Offset = "0x251D650", VA = "0x18251F050", Slot = "8")]
	internal override object Eval(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x251F010", Offset = "0x251D610", VA = "0x18251F010", Slot = "14")]
	internal override bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}
}
