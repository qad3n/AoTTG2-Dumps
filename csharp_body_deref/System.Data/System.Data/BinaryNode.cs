// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.BinaryNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Data.Common;
using System.Globalization;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200004F")]
internal class BinaryNode : ExpressionNode
{
	[Token(Token = "0x2000050")]
	private enum DataTypePrecedence
	{
		[Token(Token = "0x4000186")]
		SqlDateTime = 25,
		[Token(Token = "0x4000187")]
		DateTimeOffset = 24,
		[Token(Token = "0x4000188")]
		DateTime = 23,
		[Token(Token = "0x4000189")]
		TimeSpan = 20,
		[Token(Token = "0x400018A")]
		SqlDouble = 19,
		[Token(Token = "0x400018B")]
		Double = 18,
		[Token(Token = "0x400018C")]
		SqlSingle = 17,
		[Token(Token = "0x400018D")]
		Single = 16,
		[Token(Token = "0x400018E")]
		SqlDecimal = 15,
		[Token(Token = "0x400018F")]
		Decimal = 14,
		[Token(Token = "0x4000190")]
		SqlMoney = 13,
		[Token(Token = "0x4000191")]
		UInt64 = 12,
		[Token(Token = "0x4000192")]
		SqlInt64 = 11,
		[Token(Token = "0x4000193")]
		Int64 = 10,
		[Token(Token = "0x4000194")]
		UInt32 = 9,
		[Token(Token = "0x4000195")]
		SqlInt32 = 8,
		[Token(Token = "0x4000196")]
		Int32 = 7,
		[Token(Token = "0x4000197")]
		UInt16 = 6,
		[Token(Token = "0x4000198")]
		SqlInt16 = 5,
		[Token(Token = "0x4000199")]
		Int16 = 4,
		[Token(Token = "0x400019A")]
		Byte = 3,
		[Token(Token = "0x400019B")]
		SqlByte = 2,
		[Token(Token = "0x400019C")]
		SByte = 1,
		[Token(Token = "0x400019D")]
		Error = 0,
		[Token(Token = "0x400019E")]
		SqlBoolean = -1,
		[Token(Token = "0x400019F")]
		Boolean = -2,
		[Token(Token = "0x40001A0")]
		SqlGuid = -3,
		[Token(Token = "0x40001A1")]
		SqlString = -4,
		[Token(Token = "0x40001A2")]
		String = -5,
		[Token(Token = "0x40001A3")]
		SqlXml = -6,
		[Token(Token = "0x40001A4")]
		SqlChars = -7,
		[Token(Token = "0x40001A5")]
		Char = -8,
		[Token(Token = "0x40001A6")]
		SqlBytes = -9,
		[Token(Token = "0x40001A7")]
		SqlBinary = -10
	}

	[Token(Token = "0x4000182")]
	[FieldOffset(Offset = "0x18")]
	internal int _op;

	[Token(Token = "0x4000183")]
	[FieldOffset(Offset = "0x20")]
	internal ExpressionNode _left;

	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0x28")]
	internal ExpressionNode _right;

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x459BEF0", Offset = "0x459BEF0", VA = "0x459BEF0")]
	internal BinaryNode(DataTable table, int op, ExpressionNode left, ExpressionNode right)
	{
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x459BF50", Offset = "0x459BF50", VA = "0x459BF50", Slot = "5")]
	internal override void Bind(DataTable table, List<DataColumn> list)
	{
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x459BFC0", Offset = "0x459BFC0", VA = "0x459BFC0", Slot = "6")]
	internal override object Eval()
	{
		return null;
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x459BFE0", Offset = "0x459BFE0", VA = "0x459BFE0", Slot = "7")]
	internal override object Eval(DataRow row, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x45A4C00", Offset = "0x45A4C00", VA = "0x45A4C00", Slot = "8")]
	internal override object Eval(int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x45A4C30", Offset = "0x45A4C30", VA = "0x45A4C30", Slot = "9")]
	internal override bool IsConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x45A4C80", Offset = "0x45A4C80", VA = "0x45A4C80", Slot = "10")]
	internal override bool IsTableConstant()
	{
		return default(bool);
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x45A4CD0", Offset = "0x45A4CD0", VA = "0x45A4CD0", Slot = "11")]
	internal override bool HasLocalAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x45A4D20", Offset = "0x45A4D20", VA = "0x45A4D20", Slot = "12")]
	internal override bool HasRemoteAggregate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x45A4D70", Offset = "0x45A4D70", VA = "0x45A4D70", Slot = "14")]
	internal override bool DependsOn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x45A4DD0", Offset = "0x45A4DD0", VA = "0x45A4DD0", Slot = "13")]
	internal override ExpressionNode Optimize()
	{
		return null;
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x45A5360", Offset = "0x45A5360", VA = "0x45A5360")]
	internal void SetTypeMismatchError(int op, Type left, Type right)
	{
	}

	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x45A54A0", Offset = "0x45A54A0", VA = "0x45A54A0")]
	private static object Eval(ExpressionNode expr, DataRow row, DataRowVersion version, int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x45A54E0", Offset = "0x45A54E0", VA = "0x45A54E0")]
	internal int BinaryCompare(object vLeft, object vRight, StorageType resultType, int op)
	{
		return default(int);
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x45A54F0", Offset = "0x45A54F0", VA = "0x45A54F0")]
	internal int BinaryCompare(object vLeft, object vRight, StorageType resultType, int op, CompareInfo comparer)
	{
		return default(int);
	}

	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x459C010", Offset = "0x459C010", VA = "0x459C010")]
	private object EvalBinaryOp(int op, ExpressionNode left, ExpressionNode right, DataRow row, DataRowVersion version, int[] recordNos)
	{
		return null;
	}

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x45A7FA0", Offset = "0x45A7FA0", VA = "0x45A7FA0")]
	private DataTypePrecedence GetPrecedence(StorageType storageType)
	{
		return default(DataTypePrecedence);
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x45A7FC0", Offset = "0x45A7FC0", VA = "0x45A7FC0")]
	private static StorageType GetPrecedenceType(DataTypePrecedence code)
	{
		return default(StorageType);
	}

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x45A7FE0", Offset = "0x45A7FE0", VA = "0x45A7FE0")]
	private bool IsMixed(StorageType left, StorageType right)
	{
		return default(bool);
	}

	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x45A8090", Offset = "0x45A8090", VA = "0x45A8090")]
	private bool IsMixedSql(StorageType left, StorageType right)
	{
		return default(bool);
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x45A7620", Offset = "0x45A7620", VA = "0x45A7620")]
	internal StorageType ResultType(StorageType left, StorageType right, bool lc, bool rc, int op)
	{
		return default(StorageType);
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x45A7180", Offset = "0x45A7180", VA = "0x45A7180")]
	internal StorageType ResultSqlType(StorageType left, StorageType right, bool lc, bool rc, int op)
	{
		return default(StorageType);
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x45A82C0", Offset = "0x45A82C0", VA = "0x45A82C0")]
	private int SqlResultType(int typeCode)
	{
		return default(int);
	}
}
