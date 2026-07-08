using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000063")]
internal sealed class LookupNode : ExpressionNode
{
	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _relationName;

	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _columnName;

	[Token(Token = "0x400022D")]
	[FieldOffset(Offset = "0x28")]
	private DataColumn _column;

	[Token(Token = "0x400022E")]
	[FieldOffset(Offset = "0x30")]
	private DataRelation _relation;

	[Token(Token = "0x6000665")]
	[Address(RVA = "0x4275D60", Offset = "0x4275D60", VA = "0x4275D60")]
	internal LookupNode(DataTable table, string columnName, string relationName)
	{
	}

	[Token(Token = "0x6000666")]
	[Address(RVA = "0x4275DA0", Offset = "0x4275DA0", VA = "0x4275DA0", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x4276060", Offset = "0x4276060", VA = "0x4276060", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x4276090", Offset = "0x4276090", VA = "0x4276090", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x4276180", Offset = "0x4276180", VA = "0x4276180", Slot = "8")]
	internal override object Eval(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x42761C0", Offset = "0x42761C0", VA = "0x42761C0", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x42761D0", Offset = "0x42761D0", VA = "0x42761D0", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x42761E0", Offset = "0x42761E0", VA = "0x42761E0", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x600066D")]
	[Address(RVA = "0x42761F0", Offset = "0x42761F0", VA = "0x42761F0", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x4276200", Offset = "0x4276200", VA = "0x4276200", Slot = "14")]
	internal override bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x4276210", Offset = "0x4276210", VA = "0x4276210", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}
}
