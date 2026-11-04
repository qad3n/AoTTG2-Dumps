// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.NameNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200006E")]
internal sealed class NameNode : ExpressionNode
{
	[Token(Token = "0x4000242")]
	[FieldOffset(Offset = "0x18")]
	internal string _name;

	[Token(Token = "0x4000243")]
	[FieldOffset(Offset = "0x20")]
	internal bool _found;

	[Token(Token = "0x4000244")]
	[FieldOffset(Offset = "0x28")]
	internal DataColumn _column;

	[Token(Token = "0x17000115")]
	internal override bool IsSqlColumn
	{
		[Token(Token = "0x6000691")]
		[Address(RVA = "0x2522780", Offset = "0x2520D80", VA = "0x182522780", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x25226E0", Offset = "0x2520CE0", VA = "0x1825226E0")]
	internal NameNode(DataTable table, char[] text, int start, int pos)
	{
	}

	[Token(Token = "0x6000690")]
	[Address(RVA = "0x2522740", Offset = "0x2520D40", VA = "0x182522740")]
	internal NameNode(DataTable table, string name)
	{
	}

	[Token(Token = "0x6000692")]
	[Address(RVA = "0x2522000", Offset = "0x2520600", VA = "0x182522000", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x6000693")]
	[Address(RVA = "0x2522370", Offset = "0x2520970", VA = "0x182522370", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x2522260", Offset = "0x2520860", VA = "0x182522260", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000695")]
	[Address(RVA = "0x2522330", Offset = "0x2520930", VA = "0x182522330", Slot = "8")]
	internal override object Eval(int[] records)
	{
		return null;
	}

	[Token(Token = "0x6000696")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x6000697")]
	[Address(RVA = "0x2522440", Offset = "0x2520A40", VA = "0x182522440", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x6000698")]
	[Address(RVA = "0x25223A0", Offset = "0x25209A0", VA = "0x1825223A0", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000699")]
	[Address(RVA = "0x25223F0", Offset = "0x25209F0", VA = "0x1825223F0", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x600069A")]
	[Address(RVA = "0x25221F0", Offset = "0x25207F0", VA = "0x1825221F0", Slot = "14")]
	internal override bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x600069B")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x2522490", Offset = "0x2520A90", VA = "0x182522490")]
	internal static string ParseName(char[] text, int start, int pos)
	{
		return null;
	}
}
