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
		[Address(RVA = "0x426ED80", Offset = "0x426ED80", VA = "0x426ED80")]
		get
		{
			return default(FunctionId);
		}
	}

	[Token(Token = "0x17000111")]
	internal bool IsAggregate
	{
		[Token(Token = "0x600065F")]
		[Address(RVA = "0x4274640", Offset = "0x4274640", VA = "0x4274640")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x426EB50", Offset = "0x426EB50", VA = "0x426EB50")]
	internal FunctionNode(DataTable table, string name)
	{
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x426F2E0", Offset = "0x426F2E0", VA = "0x426F2E0")]
	internal void AddArgument(ExpressionNode argument)
	{
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x4271550", Offset = "0x4271550", VA = "0x4271550", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x4271850", Offset = "0x4271850", VA = "0x4271850", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x4271870", Offset = "0x4271870", VA = "0x4271870", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x42741E0", Offset = "0x42741E0", VA = "0x42741E0", Slot = "8")]
	internal override object Eval(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x4274220", Offset = "0x4274220", VA = "0x4274220", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x42742B0", Offset = "0x42742B0", VA = "0x42742B0", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x4274320", Offset = "0x4274320", VA = "0x4274320", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x4274390", Offset = "0x4274390", VA = "0x4274390", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x4274400", Offset = "0x4274400", VA = "0x4274400", Slot = "14")]
	internal override bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x4274480", Offset = "0x4274480", VA = "0x4274480", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x4272340", Offset = "0x4272340", VA = "0x4272340")]
	private Type GetDataType(ExpressionNode node)
	{
		return null;
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x4272590", Offset = "0x4272590", VA = "0x4272590")]
	private object EvalFunction(FunctionId id, object[] argumentValues, DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x426F500", Offset = "0x426F500", VA = "0x426F500")]
	internal void Check()
	{
	}
}
