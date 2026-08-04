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

[Token(Token = "0x2000067")]
internal sealed class ZeroOpNode : ExpressionNode
{
	[Token(Token = "0x4000236")]
	[FieldOffset(Offset = "0x18")]
	internal readonly int _op;

	[Token(Token = "0x6000690")]
	[Address(RVA = "0x45B55B0", Offset = "0x45B55B0", VA = "0x45B55B0")]
	internal ZeroOpNode(int op)
	{
	}

	[Token(Token = "0x6000691")]
	[Address(RVA = "0x45B55D0", Offset = "0x45B55D0", VA = "0x45B55D0", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x6000692")]
	[Address(RVA = "0x45B55E0", Offset = "0x45B55E0", VA = "0x45B55E0", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x6000693")]
	[Address(RVA = "0x45B5690", Offset = "0x45B5690", VA = "0x45B5690", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x45B56B0", Offset = "0x45B56B0", VA = "0x45B56B0", Slot = "8")]
	internal override object Eval(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x6000695")]
	[Address(RVA = "0x45B56D0", Offset = "0x45B56D0", VA = "0x45B56D0", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x6000696")]
	[Address(RVA = "0x45B56E0", Offset = "0x45B56E0", VA = "0x45B56E0", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x6000697")]
	[Address(RVA = "0x45B56F0", Offset = "0x45B56F0", VA = "0x45B56F0", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000698")]
	[Address(RVA = "0x45B5700", Offset = "0x45B5700", VA = "0x45B5700", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000699")]
	[Address(RVA = "0x45B5710", Offset = "0x45B5710", VA = "0x45B5710", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}
}
