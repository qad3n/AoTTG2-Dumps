using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000064")]
internal sealed class NameNode : ExpressionNode
{
	[Token(Token = "0x400022F")]
	[FieldOffset(Offset = "0x18")]
	internal string _name;

	[Token(Token = "0x4000230")]
	[FieldOffset(Offset = "0x20")]
	internal bool _found;

	[Token(Token = "0x4000231")]
	[FieldOffset(Offset = "0x28")]
	internal DataColumn _column;

	[Token(Token = "0x17000112")]
	internal override bool IsSqlColumn
	{
		[Token(Token = "0x6000672")]
		[Address(RVA = "0x4276500", Offset = "0x4276500", VA = "0x4276500", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x4276220", Offset = "0x4276220", VA = "0x4276220")]
	internal NameNode(DataTable table, char[] text, int start, int pos)
	{
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x42764D0", Offset = "0x42764D0", VA = "0x42764D0")]
	internal NameNode(DataTable table, string name)
	{
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x4276520", Offset = "0x4276520", VA = "0x4276520", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x6000674")]
	[Address(RVA = "0x4276780", Offset = "0x4276780", VA = "0x4276780", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x6000675")]
	[Address(RVA = "0x42767B0", Offset = "0x42767B0", VA = "0x42767B0", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x4276840", Offset = "0x4276840", VA = "0x4276840", Slot = "8")]
	internal override object Eval(int[] records)
	{
		return null;
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x4276880", Offset = "0x4276880", VA = "0x4276880", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x4276890", Offset = "0x4276890", VA = "0x4276890", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x42768D0", Offset = "0x42768D0", VA = "0x42768D0", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x4276910", Offset = "0x4276910", VA = "0x4276910", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x4276950", Offset = "0x4276950", VA = "0x4276950", Slot = "14")]
	internal override bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x42769B0", Offset = "0x42769B0", VA = "0x42769B0", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x4276270", Offset = "0x4276270", VA = "0x4276270")]
	internal static string ParseName(char[] text, int start, int pos)
	{
		return null;
	}
}
