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
		[Address(RVA = "0x42696F0", Offset = "0x42696F0", VA = "0x42696F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010E")]
	internal virtual bool IsSqlColumn
	{
		[Token(Token = "0x60005E0")]
		[Address(RVA = "0x426DEB0", Offset = "0x426DEB0", VA = "0x426DEB0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010F")]
	protected DataTable table
	{
		[Token(Token = "0x60005E1")]
		[Address(RVA = "0x426DEC0", Offset = "0x426DEC0", VA = "0x426DEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x425D9A0", Offset = "0x425D9A0", VA = "0x425D9A0")]
	protected ExpressionNode(DataTable table)
	{
	}

	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x426DED0", Offset = "0x426DED0", VA = "0x426DED0")]
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
	[Address(RVA = "0x426DEE0", Offset = "0x426DEE0", VA = "0x426DEE0", Slot = "14")]
	internal virtual bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x426AA30", Offset = "0x426AA30", VA = "0x426AA30")]
	internal static bool IsInteger(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x426A620", Offset = "0x426A620", VA = "0x426A620")]
	internal static bool IsIntegerSql(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x426A8E0", Offset = "0x426A8E0", VA = "0x426A8E0")]
	internal static bool IsSigned(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x426A9B0", Offset = "0x426A9B0", VA = "0x426A9B0")]
	internal static bool IsSignedSql(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x426A910", Offset = "0x426A910", VA = "0x426A910")]
	internal static bool IsUnsigned(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x426A9E0", Offset = "0x426A9E0", VA = "0x426A9E0")]
	internal static bool IsUnsignedSql(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x426AA10", Offset = "0x426AA10", VA = "0x426AA10")]
	internal static bool IsNumeric(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x426AB90", Offset = "0x426AB90", VA = "0x426AB90")]
	internal static bool IsNumericSql(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x426DEF0", Offset = "0x426DEF0", VA = "0x426DEF0")]
	internal static bool IsFloat(StorageType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x426DF10", Offset = "0x426DF10", VA = "0x426DF10")]
	internal static bool IsFloatSql(StorageType type)
	{
		return default(bool);
	}
}
