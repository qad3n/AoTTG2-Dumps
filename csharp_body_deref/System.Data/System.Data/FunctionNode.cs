// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.FunctionNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200005F")]
internal sealed class FunctionNode : ExpressionNode
{
	[Token(Token = "0x40001F6")]
	[FieldOffset(Offset = "0x18")]
	internal readonly string _name;

	[Token(Token = "0x40001F7")]
	[FieldOffset(Offset = "0x20")]
	internal readonly int _info;

	[Token(Token = "0x40001F8")]
	[FieldOffset(Offset = "0x24")]
	internal int _argumentCount;

	[Token(Token = "0x40001F9")]
	[FieldOffset(Offset = "0x28")]
	internal ExpressionNode[] _arguments;

	[Token(Token = "0x40001FA")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Function[] s_funcs;

	[Token(Token = "0x17000110")]
	internal FunctionId Aggregate
	{
		[Token(Token = "0x600065E")]
		[Address(RVA = "0x45AC4E0", Offset = "0x45AC4E0", VA = "0x45AC4E0")]
		get
		{
			return default(FunctionId);
		}
	}

	[Token(Token = "0x17000111")]
	internal bool IsAggregate
	{
		[Token(Token = "0x600065F")]
		[Address(RVA = "0x45B1DA0", Offset = "0x45B1DA0", VA = "0x45B1DA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x45AC2B0", Offset = "0x45AC2B0", VA = "0x45AC2B0")]
	internal FunctionNode(DataTable table, string name)
	{
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x45ACA40", Offset = "0x45ACA40", VA = "0x45ACA40")]
	internal void AddArgument(ExpressionNode argument)
	{
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x45AECB0", Offset = "0x45AECB0", VA = "0x45AECB0", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x45AEFB0", Offset = "0x45AEFB0", VA = "0x45AEFB0", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x45AEFD0", Offset = "0x45AEFD0", VA = "0x45AEFD0", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x45B1940", Offset = "0x45B1940", VA = "0x45B1940", Slot = "8")]
	internal override object Eval(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x45B1980", Offset = "0x45B1980", VA = "0x45B1980", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x45B1A10", Offset = "0x45B1A10", VA = "0x45B1A10", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x45B1A80", Offset = "0x45B1A80", VA = "0x45B1A80", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x45B1AF0", Offset = "0x45B1AF0", VA = "0x45B1AF0", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x45B1B60", Offset = "0x45B1B60", VA = "0x45B1B60", Slot = "14")]
	internal override bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x45B1BE0", Offset = "0x45B1BE0", VA = "0x45B1BE0", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x45AFAA0", Offset = "0x45AFAA0", VA = "0x45AFAA0")]
	private Type GetDataType(ExpressionNode node)
	{
		return null;
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x45AFCF0", Offset = "0x45AFCF0", VA = "0x45AFCF0")]
	private object EvalFunction(FunctionId id, object[] argumentValues, DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x45ACC60", Offset = "0x45ACC60", VA = "0x45ACC60")]
	internal void Check()
	{
	}
}
