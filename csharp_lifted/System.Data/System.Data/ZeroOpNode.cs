// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.ZeroOpNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000071")]
internal sealed class ZeroOpNode : ExpressionNode
{
	[Token(Token = "0x4000249")]
	[FieldOffset(Offset = "0x18")]
	internal readonly int _op;

	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x5EBEAA0", Offset = "0x5EBDAA0", VA = "0x5EBEAA0")]
	internal ZeroOpNode(int op)
	{
	}

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x5EBEAC0", Offset = "0x5EBDAC0", VA = "0x5EBEAC0", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x5EBEAD0", Offset = "0x5EBDAD0", VA = "0x5EBEAD0", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x5EBEB80", Offset = "0x5EBDB80", VA = "0x5EBEB80", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x5EBEBA0", Offset = "0x5EBDBA0", VA = "0x5EBEBA0", Slot = "8")]
	internal override object Eval(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x5EBEBC0", Offset = "0x5EBDBC0", VA = "0x5EBEBC0", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x5EBEBD0", Offset = "0x5EBDBD0", VA = "0x5EBEBD0", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x5EBEBE0", Offset = "0x5EBDBE0", VA = "0x5EBEBE0", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x5EBEBF0", Offset = "0x5EBDBF0", VA = "0x5EBEBF0", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x5EBEC00", Offset = "0x5EBDC00", VA = "0x5EBEC00", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}
}
