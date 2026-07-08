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
	[Address(RVA = "0x426B7E0", Offset = "0x426B7E0", VA = "0x426B7E0")]
	internal ConstNode(DataTable table, ValueType type, object constant)
	{
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x4267920", Offset = "0x4267920", VA = "0x4267920")]
	internal ConstNode(DataTable table, ValueType type, object constant, bool fParseQuotes)
	{
	}

	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x426C300", Offset = "0x426C300", VA = "0x426C300", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x426C310", Offset = "0x426C310", VA = "0x426C310", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x426C320", Offset = "0x426C320", VA = "0x426C320", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x426C340", Offset = "0x426C340", VA = "0x426C340", Slot = "8")]
	internal override object Eval(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x60005C8")]
	[Address(RVA = "0x426C360", Offset = "0x426C360", VA = "0x426C360", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x426C370", Offset = "0x426C370", VA = "0x426C370", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x426C380", Offset = "0x426C380", VA = "0x426C380", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x426C390", Offset = "0x426C390", VA = "0x426C390", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x426C3A0", Offset = "0x426C3A0", VA = "0x426C3A0", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}

	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x426BE50", Offset = "0x426BE50", VA = "0x426BE50")]
	private object SmallestDecimal(object constant)
	{
		return null;
	}

	[Token(Token = "0x60005CE")]
	[Address(RVA = "0x426B7F0", Offset = "0x426B7F0", VA = "0x426B7F0")]
	private object SmallestNumeric(object constant)
	{
		return null;
	}
}
