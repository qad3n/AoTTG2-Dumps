// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.FunctionNode
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200001C")]
internal sealed class FunctionNode : ExpressionNode
{
	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x18")]
	internal readonly string _name;

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x20")]
	internal readonly int _info;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x24")]
	internal int _argumentCount;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x28")]
	internal ExpressionNode[] _arguments;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x30")]
	private readonly TypeLimiter? _capturedLimiter;

	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Function[] s_funcs;

	[Token(Token = "0x17000074")]
	internal FunctionId Aggregate
	{
		[Token(Token = "0x6000315")]
		[Address(RVA = "0x24E3D30", Offset = "0x24E2330", VA = "0x1824E3D30")]
		get
		{
			return default(FunctionId);
		}
	}

	[Token(Token = "0x17000075")]
	internal bool IsAggregate
	{
		[Token(Token = "0x6000316")]
		[Address(RVA = "0x24E3DD0", Offset = "0x24E23D0", VA = "0x1824E3DD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x24E3BD0", Offset = "0x24E21D0", VA = "0x1824E3BD0")]
	internal FunctionNode(DataTable table, string name)
	{
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x24DF9E0", Offset = "0x24DDFE0", VA = "0x1824DF9E0")]
	internal void AddArgument(ExpressionNode argument)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x24DFBD0", Offset = "0x24DE1D0", VA = "0x1824DFBD0", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x24E2A50", Offset = "0x24E1050", VA = "0x1824E2A50", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x24E1F40", Offset = "0x24E0540", VA = "0x1824E1F40", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x24E2A10", Offset = "0x24E1010", VA = "0x1824E2A10", Slot = "8")]
	internal override object Eval(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x24E2E10", Offset = "0x24E1410", VA = "0x1824E2E10", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x24E2E80", Offset = "0x24E1480", VA = "0x1824E2E80", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x24E2D30", Offset = "0x24E1330", VA = "0x1824E2D30", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x24E2DA0", Offset = "0x24E13A0", VA = "0x1824E2DA0", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x24E0140", Offset = "0x24DE740", VA = "0x1824E0140", Slot = "14")]
	internal override bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x24E2EF0", Offset = "0x24E14F0", VA = "0x1824E2EF0", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x24E2A70", Offset = "0x24E1070", VA = "0x1824E2A70")]
	private Type GetDataType(ExpressionNode node)
	{
		return null;
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x24E01D0", Offset = "0x24DE7D0", VA = "0x1824E01D0")]
	private object EvalFunction(FunctionId id, object[] argumentValues, DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x24DFEE0", Offset = "0x24DE4E0", VA = "0x1824DFEE0")]
	internal void Check()
	{
	}
}
