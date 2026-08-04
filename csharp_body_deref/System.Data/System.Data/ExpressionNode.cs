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

[Token(Token = "0x2000054")]
internal abstract class ExpressionNode
{
	[Token(Token = "0x40001B3")]
	[FieldOffset(Offset = "0x10")]
	private DataTable _table;

	[Token(Token = "0x1700010D")]
	internal IFormatProvider FormatProvider
	{
		[Token(Token = "0x60005DF")]
		[Address(RVA = "0x45A6E50", Offset = "0x45A6E50", VA = "0x45A6E50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010E")]
	internal virtual bool IsSqlColumn
	{
		[Token(Token = "0x60005E0")]
		[Address(RVA = "0x45AB610", Offset = "0x45AB610", VA = "0x45AB610", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010F")]
	protected DataTable table
	{
		[Token(Token = "0x60005E1")]
		[Address(RVA = "0x45AB620", Offset = "0x45AB620", VA = "0x45AB620")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x459B100", Offset = "0x459B100", VA = "0x459B100")]
	protected ExpressionNode(DataTable table)
	{
	}

	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x45AB630", Offset = "0x45AB630", VA = "0x45AB630")]
	protected void BindTable(DataTable table)
	{
	}

	[Token(Token = "0x60005E3")]
	internal abstract void Bind(DataTable table, List<DataColumn> list);

	[Token(Token = "0x60005E4")]
	internal abstract object Eval();

	[Token(Token = "0x60005E5")]
	internal abstract object Eval(DataRow row, DataRowVersion version);

	[Token(Token = "0x60005E6")]
	internal abstract object Eval(int[] recordNos);

	[Token(Token = "0x60005E7")]
	internal abstract bool IsConstant();

	[Token(Token = "0x60005E8")]
	internal abstract bool IsTableConstant();

	[Token(Token = "0x60005E9")]
	internal abstract bool HasLocalAggregate();

	[Token(Token = "0x60005EA")]
	internal abstract bool HasRemoteAggregate();

	[Token(Token = "0x60005EB")]
	internal abstract ExpressionNode Optimize();

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x45AB640", Offset = "0x45AB640", VA = "0x45AB640", Slot = "14")]
	internal virtual bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x45A8190", Offset = "0x45A8190", VA = "0x45A8190")]
	internal static bool IsInteger(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x45A7D80", Offset = "0x45A7D80", VA = "0x45A7D80")]
	internal static bool IsIntegerSql(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x45A8040", Offset = "0x45A8040", VA = "0x45A8040")]
	internal static bool IsSigned(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x45A8110", Offset = "0x45A8110", VA = "0x45A8110")]
	internal static bool IsSignedSql(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x45A8070", Offset = "0x45A8070", VA = "0x45A8070")]
	internal static bool IsUnsigned(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x45A8140", Offset = "0x45A8140", VA = "0x45A8140")]
	internal static bool IsUnsignedSql(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x45A8170", Offset = "0x45A8170", VA = "0x45A8170")]
	internal static bool IsNumeric(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x45A82F0", Offset = "0x45A82F0", VA = "0x45A82F0")]
	internal static bool IsNumericSql(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x45AB650", Offset = "0x45AB650", VA = "0x45AB650")]
	internal static bool IsFloat(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x45AB670", Offset = "0x45AB670", VA = "0x45AB670")]
	internal static bool IsFloatSql(StorageType type)
	{
		return default(bool);
	}
}
