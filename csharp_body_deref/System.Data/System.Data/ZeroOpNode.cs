using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000067")]
internal sealed class ZeroOpNode : ExpressionNode
{
	[Token(Token = "0x4000236")]
	[FieldOffset(Offset = "0x18")]
	internal readonly int _op;

	[Token(Token = "0x6000690")]
	[Address(RVA = "0x4277E50", Offset = "0x4277E50", VA = "0x4277E50")]
	internal ZeroOpNode(int op)
	{
	}

	[Token(Token = "0x6000691")]
	[Address(RVA = "0x4277E70", Offset = "0x4277E70", VA = "0x4277E70", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x6000692")]
	[Address(RVA = "0x4277E80", Offset = "0x4277E80", VA = "0x4277E80", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x6000693")]
	[Address(RVA = "0x4277F30", Offset = "0x4277F30", VA = "0x4277F30", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x4277F50", Offset = "0x4277F50", VA = "0x4277F50", Slot = "8")]
	internal override object Eval(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x6000695")]
	[Address(RVA = "0x4277F70", Offset = "0x4277F70", VA = "0x4277F70", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x6000696")]
	[Address(RVA = "0x4277F80", Offset = "0x4277F80", VA = "0x4277F80", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x6000697")]
	[Address(RVA = "0x4277F90", Offset = "0x4277F90", VA = "0x4277F90", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000698")]
	[Address(RVA = "0x4277FA0", Offset = "0x4277FA0", VA = "0x4277FA0", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000699")]
	[Address(RVA = "0x4277FB0", Offset = "0x4277FB0", VA = "0x4277FB0", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}
}
