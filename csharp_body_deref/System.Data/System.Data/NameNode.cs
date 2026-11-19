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
		[Address(RVA = "0x5EBD390", Offset = "0x5EBC390", VA = "0x5EBD390", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x5EBD0D0", Offset = "0x5EBC0D0", VA = "0x5EBD0D0")]
	internal NameNode(DataTable table, char[] text, int start, int pos)
	{
	}

	[Token(Token = "0x6000690")]
	[Address(RVA = "0x5EBD360", Offset = "0x5EBC360", VA = "0x5EBD360")]
	internal NameNode(DataTable table, string name)
	{
	}

	[Token(Token = "0x6000692")]
	[Address(RVA = "0x5EBD3B0", Offset = "0x5EBC3B0", VA = "0x5EBD3B0", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x6000693")]
	[Address(RVA = "0x5EBD600", Offset = "0x5EBC600", VA = "0x5EBD600", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x5EBD620", Offset = "0x5EBC620", VA = "0x5EBD620", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000695")]
	[Address(RVA = "0x5EBD6B0", Offset = "0x5EBC6B0", VA = "0x5EBD6B0", Slot = "8")]
	internal override object Eval(int[] records)
	{
		return null;
	}

	[Token(Token = "0x6000696")]
	[Address(RVA = "0x5EBD6F0", Offset = "0x5EBC6F0", VA = "0x5EBD6F0", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x6000697")]
	[Address(RVA = "0x5EBD700", Offset = "0x5EBC700", VA = "0x5EBD700", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x6000698")]
	[Address(RVA = "0x5EBD740", Offset = "0x5EBC740", VA = "0x5EBD740", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000699")]
	[Address(RVA = "0x5EBD780", Offset = "0x5EBC780", VA = "0x5EBD780", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x600069A")]
	[Address(RVA = "0x5EBD7C0", Offset = "0x5EBC7C0", VA = "0x5EBD7C0", Slot = "14")]
	internal override bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x600069B")]
	[Address(RVA = "0x5EBD820", Offset = "0x5EBC820", VA = "0x5EBD820", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x5EBD120", Offset = "0x5EBC120", VA = "0x5EBD120")]
	internal static string ParseName(char[] text, int start, int pos)
	{
		return null;
	}
}
