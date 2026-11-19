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
		[Address(RVA = "0x5E87710", Offset = "0x5E86710", VA = "0x5E87710")]
		get
		{
			return default(FunctionId);
		}
	}

	[Token(Token = "0x17000075")]
	internal bool IsAggregate
	{
		[Token(Token = "0x6000316")]
		[Address(RVA = "0x5E877A0", Offset = "0x5E867A0", VA = "0x5E877A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x5E84720", Offset = "0x5E83720", VA = "0x5E84720")]
	internal FunctionNode(DataTable table, string name)
	{
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x5E84870", Offset = "0x5E83870", VA = "0x5E84870")]
	internal void AddArgument(ExpressionNode argument)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x5E84A70", Offset = "0x5E83A70", VA = "0x5E84A70", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x5E84F70", Offset = "0x5E83F70", VA = "0x5E84F70", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x5E84F90", Offset = "0x5E83F90", VA = "0x5E84F90", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x5E872B0", Offset = "0x5E862B0", VA = "0x5E872B0", Slot = "8")]
	internal override object Eval(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x5E872F0", Offset = "0x5E862F0", VA = "0x5E872F0", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x5E87380", Offset = "0x5E86380", VA = "0x5E87380", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x5E873F0", Offset = "0x5E863F0", VA = "0x5E873F0", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x5E87460", Offset = "0x5E86460", VA = "0x5E87460", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x5E874D0", Offset = "0x5E864D0", VA = "0x5E874D0", Slot = "14")]
	internal override bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x5E87540", Offset = "0x5E86540", VA = "0x5E87540", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x5E859B0", Offset = "0x5E849B0", VA = "0x5E859B0")]
	private Type GetDataType(ExpressionNode node)
	{
		return null;
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x5E85C20", Offset = "0x5E84C20", VA = "0x5E85C20")]
	private object EvalFunction(FunctionId id, object[] argumentValues, DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x5E84D80", Offset = "0x5E83D80", VA = "0x5E84D80")]
	internal void Check()
	{
	}
}
