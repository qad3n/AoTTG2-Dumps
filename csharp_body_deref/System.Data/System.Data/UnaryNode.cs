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
	[Address(RVA = "0x45B4B80", Offset = "0x45B4B80", VA = "0x45B4B80")]
	internal UnaryNode(DataTable table, int op, ExpressionNode right)
	{
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x45B4BB0", Offset = "0x45B4BB0", VA = "0x45B4BB0", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x45B4C00", Offset = "0x45B4C00", VA = "0x45B4C00", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x45B4C20", Offset = "0x45B4C20", VA = "0x45B4C20", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x45B53D0", Offset = "0x45B53D0", VA = "0x45B53D0", Slot = "8")]
	internal override object Eval(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x45B4C60", Offset = "0x45B4C60", VA = "0x45B4C60")]
	private object EvalUnaryOp(int op, object vl)
	{
		return null;
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x45B5400", Offset = "0x45B5400", VA = "0x45B5400", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x45B5430", Offset = "0x45B5430", VA = "0x45B5430", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x45B5460", Offset = "0x45B5460", VA = "0x45B5460", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x45B5490", Offset = "0x45B5490", VA = "0x45B5490", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x45B54C0", Offset = "0x45B54C0", VA = "0x45B54C0", Slot = "14")]
	internal override bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x45B54F0", Offset = "0x45B54F0", VA = "0x45B54F0", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}
}
