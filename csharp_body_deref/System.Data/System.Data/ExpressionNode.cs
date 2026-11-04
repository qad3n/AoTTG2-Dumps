// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.ExpressionNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Data.Common;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000061")]
internal abstract class ExpressionNode
{
	[Token(Token = "0x40001FB")]
	[FieldOffset(Offset = "0x10")]
	private DataTable _table;

	[Token(Token = "0x17000112")]
	internal IFormatProvider FormatProvider
	{
		[Token(Token = "0x6000612")]
		[Address(RVA = "0x2511F40", Offset = "0x2510540", VA = "0x182511F40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000113")]
	internal virtual bool IsSqlColumn
	{
		[Token(Token = "0x6000613")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000114")]
	protected DataTable table
	{
		[Token(Token = "0x6000614")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	protected ExpressionNode(DataTable table)
	{
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
	protected void BindTable(DataTable table)
	{
	}

	[Token(Token = "0x6000616")]
	internal abstract void Bind(DataTable table, List<DataColumn> list);

	[Token(Token = "0x6000617")]
	internal abstract object Eval();

	[Token(Token = "0x6000618")]
	internal abstract object Eval(DataRow row, DataRowVersion version);

	[Token(Token = "0x6000619")]
	internal abstract object Eval(int[] recordNos);

	[Token(Token = "0x600061A")]
	internal abstract bool IsConstant();

	[Token(Token = "0x600061B")]
	internal abstract bool IsTableConstant();

	[Token(Token = "0x600061C")]
	internal abstract bool HasLocalAggregate();

	[Token(Token = "0x600061D")]
	internal abstract bool HasRemoteAggregate();

	[Token(Token = "0x600061E")]
	internal abstract ExpressionNode Optimize();

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "14")]
	internal virtual bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x2511E20", Offset = "0x2510420", VA = "0x182511E20")]
	internal static bool IsInteger(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x2511E00", Offset = "0x2510400", VA = "0x182511E00")]
	internal static bool IsIntegerSql(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000622")]
	[Address(RVA = "0x2511EE0", Offset = "0x25104E0", VA = "0x182511EE0")]
	internal static bool IsSigned(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x2511EA0", Offset = "0x25104A0", VA = "0x182511EA0")]
	internal static bool IsSignedSql(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x2511F20", Offset = "0x2510520", VA = "0x182511F20")]
	internal static bool IsUnsigned(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x2511F00", Offset = "0x2510500", VA = "0x182511F00")]
	internal static bool IsUnsignedSql(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x2511E70", Offset = "0x2510470", VA = "0x182511E70")]
	internal static bool IsNumeric(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x2511E40", Offset = "0x2510440", VA = "0x182511E40")]
	internal static bool IsNumericSql(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x2511DE0", Offset = "0x25103E0", VA = "0x182511DE0")]
	internal static bool IsFloat(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x2511DC0", Offset = "0x25103C0", VA = "0x182511DC0")]
	internal static bool IsFloatSql(StorageType type)
	{
		return default(bool);
	}
}
