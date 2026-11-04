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
	[Address(RVA = "0x252F210", Offset = "0x252D810", VA = "0x18252F210")]
	internal ZeroOpNode(int op)
	{
	}

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x252F180", Offset = "0x252D780", VA = "0x18252F180", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x21B9E00", Offset = "0x21B8400", VA = "0x1821B9E00", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x21B9E00", Offset = "0x21B8400", VA = "0x1821B9E00", Slot = "8")]
	internal override object Eval(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}
}
