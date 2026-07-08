using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000066")]
internal sealed class UnaryNode : ExpressionNode
{
	[Token(Token = "0x4000234")]
	[FieldOffset(Offset = "0x18")]
	internal readonly int _op;

	[Token(Token = "0x4000235")]
	[FieldOffset(Offset = "0x20")]
	internal ExpressionNode _right;

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x4277420", Offset = "0x4277420", VA = "0x4277420")]
	internal UnaryNode(DataTable table, int op, ExpressionNode right)
	{
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x4277450", Offset = "0x4277450", VA = "0x4277450", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x42774A0", Offset = "0x42774A0", VA = "0x42774A0", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x42774C0", Offset = "0x42774C0", VA = "0x42774C0", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x4277C70", Offset = "0x4277C70", VA = "0x4277C70", Slot = "8")]
	internal override object Eval(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x4277500", Offset = "0x4277500", VA = "0x4277500")]
	private object EvalUnaryOp(int op, object vl)
	{
		return null;
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x4277CA0", Offset = "0x4277CA0", VA = "0x4277CA0", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x4277CD0", Offset = "0x4277CD0", VA = "0x4277CD0", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x4277D00", Offset = "0x4277D00", VA = "0x4277D00", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x4277D30", Offset = "0x4277D30", VA = "0x4277D30", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x4277D60", Offset = "0x4277D60", VA = "0x4277D60", Slot = "14")]
	internal override bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x4277D90", Offset = "0x4277D90", VA = "0x4277D90", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}
}
