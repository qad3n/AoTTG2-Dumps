// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.UnaryNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000070")]
internal sealed class UnaryNode : ExpressionNode
{
	[Token(Token = "0x4000247")]
	[FieldOffset(Offset = "0x18")]
	internal readonly int _op;

	[Token(Token = "0x4000248")]
	[FieldOffset(Offset = "0x20")]
	internal ExpressionNode _right;

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x2527AE0", Offset = "0x25260E0", VA = "0x182527AE0")]
	internal UnaryNode(DataTable table, int op, ExpressionNode right)
	{
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x2526EE0", Offset = "0x25254E0", VA = "0x182526EE0", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x24E2A50", Offset = "0x24E1050", VA = "0x1824E2A50", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x25278F0", Offset = "0x2525EF0", VA = "0x1825278F0", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x25278C0", Offset = "0x2525EC0", VA = "0x1825278C0", Slot = "8")]
	internal override object Eval(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x2526F70", Offset = "0x2525570", VA = "0x182526F70")]
	private object EvalUnaryOp(int op, object vl)
	{
		return null;
	}

	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x25279A0", Offset = "0x2525FA0", VA = "0x1825279A0", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x25279D0", Offset = "0x2525FD0", VA = "0x1825279D0", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x2527940", Offset = "0x2525F40", VA = "0x182527940", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x2527970", Offset = "0x2525F70", VA = "0x182527970", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x2526F40", Offset = "0x2525540", VA = "0x182526F40", Slot = "14")]
	internal override bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x2527A00", Offset = "0x2526000", VA = "0x182527A00", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}
}
