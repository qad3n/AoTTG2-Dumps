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
		[Address(RVA = "0x45B3C60", Offset = "0x45B3C60", VA = "0x45B3C60", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x45B3980", Offset = "0x45B3980", VA = "0x45B3980")]
	internal NameNode(DataTable table, char[] text, int start, int pos)
	{
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x45B3C30", Offset = "0x45B3C30", VA = "0x45B3C30")]
	internal NameNode(DataTable table, string name)
	{
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x45B3C80", Offset = "0x45B3C80", VA = "0x45B3C80", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x6000674")]
	[Address(RVA = "0x45B3EE0", Offset = "0x45B3EE0", VA = "0x45B3EE0", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x6000675")]
	[Address(RVA = "0x45B3F10", Offset = "0x45B3F10", VA = "0x45B3F10", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x45B3FA0", Offset = "0x45B3FA0", VA = "0x45B3FA0", Slot = "8")]
	internal override object Eval(int[] records)
	{
		return null;
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x45B3FE0", Offset = "0x45B3FE0", VA = "0x45B3FE0", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x45B3FF0", Offset = "0x45B3FF0", VA = "0x45B3FF0", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x45B4030", Offset = "0x45B4030", VA = "0x45B4030", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x45B4070", Offset = "0x45B4070", VA = "0x45B4070", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x45B40B0", Offset = "0x45B40B0", VA = "0x45B40B0", Slot = "14")]
	internal override bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x45B4110", Offset = "0x45B4110", VA = "0x45B4110", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x45B39D0", Offset = "0x45B39D0", VA = "0x45B39D0")]
	internal static string ParseName(char[] text, int start, int pos)
	{
		return null;
	}
}
