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
		[Address(RVA = "0x5EB53D0", Offset = "0x5EB43D0", VA = "0x5EB53D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000113")]
	internal virtual bool IsSqlColumn
	{
		[Token(Token = "0x6000613")]
		[Address(RVA = "0x5EB90F0", Offset = "0x5EB80F0", VA = "0x5EB90F0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000114")]
	protected DataTable table
	{
		[Token(Token = "0x6000614")]
		[Address(RVA = "0x5EB9100", Offset = "0x5EB8100", VA = "0x5EB9100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x5EACE20", Offset = "0x5EABE20", VA = "0x5EACE20")]
	protected ExpressionNode(DataTable table)
	{
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x5EB9110", Offset = "0x5EB8110", VA = "0x5EB9110")]
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
	[Address(RVA = "0x5EB9120", Offset = "0x5EB8120", VA = "0x5EB9120", Slot = "14")]
	internal virtual bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x5EB63C0", Offset = "0x5EB53C0", VA = "0x5EB63C0")]
	internal static bool IsInteger(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x5EB6230", Offset = "0x5EB5230", VA = "0x5EB6230")]
	internal static bool IsIntegerSql(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000622")]
	[Address(RVA = "0x5EB62F0", Offset = "0x5EB52F0", VA = "0x5EB62F0")]
	internal static bool IsSigned(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x5EB6370", Offset = "0x5EB5370", VA = "0x5EB6370")]
	internal static bool IsSignedSql(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x5EB6310", Offset = "0x5EB5310", VA = "0x5EB6310")]
	internal static bool IsUnsigned(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x5EB6390", Offset = "0x5EB5390", VA = "0x5EB6390")]
	internal static bool IsUnsignedSql(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x5EB63B0", Offset = "0x5EB53B0", VA = "0x5EB63B0")]
	internal static bool IsNumeric(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x5EB6400", Offset = "0x5EB5400", VA = "0x5EB6400")]
	internal static bool IsNumericSql(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x5EB9130", Offset = "0x5EB8130", VA = "0x5EB9130")]
	internal static bool IsFloat(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x5EB9140", Offset = "0x5EB8140", VA = "0x5EB9140")]
	internal static bool IsFloatSql(StorageType type)
	{
		return default(bool);
	}
}
