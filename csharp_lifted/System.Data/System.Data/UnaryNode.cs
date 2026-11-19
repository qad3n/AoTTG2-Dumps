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
	[Address(RVA = "0x5EBE1B0", Offset = "0x5EBD1B0", VA = "0x5EBE1B0")]
	internal UnaryNode(DataTable table, int op, ExpressionNode right)
	{
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x5EBE1E0", Offset = "0x5EBD1E0", VA = "0x5EBE1E0", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x5EBE230", Offset = "0x5EBD230", VA = "0x5EBE230", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x5EBE250", Offset = "0x5EBD250", VA = "0x5EBE250", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x5EBE8C0", Offset = "0x5EBD8C0", VA = "0x5EBE8C0", Slot = "8")]
	internal override object Eval(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x5EBE290", Offset = "0x5EBD290", VA = "0x5EBE290")]
	private object EvalUnaryOp(int op, object vl)
	{
		return null;
	}

	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x5EBE8F0", Offset = "0x5EBD8F0", VA = "0x5EBE8F0", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x5EBE920", Offset = "0x5EBD920", VA = "0x5EBE920", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x5EBE950", Offset = "0x5EBD950", VA = "0x5EBE950", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x5EBE980", Offset = "0x5EBD980", VA = "0x5EBE980", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x5EBE9B0", Offset = "0x5EBD9B0", VA = "0x5EBE9B0", Slot = "14")]
	internal override bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x5EBE9E0", Offset = "0x5EBD9E0", VA = "0x5EBE9E0", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}
}
