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
	[Address(RVA = "0x2508CA0", Offset = "0x25072A0", VA = "0x182508CA0")]
	internal ConstNode(DataTable table, ValueType type, object constant)
	{
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x2508950", Offset = "0x2506F50", VA = "0x182508950")]
	internal ConstNode(DataTable table, ValueType type, object constant, bool fParseQuotes)
	{
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x21B9E00", Offset = "0x21B8400", VA = "0x1821B9E00", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x21B9E00", Offset = "0x21B8400", VA = "0x1821B9E00", Slot = "8")]
	internal override object Eval(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x25083D0", Offset = "0x25069D0", VA = "0x1825083D0")]
	private object SmallestDecimal(object constant)
	{
		return null;
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x2508660", Offset = "0x2506C60", VA = "0x182508660")]
	private object SmallestNumeric(object constant)
	{
		return null;
	}
}
